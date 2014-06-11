#include "associator.h"
#include "associatorModify.h"
#include "dataClass.h"

Associator::Associator(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Associator::~Associator()
{

}


void Associator::widgetInit()
{
	//��ѯ�߳���ɺ󣬰󶨵�����table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	QPixmap pixmap("Resources/ass backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	ui.associatorID_search_associator_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.associatorID_modify_associator_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.associatorID_del_associator_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
}

void Associator::on_modify_modify_associator_BTN_clicked()
{
	//�Ȼ�ȡ��Ա����Ϣ�����û�д�ID����ֱ����ʾ������
	QSqlQuery query;
	QString sqlWords = QString("call getAssociatorListByID_mgmt_associator('%1');").arg(ui.associatorID_modify_associator_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"����","û�д�ID�Ļ�Ա��");
		return ;
	}
	//��ʼ���޸Ĵ��ڵĸ����ؼ��ĳ�ʼֵ
	AssociatorModify associatorModifyUI;
	associatorModifyUI.setModifyID(query.value(0).toString());
	associatorModifyUI.setModifyName(query.value(1).toString());
	associatorModifyUI.setModifyTime(query.value(2).toString());
	associatorModifyUI.setModifyRemark(query.value(3).toString());
	associatorModifyUI.isUpdateDatabase(true);
	associatorModifyUI.exec();
}

void Associator::on_del_modify_associator_BTN_clicked()
{
	QMessageBox mb("ȷ��", "ȷ��ɾ���˻�Ա��Ϣ��",
		QMessageBox::Question,
		QMessageBox::Yes   |   QMessageBox::Default,
		QMessageBox::No     |   QMessageBox::Escape,
		QMessageBox::NoButton);

	if(mb.exec() == QMessageBox::No)   
		return;

	//�Ȳ����ǲ��������ID��Ա��
	QSqlQuery query;
	QString sqlWords = QString("call getAssociatorListByID_mgmt_associator('%1');").arg(ui.associatorID_del_associator_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"����","û�д�ID�Ļ�Ա��");
		return ;
	}
	//�д�Ա������ɾ��
	sqlWords = QString("call delAssociator_mgmt_associator('%1');").arg(ui.associatorID_del_associator_LE->text());
	query.exec(sqlWords);
	checkExecSqlRes(&query, "ɾ��");
}

void Associator::on_add_modify_associator_BTN_clicked()
{
	QString newAssID = DataClass::getDateTime("yyyyMMddhhmmss") + QString::number(qrand() % 10);
	AssociatorModify associatorModifyUI;
	associatorModifyUI.setModifyID(newAssID);
	associatorModifyUI.isUpdateDatabase(false);
	associatorModifyUI.exec();
}

void Associator::on_search_search_associator_BTN_clicked()
{
	if(ui.associatorID_search_associator_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getAssociatorListByID_mgmt_associator('%1');").arg(ui.associatorID_search_associator_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_associator_LB->setText("���ڲ�ѯ�����Ժ�......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.associatorName_search_associator_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getAssociatorListByName_mgmt_associator('%1');").arg(ui.associatorName_search_associator_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_associator_LB->setText("���ڲ�ѯ�����Ժ�......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.associatorAll_search_associator_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getAssociatorListByAll_mgmt_associator();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_associator_LB->setText("���ڲ�ѯ�����Ժ�......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}
}
bool Associator::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"����",status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		ui.status_associator_LB->setText(status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_associator_LB->setText(status + "���ݿ�ɹ���");
		return true;
	}
}

void Associator::updateTableWidget(QSqlQuery *query)
{
	ui.associatorInfo_associator_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "��ѯ");
	while(query->next())
	{
		//��������Ϣ���뵽QTableWidget�ؼ���
		QTableWidgetItem *id, *name, *time, *context;
		int row = ui.associatorInfo_associator_TBW->rowCount();
		ui.associatorInfo_associator_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,0,id);
		name = new QTableWidgetItem(query->value(1).toString());
		name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,1,name);
		//��mysql��datetime�ֶΣ���2000-01-01 01:01:01��ת����QString֮���м�ո�����һ����T��
		//����滻����
		time = new QTableWidgetItem(query->value(2).toString().replace("T"," "));
		time->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,2,time);
		context = new QTableWidgetItem(query->value(3).toString());
		context->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,3,context);
	}
}

void Associator::on_associatorID_search_associator_RBTN_toggled(bool checked)
{
	ui.associatorID_search_associator_LE->setDisabled(!checked);
}

void Associator::on_associatorName_search_associator_RBTN_toggled(bool checked)
{
	ui.associatorName_search_associator_LE->setDisabled(!checked);
}