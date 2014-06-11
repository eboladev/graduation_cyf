#include "client.h"
#include "modifyGoodsList.h"

Client::Client(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	widgetInit();
}

Client::~Client()
{

}

void Client::widgetInit()
{
	//���������󽫽������õ�������ƷID�ĵط�
	ui.goodsID_LE->setFocus();

	//����tableWidget��ͷ�Զ���Ӧ
	ui.goodsList_TBW->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

	//��������������ģʽֻ��Ϊ����
	QRegExp inputRegExp_1("[0-9]*");
	QRegExp inputRegExp_2("[1-9][0-9]*");
	QRegExp inputRegExp_3("([1-9][0-9]*\\.[0-9]*)|(0\\.[0-9]*)");
	ui.goodsID_LE->setValidator(new QRegExpValidator(inputRegExp_1,this));
	ui.goodsCount_LE->setValidator(new QRegExpValidator(inputRegExp_2,this));
	ui.receiveMoney_LE->setValidator(new QRegExpValidator(inputRegExp_3,this));
}

void Client::on_receiveMoney_LE_textChanged()
{
	double f1 = ui.shouldReceiveMoney_LB->text().toDouble();
	double f2 = ui.receiveMoney_LE->text().toDouble();
	QString res = QString::number(f2 - f1);
	
	if(res.indexOf(".") != -1 && res.indexOf("e") == -1)
		ui.shouldBackMoney_LB->setText(res.mid(0,res.indexOf(".")+2));
	else
		ui.shouldBackMoney_LB->setText(res);
}

void Client::on_modifyList_BTN_clicked()
{
	//������޸���ϵ���˰�ť����ָ�
	if(ui.modifyList_BTN->text() == "�޸����")
	{
		ui.delGoods_BTN->setDisabled(true);
		ui.modifyList_BTN->setText("�޸��嵥");
		return ;
	}

	//����Ա��Ȩ����֤����֤Ա���Ƿ����޸Ĺ����嵥��Ȩ��
	ModifyGoodsList mgl;
	if(mgl.exec() == QDialog::Accepted)
	{
		ui.delGoods_BTN->setDisabled(false);
		ui.modifyList_BTN->setText("�޸����");
	}
}

void Client::on_delGoods_BTN_clicked()
{
	if(ui.goodsList_TBW->currentItem() == NULL)
	{
		QMessageBox::information(NULL,"����","����ѡ��ĳ����Ʒ��");
		return ;
	}
	//ɾ����ǰѡ�������
	ui.goodsList_TBW->removeRow(ui.goodsList_TBW->currentRow());
	//�ǰѡ����ΪNULL
	ui.goodsList_TBW->setCurrentItem(NULL);
	on_associatorID_LE_textChanged();
}

void Client::on_associatorID_LE_textChanged()
{
	ui.shouldReceiveMoney_LB->setText("");
	if(ui.goodsList_TBW->rowCount() == 0)
		return ;
	//�Ƿ��л�Ա�ۿ�
	bool assDisB = false;
	if(ui.associatorID_LE->text() != "")
	{
		if(!(DataClass::memStruct_associator.contains(ui.associatorID_LE->text())))
		{
			ui.assStatus_LB->setText("��Ա��״̬����Ч");
			assDisB = false;
		}
		else
		{
			assDisB = true;
			ui.assStatus_LB->setText("��Ա��״̬����Ч");
		}
	}

	//�����ܽ��
	float money = 0;
	for(int i=0; i<ui.goodsList_TBW->rowCount(); i++)
	{
		int count = ui.goodsList_TBW->item(i,2)->text().toInt();
		float price = ui.goodsList_TBW->item(i,4)->text().toFloat();
		int dis = ui.goodsList_TBW->item(i,5)->text().toInt();
		int assDis = assDisB == false ? 1 : ui.goodsList_TBW->item(i,6)->text().toInt();
		money += price * count * dis * assDis;
	}
	money = assDisB == false ? money/100 : money / 10000;
	QString totleMoney = QString::number(money);
	if(totleMoney.indexOf(".") != -1 && totleMoney.indexOf("e") == -1)
		ui.goodsTotleMoney_LB->setText(totleMoney.mid(0,totleMoney.indexOf(".")+2));
	else
		ui.goodsTotleMoney_LB->setText(totleMoney);
	ui.shouldReceiveMoney_LB->setText(ui.goodsTotleMoney_LB->text());
	on_receiveMoney_LE_textChanged();
}

