#include "specialOP.h"
#include "dataClass.h"

SpecialOP::SpecialOP(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

SpecialOP::~SpecialOP()
{

}


void SpecialOP::widgetInit()
{
	//查询线程完成后，绑定到更新table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//初始化下拉列表框  类别
	QSqlQuery query;
	QString sqlWords = "call getOpClassList_mgmt_op();";
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误","获取类别出错！");
		ui.status_op_LB->setText("获取类别出错！");
	}
	else
	{
		while (query.next())
			ui.opClass_search_op_CB->addItem(query.value(0).toString());
	}

	//初始化背景
	QPixmap pixmap("Resources/op backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//用正则表达式限制QLineEdit的输入格式
	ui.employeeID_search_op_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));

}

void SpecialOP::on_search_search_op_BTN_clicked()
{
	//首先检查是否有选中的条件，没有的话，返回错误
	if(!ui.employeeID_search_op_CKB->isChecked() && !ui.opClass_search_op_CKB->isChecked() &&
		!ui.opTime_search_op_CKB->isChecked() && !ui.opAll_search_op_CKB->isChecked())
	{
		QMessageBox::information(this,"错误","请先选择查询条件");
		return ;
	}
	if(ui.opTime_search_op_CKB->isChecked() && ui.timeStart_search_op_DTE->date() >= ui.timeEnd_search_op_DTE->date())
	{
		QMessageBox::information(this,"错误","日期设置错误！");
		return ;
	}
	//初始化查询条件的默认值
	QString id = "";
	QString empID = "";
	QString timeStart = "null";
	QString timeEnd = "null";
	//根据输入条件改变条件的值
	if(ui.employeeID_search_op_CKB->isChecked())
		id = ui.employeeID_search_op_LE->text();
	if(ui.opClass_search_op_CKB->isChecked())
		empID = ui.opClass_search_op_CB->currentText();
	if(ui.opTime_search_op_CKB->isChecked())
	{
		timeStart = "'" + ui.timeStart_search_op_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
		timeEnd = "'" + ui.timeEnd_search_op_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
	}
	//将条件带入到存储过程中进行查询
	QSqlQuery query;
	QString sqlWords = QString("call getOplList_mgmt_op('%1','%2',%3,%4)")
		.arg(id).arg(empID).arg(timeStart).arg(timeEnd);
	queryThread.setSqlWords(sqlWords);
	queryThread.start();
	this->setDisabled(true);
	ui.status_op_LB->setText("正在查询，请稍后......");
}

void SpecialOP::updateTableWidget(QSqlQuery* query)
{
	ui.opInfo_op_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "查询");
	while(query->next())
	{
		//将各个信息插入到QTableWidget控件中
		QTableWidgetItem *id, *type, *epl, *time;
		int row = ui.opInfo_op_TBW->rowCount();
		ui.opInfo_op_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.opInfo_op_TBW->setItem(row,0,id);
		type = new QTableWidgetItem(query->value(1).toString());
		type->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.opInfo_op_TBW->setItem(row,1,type);
		epl = new QTableWidgetItem(query->value(2).toString());
		epl->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.opInfo_op_TBW->setItem(row,2,epl);
		time = new QTableWidgetItem(query->value(3).toString().replace("T"," "));
		time->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.opInfo_op_TBW->setItem(row,3,time);
	}
}

bool SpecialOP::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误",status + "数据库失败！" + query->lastError().text());
		ui.status_op_LB->setText(status + "数据库失败！" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_op_LB->setText(status + "数据库成功！");
		return true;
	}
}

void SpecialOP::on_employeeID_search_op_CKB_toggled(bool checked)
{
	ui.employeeID_search_op_LE->setDisabled(!checked);
}

void SpecialOP::on_opClass_search_op_CKB_toggled(bool checked)
{
	ui.opClass_search_op_CB->setDisabled(!checked);
}
void SpecialOP::on_opTime_search_op_CKB_toggled(bool checked)
{
	ui.timeStart_search_op_DTE->setDisabled(!checked);
	ui.timeEnd_search_op_DTE->setDisabled(!checked);
}

void SpecialOP::on_employeeID_search_op_CKB_clicked()
{
	bool checked = ui.employeeID_search_op_CKB->isChecked();
	if(checked)
	{
		ui.opAll_search_op_CKB->setChecked(!checked);
	}
}

void SpecialOP::on_opClass_search_op_CKB_clicked()
{
	bool checked = ui.opClass_search_op_CKB->isChecked();
	if(checked)
	{
		ui.opAll_search_op_CKB->setChecked(!checked);
	}
}

void SpecialOP::on_opAll_search_op_CKB_clicked()
{
	bool checked = ui.opAll_search_op_CKB->isChecked();
	if(checked)
	{
		ui.employeeID_search_op_CKB->setChecked(!checked);
		ui.opClass_search_op_CKB->setChecked(!checked);
	}
}