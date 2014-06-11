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
	//��ѯ�߳���ɺ󣬰󶨵�����table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//���ó��򱳾�ͼƬ
	QPixmap pixmap("Resources/emp backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//��������ʾQLineEdit�������ʽ
	ui.employeeID_search_employee_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.employeeID_modify_employee_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.employeeID_del_employee_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
}

bool Employee::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		ui.status_employee_LB->setText(status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		QMessageBox::information(NULL,"����",status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_employee_LB->setText(status + "���ݿ�ɹ���");
		return true;
	}
}

void Employee::updateTableWidget(QSqlQuery* query)
{
	ui.employeeInfo_employee_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "��ѯ");

	while(query->next())
	{
		//��������Ϣ���뵽QTableWidget�ؼ���
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
		QMessageBox::information(NULL,"����","û�д�ID��Ա����");
		return ;
	}
	//��ʼ���޸Ĵ��ڵĸ����ؼ��ĳ�ʼֵ
	//�Ȼ�ȡ��Ա����Ϣ�����û�д�ID����ֱ����ʾ������
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
	QMessageBox mb("ȷ��", "ȷ��ɾ����Ա����Ϣ��",
		QMessageBox::Question,
		QMessageBox::Yes   |   QMessageBox::Default,
		QMessageBox::No     |   QMessageBox::Escape,
		QMessageBox::NoButton);

	if(mb.exec() == QMessageBox::No)   
		return;

	//�Ȳ����ǲ��������ID��Ա��
	QSqlQuery query;
	QString sqlWords = QString("call getEmployeesListByID_mgmt_employee('%1');").arg(ui.employeeID_del_employee_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"����","û�д�ID��Ա����");
		return ;
	}
	//�д�Ա������ɾ��
	sqlWords = QString("call delEmployee_mgmt_employee('%1');").arg(ui.employeeID_del_employee_LE->text());
	query.exec(sqlWords);
	checkExecSqlRes(&query, "ɾ��");
}

void Employee::on_add_modify_employee_BTN_clicked()
{
	EmployeeModify employeeModifyUI;
	QSqlQuery query;
	QString sqlWords = QString("call getMaxEmployeeID();");
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"����","��ȡԱ��IDʧ��");
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
		QMessageBox::information(NULL,"����","���԰�ֻ֧��9999��Ա����");
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
		ui.status_employee_LB->setText("���ڲ�ѯ�����Ժ�......");
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
		ui.status_employee_LB->setText("���ڲ�ѯ�����Ժ�......");
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
		ui.status_employee_LB->setText("���ڲ�ѯ�����Ժ�......");
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
