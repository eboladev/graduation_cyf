#include "sell.h"
#include "dataClass.h"

Sell::Sell(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Sell::~Sell()
{

}


void Sell::widgetInit()
{
	//查询线程完成后，绑定到更新table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//设置背景图片
	QPixmap pixmap("Resources/sell backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//用正则表达式限制QLineEdit的输入格式
	ui.goodsID_search_sell_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.employeeID_search_sell_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.goodsID_stat_sell_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.employeeID_stat_sell_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
}

void Sell::on_search_search_sell_BTN_clicked()
{
	//首先检查是否有选中的条件，没有的话，返回错误
	if(!ui.sellTime_search_sell_CKB->isChecked() && !ui.goodsID_search_sell_CKB->isChecked() &&
		!ui.employeeID_search_sell_CKB->isChecked() && !ui.sellAll_search_sell_CKB->isChecked())
	{
		QMessageBox::information(this,"错误","请先选择查询条件");
		return ;
	}
	if(ui.sellTime_search_sell_CKB->isChecked() && ui.sellTimeStart_search_sell_DTE->date() >= ui.sellTimeEnd_search_sell_DTE->date())
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
	if(ui.goodsID_search_sell_CKB->isChecked())
		id = ui.goodsID_search_sell_LE->text();
	if(ui.employeeID_search_sell_CKB->isChecked())
		empID = ui.employeeID_search_sell_LE->text();
	if(ui.sellTime_search_sell_CKB->isChecked())
	{
		timeStart = "'" + ui.sellTimeStart_search_sell_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
		timeEnd = "'" + ui.sellTimeEnd_search_sell_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
	}
	//将条件带入到存储过程中进行查询
	QSqlQuery query;
	QString sqlWords = QString("call getSellList_mgmt_sell('%1','%2',%3,%4)")
		.arg(id).arg(empID).arg(timeStart).arg(timeEnd);
	queryThread.setSqlWords(sqlWords);
	queryThread.start();
	this->setDisabled(true);
	ui.status_sell_LB->setText("正在查询，请稍后......");
}

void Sell::on_stat_stat_sell_BTN_clicked()
{
	//首先检查是否有选中的条件，没有的话，返回错误
	if(!ui.sellTime_stat_sell_CKB->isChecked() && !ui.goodsID_stat_sell_CKB->isChecked() &&
		!ui.employeeID_stat_sell_CKB->isChecked() && !ui.sellAll_stat_sell_CKB->isChecked())
	{
		QMessageBox::information(this,"错误","请先选择查询条件");
		return ;
	}
	if(ui.sellTime_stat_sell_CKB->isChecked() && ui.sellTimeStart_stat_sell_DTE->date() >= ui.sellTimeEnd_stat_sell_DTE->date())
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
	if(ui.goodsID_stat_sell_CKB->isChecked())
		id = ui.goodsID_stat_sell_LE->text();
	if(ui.employeeID_stat_sell_CKB->isChecked())
		empID = ui.employeeID_stat_sell_LE->text();
	if(ui.sellTime_stat_sell_CKB->isChecked())
	{
		timeStart = "'" + ui.sellTimeStart_stat_sell_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
		timeEnd = "'" + ui.sellTimeEnd_stat_sell_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
	}
	//将条件带入到存储过程中进行查询
	QSqlQuery query;
	QString sqlWords = QString("call getSellStat_mgmt_sell('%1','%2',%3,%4)")
		.arg(id).arg(empID).arg(timeStart).arg(timeEnd);
	queryThread.setSqlWords(sqlWords);
	queryThread.start();
	this->setDisabled(true);
	ui.status_sell_LB->setText("正在查询，请稍后......");
}

void Sell::updateTableWidget(QSqlQuery* query)
{
	ui.sellInfo_depot_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "查询");
	while(query->next())
	{
		//将各个信息插入到QTableWidget控件中
		QTableWidgetItem *id, *empID, *count, *money, *discount, *assDiscount, *time;
		int row = ui.sellInfo_depot_TBW->rowCount();
		ui.sellInfo_depot_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,0,id);
		empID = new QTableWidgetItem(query->value(1).toString());
		empID->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,1,empID);
		count = new QTableWidgetItem(query->value(2).toString());
		count->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,2,count);
		money = new QTableWidgetItem(query->value(3).toString());
		money->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,3,money);
		discount = new QTableWidgetItem(query->value(4).toString());
		discount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,4,discount);
		assDiscount = new QTableWidgetItem(query->value(5).toString());
		assDiscount->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,5,assDiscount);
		time = new QTableWidgetItem(query->value(6).toString().replace("T"," "));
		time->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.sellInfo_depot_TBW->setItem(row,6,time);
	}
}