void Client::on_calMoney_CLBTN_clicked()
{
	if(ui.shouldReceiveMoney_LB->text() == "")
	{
		QMessageBox::information(NULL,"����","��������ʵ�ս�");
		ui.calMoney_CLBTN->setDisabled(false);
		return ;
	}
	if(ui.shouldBackMoney_LB->text().indexOf("-") != -1)
	{
		QMessageBox::information(NULL,"����","ʵ�ս��㣡");
		ui.calMoney_CLBTN->setDisabled(false);
		return ;
	}

	//��������ʽ��ȡ������Ϣ
	QRegExp presentInfoRegExp("(\\S+)_(\\S+)_(\\S+)_(\\S+)_");
	QList<QString> values = DataClass::memStruct_present.values();

	bool hasPressent = false;
	int priceUp, priceDown, goodsID,goodsCount;
	for(int i=0; i<values.size(); i++)
	{
		presentInfoRegExp.indexIn(values[i]);
		priceDown = presentInfoRegExp.cap(1).toInt();
		priceUp = presentInfoRegExp.cap(2).toInt();
		goodsID = presentInfoRegExp.cap(3).toInt();
		goodsCount = presentInfoRegExp.cap(4).toInt();

		//�жϵ�ǰ����Ƿ��д�����Ϣ
		int price = ui.goodsTotleMoney_LB->text().toInt();
		if(priceUp < price || priceDown > price)
			continue ;
		else if(priceUp > ui.goodsTotleMoney_LB->text().toInt() && priceDown < ui.goodsTotleMoney_LB->text().toInt())
		{
			QRegExp goodsInfoRegExp("(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_");
			goodsInfoRegExp.indexIn(DataClass::memStruct_goods.value(QString::number(goodsID)));
			QString goodsName = goodsInfoRegExp.cap(3);
			hasPressent = true;
			QMessageBox::information(NULL,"��ʾ","�˼۸��������ͣ�" + goodsName + "�� ����������" + QString::number(goodsCount));
			break;
		}
	}

	//�Ƚ�������Ϣд��XML
	//�ж��ǲ������߽��ף���������߽��׾�������������������߽��ף���ֱ�ӵ��ô洢�������������ݿ�
	QSqlQuery query;
	QString sqlWords;

	//��ȡXML
	QDomDocument doc;
	if(!(DataClass::loadXml(doc,"./WONConfig/����SQL���.xml")))
		return ;
	QDomElement root = doc.documentElement();
	if(root.tagName() != "����SQL���")
	{
		QMessageBox::information(NULL,"����","SQL��¼������");
		return ;
	}

	QString dealID = DataClass::getDealID();

	sqlWords = QString("call insertDealTable_client_deal(%1,'%2','%3',%4,'%5')")
		.arg(dealID).arg(DataClass::currentEmployeeID)
		.arg(DataClass::getDateTime("yyyy-MM-dd hh:mm:ss")).arg(ui.goodsTotleMoney_LB->text()).arg(ui.associatorID_LE->text());

	if(DataClass::currentDealWay == "WON")
		DataClass::createElement(root,"SQL",sqlWords);
	else
		query.exec(sqlWords);

	//д�뵥�ʽ����嵥��
	for(int i=0; i<ui.goodsList_TBW->rowCount(); i++)
	{
		sqlWords = QString("call insertDealListTable_client_deal(%1,'%2',%3,%4,%5,%6)").arg(dealID)
			.arg(ui.goodsList_TBW->item(i,0)->text())
			.arg(ui.goodsList_TBW->item(i,2)->text())
			.arg(ui.goodsList_TBW->item(i,4)->text())
			.arg(ui.goodsList_TBW->item(i,5)->text())
			.arg(ui.goodsList_TBW->item(i,6)->text());

		if(DataClass::currentDealWay == "WON")
			DataClass::createElement(root,"SQL",sqlWords);
		else
			query.exec(sqlWords);
	}

	//д����
	//attention ��� �������޿����Ʒ
	for(int i=0; i<ui.goodsList_TBW->rowCount(); i++)
	{
		sqlWords = QString("call updateStock_client_deal('%1',%2)")
			.arg(ui.goodsList_TBW->item(i,0)->text())
			.arg(ui.goodsList_TBW->item(i,2)->text());

		if(DataClass::currentDealWay == "WON")
			DataClass::createElement(root,"SQL",sqlWords);
		else
			query.exec(sqlWords);
	}

	//д���Żݼ�¼
	if(hasPressent)
	{
		sqlWords = QString("call insertPresent_client_deal(%1,%2,'%3')")
			.arg(dealID)
			.arg(goodsCount)
			.arg(goodsID);

		if(DataClass::currentDealWay == "WON")
			DataClass::createElement(root,"SQL",sqlWords);
		else
			query.exec(sqlWords);

		sqlWords = QString("call updateStock_client_deal('%1',%2)")
			.arg(goodsID)
			.arg(goodsCount);

		if(DataClass::currentDealWay == "WON")
			DataClass::createElement(root,"SQL",sqlWords);
		else
			query.exec(sqlWords);
	}

	//��д��XML�ļ�
	if(DataClass::currentDealWay == "WON")
		DataClass::writeRoot2Xml(doc, "./WONConfig/����SQL���.xml");

	QMessageBox::information(NULL,"��ʾ","�տ�ɹ���");
	ui.associatorID_LE->clear();
	ui.goodsTotleMoney_LB->setText("0.00");
	ui.shouldReceiveMoney_LB->setText("0.00");
	ui.shouldBackMoney_LB->setText("0.00");
	ui.receiveMoney_LE->setText("");
	ui.assStatus_LB->setText("��Ա��״̬����Ч");
	if(ui.modifyList_BTN->text() != "�޸��嵥")
	{
		ui.modifyList_BTN->setText("�޸��嵥");
		ui.delGoods_BTN->setDisabled(true);
	}
	ui.goodsList_TBW->setRowCount(0);
}

