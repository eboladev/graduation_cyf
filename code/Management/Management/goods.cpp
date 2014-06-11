#include "goods.h"
#include "goodsModify.h"
#include "dataClass.h"

Goods::Goods(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Goods::~Goods()
{

}

void Goods::widgetInit()
{
	//查询线程完成后，绑定到更新table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//初始化下拉列表框   商品类别
	QSqlQuery query;
	QString sqlWords = "call getGoodsClassList_mgmt_depot_goods();";
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误","获取商品类型列表失败！");
		ui.status_goods_LB->setText("获取商品类型列表失败！");
	}
	else
	{
		while (query.next())
			ui.goodsClass_search_goods_CB->addItem(query.value(0).toString());
	}

	//设置程序背景图片
	QPixmap pixmap("Resources/goods backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//用正则表达式限制用户输入格式
	ui.goodsID_search_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsID_modify_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsID_del_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
}

void Goods::updateGoodsClassCB(QString& string)
{
	ui.goodsClass_search_goods_CB->addItem(string);
}

void Goods::on_modify_modify_goods_BTN_clicked()
{
	QSqlQuery query;
	QString sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.goodsID_modify_goods_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此商品信息！");
		return ;
	}
	//初始化修改窗口的各个控件的初始值
	//先获取此员工信息，如果没有此ID，则直接提示并返回

	GoodsModify goodsModifyUI;
	connect(&goodsModifyUI,SIGNAL(updateGoodsClassCB(QString&)),this,SLOT(updateGoodsClassCB(QString&)));
	goodsModifyUI.setModifyID(ui.goodsID_modify_goods_LE->text());
	goodsModifyUI.setModifyName(query.value(1).toString());
	goodsModifyUI.setModifyPrice(query.value(2).toString());
	goodsModifyUI.setModifyClass(query.value(3).toString());
	goodsModifyUI.setModifySpec(query.value(4).toString());
	goodsModifyUI.setModifyCost(query.value(5).toString());
	goodsModifyUI.setModifyDiscount(query.value(6).toString());
	goodsModifyUI.setModifyAssDiscount(query.value(7).toString());
	goodsModifyUI.updateDatabase(true);
	goodsModifyUI.exec();
}

void Goods::on_del_modify_goods_BTN_clicked()
{
	QMessageBox mb("确认", "确定删除此商品信息？",
		QMessageBox::Question,
		QMessageBox::Yes   |   QMessageBox::Default,
		QMessageBox::No     |   QMessageBox::Escape,
		QMessageBox::NoButton);

	if(mb.exec() == QMessageBox::No)   
		return;

	//先测试是不是有这个商品
	QSqlQuery query;
	QString sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.goodsID_del_goods_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此商品！");
		return ;
	}
	//有此商品，则删除
	sqlWords = QString("call delGoods_mgmt_goods('%1');").arg(ui.goodsID_del_goods_LE->text());
	query.exec(sqlWords);
	checkExecSqlRes(&query, "删除");
}

void Goods::on_add_modify_goods_BTN_clicked()
{
	GoodsModify goodsModifyUI;
	connect(&goodsModifyUI,SIGNAL(updateGoodsClassCB(QString&)),this,SLOT(updateGoodsClassCB(QString&)));
	goodsModifyUI.updateDatabase(false);
	goodsModifyUI.exec();
}

bool Goods::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		ui.status_goods_LB->setText(status + "数据库失败！" + query->lastError().text());
		QMessageBox::information(NULL,"错误",status + "数据库失败！" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_goods_LB->setText(status + "数据库成功！");
		return true;
	}
}

void Goods::on_goodsID_search_goods_RBTN_toggled(bool checked)
{
	ui.goodsID_search_goods_LE->setDisabled(!checked);
}
void Goods::on_goodsClass_search_goods_RBTN_toggled(bool checked)
{
	ui.goodsClass_search_goods_CB->setDisabled(!checked);
}

void Goods::on_search_search_goods_BTN_clicked()
{
	//按照商品编号查询
	if(ui.goodsID_search_goods_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.goodsID_search_goods_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_goods_LB->setText("正在查询数据库，请稍后......");
		return ;
	}

	//按照商品类别查询
	if(ui.goodsClass_search_goods_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByClass_mgmt_goods('%1');").arg(ui.goodsClass_search_goods_CB->currentText());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_goods_LB->setText("正在查询数据库，请稍后......");
		return ;
	}

	//所有查询
	if(ui.goodsAll_search_goods_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getGoodsListByAll_mgmt_goods();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_goods_LB->setText("正在查询数据库，请稍后......");
		return ;
	}
}

void Goods::updateTableWidget(QSqlQuery* query)
{
	ui.associatorInfo_associator_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "查询");
	while(query->next())
	{
		//将各个信息插入到QTableWidget控件中
		QTableWidgetItem *id, *name, *price, *aClass, *spec, *cost, *discount, *assDiscount;
		int row = ui.associatorInfo_associator_TBW->rowCount();
		ui.associatorInfo_associator_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,0,id);
		name = new QTableWidgetItem(query->value(1).toString());
		name->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,1,name);
		price = new QTableWidgetItem(query->value(2).toString());
		price->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,2,price);
		aClass = new QTableWidgetItem(query->value(3).toString());
		aClass->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,3,aClass);
		spec = new QTableWidgetItem(query->value(4).toString());
		spec->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,4,spec);
		cost = new QTableWidgetItem(query->value(5).toString());
		cost->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,5,cost);
		discount = new QTableWidgetItem(query->value(6).toString());
		discount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,6,discount);
		assDiscount = new QTableWidgetItem(query->value(7).toString());
		assDiscount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.associatorInfo_associator_TBW->setItem(row,7,assDiscount);
	}
}