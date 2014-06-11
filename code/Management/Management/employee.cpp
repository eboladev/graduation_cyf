#include "employee.h"
#include "employeeModify.h"
#include "dataClass.h"

Employee::Employee(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Employee::~Employee()
{

}

void Employee::widgetInit()
{
	//查询线程完成后，绑定到更新table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//设置程序背景图片
	QPixmap pixmap("Resources/emp backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//用正则显示QLineEdit的输入格式
	ui.employeeID_search_employee_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.employeeID_modify_employee_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.employeeID_del_employee_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
}

bool Employee::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		ui.status_employee_LB->setText(status + "数据库失败！" + query->lastError().text());
		QMessageBox::information(NULL,"错误",status + "数据库失败！" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_employee_LB->setText(status + "数据库成功！");
		return true;
	}
}

void Employee::updateTableWidget(QSqlQuery* query)
{
	ui.employeeInfo_employee_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "查询");

	while(query->next())
	{
		//将各个信息插入到QTableWidget控件中
		QTableWidgetItem *id, *name, *context;
		int row = ui.employeeInfo_employee_TBW->rowCount();
		ui.employeeInfo_employee_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.employeeInfo_employee_TBW->setItem(row,0,id);
		name = new QTableWidgetItem(query->value(1).toString());
		name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.employeeInfo_employee_TBW->setItem(row,1,name);
		context = new QTableWidgetItem(query->value(2).toString());
		context->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.employeeInfo_employee_TBW->setItem(row,2,context);
		
	}
}

void Employee::on_modify_modify_employee_BTN_clicked()
{
	QSqlQuery query;
	QString sqlWords = QString("call getEmployeesListByID_mgmt_employee('%1');").arg(ui.employeeID_modify_employee_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此ID的员工！");
		return ;
	}
	//初始化修改窗口的各个控件的初始值
	//先获取此员工信息，如果没有此ID，则直接提示并返回
	EmployeeModify employeeModifyUI;
	employeeModifyUI.setModifyID(query.value(0).toString());
	employeeModifyUI.setModifyName(query.value(1).toString());
	employeeModifyUI.setModifyRemark(query.value(3).toString());
	employeeModifyUI.setModifyClass(query.value(2).toString());
	employeeModifyUI.isUpdateDatabase(true);
	employeeModifyUI.exec();
}

void Employee::on_del_modify_employee_BTN_clicked()
{
	QMessageBox mb("确认", "确定删除此员工信息？",
		QMessageBox::Question,
		QMessageBox::Yes   |   QMessageBox::Default,
		QMessageBox::No     |   QMessageBox::Escape,
		QMessageBox::NoButton);

	if(mb.exec() == QMessageBox::No)   
		return;

	//先测试是不是有这个ID的员工
	QSqlQuery query;
	QString sqlWords = QString("call getEmployeesListByID_mgmt_employee('%1');").arg(ui.employeeID_del_employee_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此ID的员工！");
		return ;
	}
	//有此员工，则删除
	sqlWords = QString("call delEmployee_mgmt_employee('%1');").arg(ui.employeeID_del_employee_LE->text());
	query.exec(sqlWords);
	checkExecSqlRes(&query, "删除");
}

void Employee::on_add_modify_employee_BTN_clicked()
{
	EmployeeModify employeeModifyUI;
	QSqlQuery query;
	QString sqlWords = QString("call getMaxEmployeeID();");
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误","获取员工ID失败");
		return ;
	}
	query.next();
	int newEmployeeID = query.value(0).toInt() + 1;
	QString id;
	if(newEmployeeID < 10)
		id = "000" + QString::number(newEmployeeID);
	else if(newEmployeeID < 100)
		id = "00" + QString::number(newEmployeeID);
	else if(newEmployeeID < 1000)
		id = "0" + QString::number(newEmployeeID);
	else if(newEmployeeID < 10000)
		id = QString::number(newEmployeeID);
	else
	{
		QMessageBox::information(NULL,"错误","测试版只支持9999个员工！");
		return ;
	}
	employeeModifyUI.setModifyID(id);
	employeeModifyUI.isUpdateDatabase(false);
	employeeModifyUI.exec();
}


void Employee::on_search_search_employee_BTN_clicked()
{
	if(ui.employeeID_search_employee_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getEmployeesListByID_mgmt_employee('%1');").arg(ui.employeeID_search_employee_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_employee_LB->setText("正在查询，请稍后......");
//		ui.employeeID_search_employee_LE->setText("");
		return ;
	}
	if(ui.employeeName_search_employee_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getEmployeesListByName_mgmt_employee('%1');").arg(ui.employeeName_search_employee_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_employee_LB->setText("正在查询，请稍后......");
//		ui.employeeName_search_employee_LE->setText("");
		return ;
	}
	if(ui.employeeAll_search_employee_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getEmployeesListByAll_mgmt_employee();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_employee_LB->setText("正在查询，请稍后......");
		return ;
	}
}

void Employee::on_employeeID_search_employee_RBTN_toggled(bool checked)
{
	ui.employeeID_search_employee_LE->setDisabled(!checked);
}

void Employee::on_employeeName_search_employee_RBTN_toggled(bool checked)
{
	ui.employeeName_search_employee_LE->setDisabled(!checked);
}
