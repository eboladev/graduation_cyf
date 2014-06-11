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
	//��ѯ�߳���ɺ󣬰󶨵�����table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//��ʼ�������б��  ���
	QSqlQuery query;
	QString sqlWords = "call getOpClassList_mgmt_op();";
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"����","��ȡ������");
		ui.status_op_LB->setText("��ȡ������");
	}
	else
	{
		while (query.next())
			ui.opClass_search_op_CB->addItem(query.value(0).toString());
	}

	//��ʼ������
	QPixmap pixmap("Resources/op backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//��������ʽ����QLineEdit�������ʽ
	ui.employeeID_search_op_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));

}

void SpecialOP::on_search_search_op_BTN_clicked()
{
	//���ȼ���Ƿ���ѡ�е�������û�еĻ������ش���
	if(!ui.employeeID_search_op_CKB->isChecked() && !ui.opClass_search_op_CKB->isChecked() &&
		!ui.opTime_search_op_CKB->isChecked() && !ui.opAll_search_op_CKB->isChecked())
	{
		QMessageBox::information(this,"����","����ѡ���ѯ����");
		return ;
	}
	if(ui.opTime_search_op_CKB->isChecked() && ui.timeStart_search_op_DTE->date() >= ui.timeEnd_search_op_DTE->date())
	{
		QMessageBox::information(this,"����","�������ô���");
		return ;
	}
	//��ʼ����ѯ������Ĭ��ֵ
	QString id = "";
	QString empID = "";
	QString timeStart = "null";
	QString timeEnd = "null";
	//�������������ı�������ֵ
	if(ui.employeeID_search_op_CKB->isChecked())
		id = ui.employeeID_search_op_LE->text();
	if(ui.opClass_search_op_CKB->isChecked())
		empID = ui.opClass_search_op_CB->currentText();
	if(ui.opTime_search_op_CKB->isChecked())
	{
		timeStart = "'" + ui.timeStart_search_op_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
		timeEnd = "'" + ui.timeEnd_search_op_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
	}
	//���������뵽�洢�����н��в�ѯ
	QSqlQuery query;
	QString sqlWords = QString("call getOplList_mgmt_op('%1','%2',%3,%4)")
		.arg(id).arg(empID).arg(timeStart).arg(timeEnd);
	queryThread.setSqlWords(sqlWords);
	queryThread.start();
	this->setDisabled(true);
	ui.status_op_LB->setText("���ڲ�ѯ�����Ժ�......");
}

void SpecialOP::updateTableWidget(QSqlQuery* query)
{
	ui.opInfo_op_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "��ѯ");
	while(query->next())
	{
		//��������Ϣ���뵽QTableWidget�ؼ���
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
		QMessageBox::information(this,"����",status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		ui.status_op_LB->setText(status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_op_LB->setText(status + "���ݿ�ɹ���");
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