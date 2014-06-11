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
	//程序启动后将焦点设置到输入商品ID的地方
	ui.goodsID_LE->setFocus();

	//设置tableWidget表头自动适应
	ui.goodsList_TBW->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

	//设置输入框的输入模式只能为数字
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
	//如果是修改完毕点击此按钮，则恢复
	if(ui.modifyList_BTN->text() == "修改完毕")
	{
		ui.delGoods_BTN->setDisabled(true);
		ui.modifyList_BTN->setText("修改清单");
		return ;
	}

	//弹出员工权限验证框验证员工是否有修改购物清单的权限
	ModifyGoodsList mgl;
	if(mgl.exec() == QDialog::Accepted)
	{
		ui.delGoods_BTN->setDisabled(false);
		ui.modifyList_BTN->setText("修改完毕");
	}
}

void Client::on_delGoods_BTN_clicked()
{
	if(ui.goodsList_TBW->currentItem() == NULL)
	{
		QMessageBox::information(NULL,"出错","请先选择某个商品！");
		return ;
	}
	//删除当前选择的这行
	ui.goodsList_TBW->removeRow(ui.goodsList_TBW->currentRow());
	//令当前选择行为NULL
	ui.goodsList_TBW->setCurrentItem(NULL);
	on_associatorID_LE_textChanged();
}

void Client::on_associatorID_LE_textChanged()
{
	ui.shouldReceiveMoney_LB->setText("");
	if(ui.goodsList_TBW->rowCount() == 0)
		return ;
	//是否有会员折扣
	bool assDisB = false;
	if(ui.associatorID_LE->text() != "")
	{
		if(!(DataClass::memStruct_associator.contains(ui.associatorID_LE->text())))
		{
			ui.assStatus_LB->setText("会员卡状态：无效");
			assDisB = false;
		}
		else
		{
			assDisB = true;
			ui.assStatus_LB->setText("会员卡状态：有效");
		}
	}

	//计算总金额
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
		QMessageBox::information(NULL,"出错","请先输入实收金额！");
		ui.calMoney_CLBTN->setDisabled(false);
		return ;
	}
	if(ui.shouldBackMoney_LB->text().indexOf("-") != -1)
	{
		QMessageBox::information(NULL,"出错","实收金额不足！");
		ui.calMoney_CLBTN->setDisabled(false);
		return ;
	}

	//用正则表达式提取促销信息
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

		//判断当前金额是否有促销信息
		int price = ui.goodsTotleMoney_LB->text().toInt();
		if(priceUp < price || priceDown > price)
			continue ;
		else if(priceUp > ui.goodsTotleMoney_LB->text().toInt() && priceDown < ui.goodsTotleMoney_LB->text().toInt())
		{
			QRegExp goodsInfoRegExp("(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_");
			goodsInfoRegExp.indexIn(DataClass::memStruct_goods.value(QString::number(goodsID)));
			QString goodsName = goodsInfoRegExp.cap(3);
			hasPressent = true;
			QMessageBox::information(NULL,"提示","此价格区间赠送：" + goodsName + "。 赠送数量：" + QString::number(goodsCount));
			break;
		}
	}

	//先将交易信息写入XML
	//判断是不是离线交易，如果是离线交易就这样做，如果不是离线交易，则直接调用存储过程来插入数据库
	QSqlQuery query;
	QString sqlWords;

	//读取XML
	QDomDocument doc;
	if(!(DataClass::loadXml(doc,"./WONConfig/断网SQL语句.xml")))
		return ;
	QDomElement root = doc.documentElement();
	if(root.tagName() != "断网SQL语句")
	{
		QMessageBox::information(NULL,"出错","SQL记录出错，！");
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

	//写入单笔交易清单表单
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

	//写入库存
	//attention 库存 已销售无库存商品
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

	//写入优惠记录
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

	//重写此XML文件
	if(DataClass::currentDealWay == "WON")
		DataClass::writeRoot2Xml(doc, "./WONConfig/断网SQL语句.xml");

	QMessageBox::information(NULL,"提示","收款成功！");
	ui.associatorID_LE->clear();
	ui.goodsTotleMoney_LB->setText("0.00");
	ui.shouldReceiveMoney_LB->setText("0.00");
	ui.shouldBackMoney_LB->setText("0.00");
	ui.receiveMoney_LE->setText("");
	ui.assStatus_LB->setText("会员卡状态：无效");
	if(ui.modifyList_BTN->text() != "修改清单")
	{
		ui.modifyList_BTN->setText("修改清单");
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
		QMessageBox::information(this,"出错","商品编号输入错误，请检查！");
		ui.goodsID_LE->setText("");
		return ;
	}

	//先从商品信息表中提取商品的信息
	QString values = DataClass::memStruct_goods.value(goodsID);
	//用正则表达式提取商品的各个信息
	QRegExp goodsInfoRegExp("(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_(\\S+)_");
	goodsInfoRegExp.indexIn(values);
	QString goodsMoney = goodsInfoRegExp.cap(1);
	QString goodsSpecification = goodsInfoRegExp.cap(2);
	QString goodsName = goodsInfoRegExp.cap(3);
	QString goodsCost = goodsInfoRegExp.cap(4);
	QString goodsDiscount = goodsInfoRegExp.cap(5);
	QString goodsAssociatorDiscount = goodsInfoRegExp.cap(6);

	//将商品的各个信息插入到“商品列表”控件中
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