void Client::on_insertList_BTN_clicked()
{
	QString goodsID = ui.goodsID_LE->text();
	if(goodsID == "")
		return ;
	if(!(DataClass::memStruct_goods.contains(goodsID)))
	{
		QMessageBox::information(this,"����","��Ʒ�������������飡");
		ui.goodsID_LE->setText("");
		return ;
	}

	//�ȴ���Ʒ��Ϣ������ȡ��Ʒ����Ϣ
	QString values = DataClass::memStruct_goods.value(goodsID);
	//��������ʽ��ȡ��Ʒ�ĸ�����Ϣ
	QRegExp goodsInfoRegExp("(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_");
	goodsInfoRegExp.indexIn(values);
	QString goodsMoney = goodsInfoRegExp.cap(1);
	QString goodsSpecification = goodsInfoRegExp.cap(2);
	QString goodsName = goodsInfoRegExp.cap(3);
	QString goodsCost = goodsInfoRegExp.cap(4);
	QString goodsDiscount = goodsInfoRegExp.cap(5);
	QString goodsAssociatorDiscount = goodsInfoRegExp.cap(6);

	//����Ʒ�ĸ�����Ϣ���뵽����Ʒ�б��ؼ���
	QTableWidgetItem *id, *name, *count, *spec, * money, *discount, *associatorDiscount;
	int row = ui.goodsList_TBW->rowCount();
	ui.goodsList_TBW->setRowCount(row + 1);
	id = new QTableWidgetItem(goodsID);
	id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,0,id);
	name = new QTableWidgetItem(goodsName);
	name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,1,name);
	count = new QTableWidgetItem(ui.goodsCount_LE->text());
	count->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,2,count);
	spec = new QTableWidgetItem(goodsSpecification);
	spec->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,3,spec);
	money = new QTableWidgetItem(goodsMoney);
	money->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,4,money);
	discount = new QTableWidgetItem(goodsDiscount);
	discount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,5,discount);
	associatorDiscount = new QTableWidgetItem(goodsAssociatorDiscount);
	associatorDiscount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
	ui.goodsList_TBW->setItem(row,6,associatorDiscount);

	on_associatorID_LE_textChanged();
	ui.goodsID_LE->setText("");
	ui.goodsCount_LE->setText("1");
}

void Client::keyPressEvent(QKeyEvent* key)
{
	if(key->key() == Qt::Key_Return || key->key() == Qt::Key_Enter)
	{
		on_insertList_BTN_clicked();
	}
}

void Client::resizeEvent(QResizeEvent* )
{
	QPixmap pixmap("Resources/client backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);
}