#include "depot.h"
#include "dataClass.h"

Depot::Depot(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Depot::~Depot()
{

}

void Depot::widgetInit()
{
	//��ѯ�߳���ɺ󣬰󶨵�����table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//���ñ���ͼƬ
	QPixmap pixmap("Resources/depot backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//��ʼ�������б��
	QSqlQuery query;
	QString sqlWords = "call getGoodsClassList_mgmt_depot_goods();";
	query.exec(sqlWords);
	if(checkExecSqlRes(&query, "��ʼ��"))
		while (query.next())
			ui.goodsClass_search_depot_CB->addItem(query.value(0).toString());

	//����QLineEdit�������ʽ
	ui.goodsID_search_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsHaveStart_search_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsHaveEnd_search_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsID_modify_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsSelledCount_modify_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
}

bool Depot::checkExecSqlRes(const QSqlQuery* query, const QString& status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		ui.status_depot_LB->setText(status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		QMessageBox::information(NULL,"����",status + "���ݿ�ʧ�ܣ�" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_depot_LB->setText(status + "���ݿ�ɹ���");
		return true;
	}
}

void Depot::on_search_search_depot_BTN_clicked()
{
	//������Ʒ��Ų�ѯ
	if(ui.goodsID_search_depot_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByID_mgmt_depot('%1');").arg(ui.goodsID_search_depot_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_depot_LB->setText("���ڲ�ѯ���ݿ⣬���Ժ�......");
//		ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	//������Ʒ����ѯ
	if(ui.goodsClass_search_depot_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByClass_mgmt_depot('%1');").arg(ui.goodsClass_search_depot_CB->currentText());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_depot_LB->setText("���ڲ�ѯ���ݿ⣬���Ժ�......");
		return ;
	}

	//������Ʒ������ѯ
	if(ui.goodsCount_search_depot_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByCount_mgmt_depot(%1,%2);")
			.arg(ui.goodsHaveStart_search_depot_LE->text())
			.arg(ui.goodsHaveEnd_search_depot_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_depot_LB->setText("���ڲ�ѯ���ݿ⣬���Ժ�......");
//		ui.goodsHaveStart_search_depot_LE->setText("");
//		ui.goodsHaveEnd_search_depot_LE->setText("");
		return ;
	}

	//���в�ѯ
	if(ui.goodsAll_search_depot_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByAll_mgmt_depot();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_depot_LB->setText("���ڲ�ѯ���ݿ⣬���Ժ�......");
		return ;
	}
}

void Depot::on_modify_modify_depot_BTN_clicked()
{
	QSqlQuery query;
	QString sqlWords = QString("call setSelledGoodsCount_mgmt_depot('%1',%2);")
		.arg(ui.goodsID_modify_depot_LE->text())
		.arg(ui.goodsSelledCount_modify_depot_LE->text());
	query.exec(sqlWords);
	checkExecSqlRes(&query, "�޸�");
}

void Depot::updateTableWidget(QSqlQuery* query)
{
	ui.goodsInfo_depot_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "��ѯ");

	while(query->next())
	{
		//��������Ϣ���뵽QTableWidget�ؼ���
		QTableWidgetItem *id, *name, *cost, *aClass, *spec, *count, *selledCount;
		int row = ui.goodsInfo_depot_TBW->rowCount();
		ui.goodsInfo_depot_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,0,id);
		name = new QTableWidgetItem(query->value(1).toString());
		name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,1,name);
		cost = new QTableWidgetItem(query->value(2).toString());
		cost->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,2,cost);
		aClass = new QTableWidgetItem(query->value(3).toString());
		aClass->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,3,aClass);
		spec = new QTableWidgetItem(query->value(4).toString());
		spec->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,4,spec);
		count = new QTableWidgetItem(query->value(5).toString());
		count->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,5,count);
		selledCount = new QTableWidgetItem(query->value(6).toString());
		selledCount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_depot_TBW->setItem(row,6,selledCount);
	}
}

void Depot::on_goodsID_search_depot_RBTN_toggled(bool checked)
{
	ui.goodsID_search_depot_LE->setDisabled(!checked);
}
void Depot::on_goodsClass_search_depot_RBTN_toggled(bool checked)
{
	ui.goodsClass_search_depot_CB->setDisabled(!checked);
}
void Depot::on_goodsCount_search_depot_RBTN_toggled(bool checked)
{
	ui.goodsHaveStart_search_depot_LE->setDisabled(!checked);
	ui.goodsHaveEnd_search_depot_LE->setDisabled(!checked);
}