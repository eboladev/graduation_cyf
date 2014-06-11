#include "present.h"
#include "presentModify.h"
#include "dataClass.h"

Present::Present(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	widgetInit();
}

Present::~Present()
{

}


void Present::widgetInit()
{
	//查询线程完成后，绑定到更新table
	connect(&queryThread,SIGNAL(queryFinished(QSqlQuery*)),this,SLOT(updateTableWidget(QSqlQuery*)));

	//初始化背景图片
	QPixmap pixmap("Resources/pres backgroud image.jpg");
	pixmap = pixmap.scaled(this->width(), this->height());
	QPalette palette;
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));
	this->setPalette(palette);
	this->setMask(pixmap.mask());
	this->setAutoFillBackground(true);

	//用正则表达式限制各个QLineEdit的输入格式
	ui.presentID_search_present_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.presentID_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.presentID_del_present_LE->setValidator(new QRegExpValidator(DataClass::regExpIntegerOnly,this));
	ui.presentMoneyStart_search_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.presentMoneyEnd_search_depot_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
}

void Present::on_modify_modify_present_BTN_clicked()
{
	//先获取此优惠管理信息，如果没有此ID，则直接提示并返回
	QSqlQuery query;
	QString sqlWords = QString("call getPresentListByID_mgmt_present('%1');").arg(ui.presentID_modify_present_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此ID的优惠信息！");
		return ;
	}
	//初始化修改窗口的各个控件的初始值
	PresentModify presentModifyUI;
	presentModifyUI.setModifyID(query.value(0).toString());
	presentModifyUI.setModifyPriceDown(query.value(1).toString());
	presentModifyUI.setModifyPriceUp(query.value(2).toString());
	presentModifyUI.setModifyPresentID(query.value(3).toString());
	presentModifyUI.setModifyPresentCount(query.value(4).toString());
	presentModifyUI.isUpdateDatabase(true);
	presentModifyUI.exec();
}

void Present::on_del_modify_present_BTN_clicked()
{
	QMessageBox mb("确认", "确定删除此优惠信息？",
		QMessageBox::Question,
		QMessageBox::Yes   |   QMessageBox::Default,
		QMessageBox::No     |   QMessageBox::Escape,
		QMessageBox::NoButton);

	if(mb.exec() == QMessageBox::No)   
		return;

	//先测试是不是有这个ID的优惠信息
	QSqlQuery query;
	QString sqlWords = QString("call getPresentListByID_mgmt_present('%1');").arg(ui.presentID_del_present_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此ID的优惠信息！");
		return ;
	}
	//有此优惠信息，则删除
	sqlWords = QString("call delPresent_mgmt_present('%1');").arg(ui.presentID_del_present_LE->text());
	query.exec(sqlWords);
	checkExecSqlRes(&query, "删除");
}

void Present::on_add_modify_present_BTN_clicked()
{
	QString newPreID = DataClass::getDateTime("yyyyMMddhhmmss") + QString::number(qrand() % 10);
	PresentModify presentModifyUI;
	presentModifyUI.setModifyID(newPreID);
	presentModifyUI.isUpdateDatabase(false);
	presentModifyUI.exec();
}

void Present::on_search_search_present_RBTN_clicked()
{
	if(ui.presentID_search_present_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getPresentListByID_mgmt_present('%1');").arg(ui.presentID_search_present_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_present_LB->setText("正在查询，请稍后......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.presentMoney_search_depot_RBTN->isChecked())
	{
		if(ui.presentMoneyStart_search_depot_LE->text().toInt() > ui.presentMoneyEnd_search_depot_LE->text().toInt())
		{
			QMessageBox::information(this,"错误","价格区间输入错误！");
			return ;
		}
		QSqlQuery query;
		QString sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyEnd_search_depot_LE->text())
			.arg(ui.presentMoneyStart_search_depot_LE->text());
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_present_LB->setText("正在查询，请稍后......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}

	if(ui.presentAll_search_present_RBTN->isChecked())
	{
		QSqlQuery query;
		QString sqlWords = QString("call getPresentListByAll_mgmt_present();");
		queryThread.setSqlWords(sqlWords);
		queryThread.start();
		this->setDisabled(true);
		ui.status_present_LB->setText("正在查询，请稍后......");
		//	ui.goodsID_search_depot_LE->setText("");
		return ;
	}
}

void Present::on_presentID_search_present_RBTN_toggled(bool checked)
{
	ui.presentID_search_present_LE->setDisabled(!checked);
}

void Present::on_presentMoney_search_depot_RBTN_toggled(bool checked)
{
	ui.presentMoneyStart_search_depot_LE->setDisabled(!checked);
	ui.presentMoneyEnd_search_depot_LE->setDisabled(!checked);
}

bool Present::checkExecSqlRes(QSqlQuery* query, QString status)
{
	if(query->lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(this,"错误",status + "数据库失败！" + query->lastError().text());
		ui.status_present_LB->setText(status + "数据库失败！" + query->lastError().text());
		return false;
	}
	else
	{
		ui.status_present_LB->setText(status + "数据库成功！");
		return true;
	}
}

void Present::updateTableWidget(QSqlQuery* query)
{
	ui.presentInfo_modify_present_TBW->setRowCount(0);
	this->setDisabled(false);
	checkExecSqlRes(query, "查询");
	while(query->next())
	{
		//将各个信息插入到QTableWidget控件中
		QTableWidgetItem *id, *down, *up, *goodsID, *count;
		int row = ui.presentInfo_modify_present_TBW->rowCount();
		ui.presentInfo_modify_present_TBW->setRowCount(row + 1);
		id = new QTableWidgetItem(query->value(0).toString());
		id->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.presentInfo_modify_present_TBW->setItem(row,0,id);
		down = new QTableWidgetItem(query->value(1).toString());
		down->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.presentInfo_modify_present_TBW->setItem(row,1,down);
		up = new QTableWidgetItem(query->value(2).toString());
		up->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.presentInfo_modify_present_TBW->setItem(row,2,up);
		goodsID = new QTableWidgetItem(query->value(3).toString());
		goodsID->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.presentInfo_modify_present_TBW->setItem(row,3,goodsID);
		count = new QTableWidgetItem(query->value(4).toString());
		count->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
		ui.presentInfo_modify_present_TBW->setItem(row,4,count);
	}
}