void Sell::on_goodsID_search_sell_CKB_clicked()
{
	bool checked = ui.goodsID_search_sell_CKB->isChecked();
	if(checked)
	{
		ui.sellAll_search_sell_CKB->setChecked(!checked);
	}
}
void Sell::on_goodsID_search_sell_CKB_toggled(bool checked)
{
	ui.goodsID_search_sell_LE->setDisabled(!checked);
}

void Sell::on_employeeID_search_sell_CKB_clicked()
{
	bool checked = ui.employeeID_search_sell_CKB->isChecked();
	if(checked)
	{
		ui.sellAll_search_sell_CKB->setChecked(!checked);
	}
}
void Sell::on_employeeID_search_sell_CKB_toggled(bool checked)
{
	ui.employeeID_search_sell_LE->setDisabled(!checked);
}

void Sell::on_sellTime_search_sell_CKB_toggled(bool checked)
{
	ui.sellTimeStart_search_sell_DTE->setDisabled(!checked);
	ui.sellTimeEnd_search_sell_DTE->setDisabled(!checked);
}
void Sell::on_sellAll_search_sell_CKB_clicked()
{
	bool checked = ui.sellAll_search_sell_CKB->isChecked();
	if(checked)
	{
		ui.goodsID_search_sell_CKB->setChecked(!checked);
		ui.employeeID_search_sell_CKB->setChecked(!checked);
	}
}

void Sell::on_goodsID_stat_sell_CKB_clicked()
{
	bool checked = ui.goodsID_stat_sell_CKB->isChecked();
	if(checked)
	{
		ui.sellAll_stat_sell_CKB->setChecked(!checked);
	}
}
void Sell::on_goodsID_stat_sell_CKB_toggled(bool checked)
{
	ui.goodsID_stat_sell_LE->setDisabled(!checked);
}

void Sell::on_employeeID_stat_sell_CKB_clicked()
{
	bool checked = ui.employeeID_stat_sell_CKB->isChecked();
	if(checked)
	{
		ui.sellAll_stat_sell_CKB->setChecked(!checked);
	}
}
void Sell::on_employeeID_stat_sell_CKB_toggled(bool checked)
{
	ui.employeeID_stat_sell_LE->setDisabled(!checked);
}

void Sell::on_sellTime_stat_sell_CKB_toggled(bool checked)
{
	ui.sellTimeStart_stat_sell_DTE->setDisabled(!checked);
	ui.sellTimeEnd_stat_sell_DTE->setDisabled(!checked);
}

void Sell::on_sellAll_stat_sell_CKB_clicked()
{
	bool checked = ui.sellAll_stat_sell_CKB->isChecked();
	if(checked)
	{
		ui.goodsID_stat_sell_CKB->setChecked(!checked);
		ui.employeeID_stat_sell_CKB->setChecked(!checked);
	}
}

bool Sell::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误",status + "数据库失败！" + query->lastError().text());
		ui.status_sell_LB->setText(status + "数据库失败！" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_sell_LB->setText(status + "数据库成功！");
		return true;
	}
}