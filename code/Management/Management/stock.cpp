#include "stock.h"
#include "dataClass.h"

Stock::Stock(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Stock::~Stock()
{

}


void Stock::widgetInit()
{
	//设置控件的初始化
	ui.goodsTime_import_stock_DTE->setDateTime(QDateTime::currentDateTime());
	ui.goodsSpecs_import_stock_LE->setText(DataClass::currentEmployeeID);

	//查询线程完成后，绑定到更新table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//设置背景图片
	QPixmap pixmap("Resources/stock backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//用正则表达式限制QlineEdit输入格式
	ui.importID_search_stock_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsID_import_stock_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsCount_import_stock_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.importID_import_stock_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsPrice_import_stock_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
}

void Stock::on_search_search_stock_BTN_clicked()
{
	if(ui.importID_search_stock_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getStockListByID_mgmt_stock('%1');").arg(ui.importID_search_stock_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_stock_LB->setText("正在查询，请稍后......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.importTime_search_stock_RBTN->isChecked())
	{
		if(ui.importTimeStart_search_stock_DTE->date() >= ui.importTimeEnd_search_stock_DTE->date())
		{
			QMessageBox::information(this,"错误","日期设置错误！");
			return ;
		}
		QSqlQuery query;
		QString sqlWords = QString("call getStockListByTime_mgmt_stock('%1','%2');")
			.arg(ui.importTimeStart_search_stock_DTE->date().toString("yyyy-MM-dd"))
			.arg(ui.importTimeEnd_search_stock_DTE->date().toString("yyyy-MM-dd"));
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_stock_LB->setText("正在查询，请稍后......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.importAll_search_stock_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getStockListByAll_mgmt_stock();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_stock_LB->setText("正在查询，请稍后......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}
}

void Stock::on_import_import_stock_BTN_clicked()
{
	if(ui.importID_import_stock_LE->text() == "" || ui.goodsCount_import_stock_LE->text() == "" ||
		ui.goodsID_import_stock_LE->text() == "" || ui.goodsPrice_import_stock_LE->text() == "" ||
		ui.goodsSpecs_import_stock_LE->text() == "" || ui.goodsSource_import_stock_LE->text() == "")
	{
		QMessageBox::information(NULL,"错误","请填写完整信息！");
		return ;
	}

	QSqlQuery query;
	QString sqlWords;

	//先检查是否已有此进货单号
	sqlWords = QString("select * from 进货管理 where 进货单号='%1';").arg(ui.importID_import_stock_LE->text());
	query.exec(sqlWords);
	if(query.next())
	{
		QMessageBox::information(NULL,"错误","此进货单号已存在！");
		return ;
	}
		
	//检查是否有此商品
	sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.goodsID_import_stock_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此商品信息！");
		return ;
	}
	QString goodsSpec = query.value(4).toString();

	//商品数量转换确认
	QMessageBox mb("确认", QString("\"商品进货数量\"是否已按照商品的标准规格来换算？\n商品编号为\"%1\"的标准规格为\"%2\"！")
		.arg(ui.goodsID_import_stock_LE->text()).arg(goodsSpec),
		QMessageBox::Question,
		QMessageBox::Yes   |   QMessageBox::Default,
		QMessageBox::No     |   QMessageBox::Escape,
		QMessageBox::NoButton);

	if(mb.exec() == QMessageBox::No)   
		return;

	sqlWords = QString("call addStock_mgmt_stock('%1','%2','%3','%4',%5,%6,'%7');")
		.arg(ui.importID_import_stock_LE->text())
		.arg(ui.goodsSource_import_stock_LE->text())
		.arg(ui.goodsID_import_stock_LE->text())
		.arg(ui.goodsTime_import_stock_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss"))
		.arg(ui.goodsCount_import_stock_LE->text())
		.arg(ui.goodsPrice_import_stock_LE->text())
		.arg(ui.goodsSpecs_import_stock_LE->text());
	query.exec(sqlWords);
	if(checkExecSqlRes(&query, "增加"))
	{
		//设置新的商品成本
		sqlWords = QString("call setGoodsCost_mgmt_stock('%1',%2,%3)")
			.arg(ui.goodsID_import_stock_LE->text())
			.arg(ui.goodsCount_import_stock_LE->text())
			.arg(ui.goodsPrice_import_stock_LE->text());
		query.exec(sqlWords);
		if(query.lastError().type() != QSqlError::NoError)
		{
			QMessageBox::information(this,"错误","更新数据库出错！" + query.lastError().text());
			return ;
		}

		//更新库存
		sqlWords = QString("call setDepotCount_mgmt_stock('%1',%2);")
			.arg(ui.goodsID_import_stock_LE->text())
			.arg(ui.goodsCount_import_stock_LE->text());
		query.exec(sqlWords);
		if(query.lastError().type() != QSqlError::NoError)
		{
			QMessageBox::information(this,"错误","更新数据库出错！" + query.lastError().text());
			return ;
		}
	}
}

void Stock::updateTableWidget(QSqlQuery* query)
{
	ui.goodsInfo_stock_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "查询");
	while(query->next())
	{
		//将各个信息插入到QTableWidget控件中
		QTableWidgetItem *id, *goodsID, *goodsName, *goodsCostIn, *goodsSpec, *countIn, *stockEmpID, *selledFact, *stockTime;
		int row = ui.goodsInfo_stock_TBW->rowCount();
		ui.goodsInfo_stock_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,0,id);
		goodsID = new QTableWidgetItem(query->value(1).toString());
		goodsID->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,1,goodsID);
		goodsName = new QTableWidgetItem(query->value(2).toString());
		goodsName->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,2,goodsName);
		goodsCostIn = new QTableWidgetItem(query->value(3).toString());
		goodsCostIn->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,3,goodsCostIn);
		goodsSpec = new QTableWidgetItem(query->value(4).toString());
		goodsSpec->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,4,goodsSpec);
		countIn = new QTableWidgetItem(query->value(5).toString());
		countIn->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,5,countIn);
		stockEmpID = new QTableWidgetItem(query->value(6).toString());
		stockEmpID->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,6,stockEmpID);
		selledFact = new QTableWidgetItem(query->value(7).toString());
		selledFact->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,7,selledFact);
		stockTime = new QTableWidgetItem(query->value(8).toString().replace("T"," "));
		stockTime->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.goodsInfo_stock_TBW->setItem(row,8,stockTime);
	}
}

bool Stock::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误",status + "数据库失败！" + query->lastError().text());
		ui.status_stock_LB->setText(status + "数据库失败！" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_stock_LB->setText(status + "数据库成功！");
		return true;
	}
}

void Stock::on_importID_search_stock_RBTN_toggled(bool checked)
{
	ui.importID_search_stock_LE->setDisabled(!checked);
}

void Stock::on_importTime_search_stock_RBTN_toggled(bool checked)
{
	ui.importTimeStart_search_stock_DTE->setDisabled(!checked);
	ui.importTimeEnd_search_stock_DTE->setDisabled(!checked);
}