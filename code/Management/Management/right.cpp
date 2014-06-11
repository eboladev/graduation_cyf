#include "right.h"
#include "dataClass.h"

Right::Right(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Right::~Right()
{

}

void Right::widgetInit()
{
	//��ȡԱ�����
	QSqlQuery query;
	QString sqlWords = "call getEmployeesClassList_mgmt_depot();";
	query.exec(sqlWords);
	while (query.next())
	{
		ui.employeeClass_search_right_CB->addItem(query.value(0).toString());
		ui.employeeClass_modify_right_CB->addItem(query.value(0).toString());
	}

	//��ѯ�߳���ɺ󣬰󶨵�����table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//���ó��򱳾�
	QPixmap pixmap("Resources/right backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);
}

void Right::on_search_search_right_BTN_clicked()
{
	if(ui.employeeClass_search_right_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getRightListByEmpClass_mgmt_right('%1');").arg(ui.employeeClass_search_right_CB->currentText());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_right_LB->setText("���ڲ�ѯ�����Ժ�......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.all_search_right_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getRightListByAll_mgmt_right();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_right_LB->setText("���ڲ�ѯ�����Ժ�......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}
}

void Right::on_modify_modify_right_BTN_clicked()
{
	QSqlQuery query;
	QString sqlWords = QString("call setRight_mgmt_right('%1','%2',%3);")
		.arg(ui.employeeClass_modify_right_CB->currentText())
		.arg(ui.right_modify_right_CB->currentText())
		.arg(ui.yes_modify_right_RBTN->isChecked() ? "1" : "0");
	query.exec(sqlWords);
	checkExecSqlRes(&query,"�޸�");
}

void Right::updateTableWidget(QSqlQuery* query)
{
	ui.rightInfo_right_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "��ѯ");
	while(query->next())
	{
		//��������Ϣ���뵽QTableWidget�ؼ���
		QTableWidgetItem *id, *att1, *att2, *att3, *att4, *att5, *att6, *att7, *att8, *att9;
		int row = ui.rightInfo_right_TBW->rowCount();
		ui.rightInfo_right_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,0,id);
		att1 = new QTableWidgetItem(query->value(1).toString());
		att1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,1,att1);
		att2 = new QTableWidgetItem(query->value(2).toString());
		att2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,2,att2);
		att3 = new QTableWidgetItem(query->value(3).toString());
		att3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,3,att3);
		att4 = new QTableWidgetItem(query->value(4).toString());
		att4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,4,att4);
		att5 = new QTableWidgetItem(query->value(5).toString());
		att5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,5,att5);
		att6 = new QTableWidgetItem(query->value(6).toString());
		att6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,6,att6);
		att7 = new QTableWidgetItem(query->value(7).toString());
		att7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,7,att7);
		att8 = new QTableWidgetItem(query->value(8).toString());
		att8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,8,att8);
		att9 = new QTableWidgetItem(query->value(9).toString());
		att9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.rightInfo_right_TBW->setItem(row,9,att9);
	}
}

bool Right::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"����",status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		ui.status_right_LB->setText(status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_right_LB->setText(status + "���ݿ�ɹ���");
		return true;
	}
}

void Right::on_employeeClass_search_right_RBTN_toggled(bool checked)
{
	ui.employeeClass_search_right_CB->setDisabled(!checked);
}