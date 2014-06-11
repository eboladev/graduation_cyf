#include "presentModify.h"

PresentModify::PresentModify(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags),updateInfo(true)
{
	ui.setupUi(this);

	widgetInit();
}

PresentModify::~PresentModify()
{

}

void PresentModify::widgetInit()
{
	//用正则表达式限制各个QLineEdit的输入格式
	ui.presentGoodsCount_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.presentMoneyEnd_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.presentMoneyStart_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
}

void PresentModify::on_yes_modify_associator_BTN_clicked()
{
	if(ui.presentMoneyStart_modify_present_LE->text() == "" || ui.presentMoneyEnd_modify_present_LE->text() == "" ||
	   ui.presentGoodsID_modify_present_LE->text() == "" || ui.presentGoodsCount_modify_present_LE->text() == "")
	{
		QMessageBox::information(NULL,"错误","请填写完整信息！");
		return ;
	}

	if(ui.presentMoneyStart_modify_present_LE->text().toInt() > ui.presentMoneyEnd_modify_present_LE->text().toInt())
	{
		QMessageBox::information(this,"错误","价格区间输入错误！");
		return ;
	}

	QSqlQuery query;
	QString sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.presentGoodsID_modify_present_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","没有此商品，请仔细检查赠送商品编号！");
		return ;
	}

	if(!updateInfo)
	{
		//测试这个价格区间是否已经存在
		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text());
		query.exec(sqlWords);
		if(query.next())
		{
			QMessageBox::information(this,"错误",QString("有效的优惠管理:\"%1\"的价格区间:\"%2--%3\"包含了此价格区！")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}
		//测试这个价格区间是否已经存在
		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text());
		query.exec(sqlWords);
		if(query.next())
		{
			QMessageBox::information(this,"错误",QString("有效的优惠管理:\"%1\"的价格区间:\"%2--%3\"包含了此价格区！")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}

		sqlWords = QString("call addPresent_mgmt_present('%1',%2,%3,'%4',%5);")
			.arg(ui.presentID_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentGoodsID_modify_present_LE->text())
			.arg(ui.presentGoodsCount_modify_present_LE->text());
	}
	else
	{
		//测试这个价格区间是否已经存在
		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text());
		query.exec(sqlWords);
		while(query.next())
		{
			if(query.value(0).toString() == ui.presentID_modify_present_LE->text())
				continue ;
			QMessageBox::information(this,"错误",QString("优惠管理:\"%1\"的价格区间:\"%2--%3\"包含了此价格区！")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}

		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text());
		query.exec(sqlWords);
		while(query.next())
		{
			if(query.value(0).toString() == ui.presentID_modify_present_LE->text())
				continue ;
			QMessageBox::information(this,"错误",QString("优惠管理:\"%1\"的价格区间:\"%2--%3\"包含了此价格区！")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}

		sqlWords = QString("call setPresent_mgmt_present('%1',%2,%3,'%4',%5);")
			.arg(ui.presentID_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentGoodsID_modify_present_LE->text())
			.arg(ui.presentGoodsCount_modify_present_LE->text());
	}
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(NULL,"错误","修改数据库出错！" + query.lastError().text());
		return ;
	}
	else
	{
		QMessageBox::information(NULL,"提示","修改成功！");
		this->close();
	}
}

void PresentModify::setModifyID(QString modifyID)
{
	ui.presentID_modify_present_LE->setText(modifyID);
}

void PresentModify::setModifyPriceUp(QString modifyPriceUp)
{
	ui.presentMoneyEnd_modify_present_LE->setText(modifyPriceUp);
}

void PresentModify::setModifyPriceDown(QString modifyPriceDown)
{
	ui.presentMoneyStart_modify_present_LE->setText(modifyPriceDown);
}

void PresentModify::setModifyPresentID(QString modifyPresentID)
{
	ui.presentGoodsID_modify_present_LE->setText(modifyPresentID);
}

void PresentModify::setModifyPresentCount(QString modifyPresentCount)
{
	ui.presentGoodsCount_modify_present_LE->setText(modifyPresentCount);
}

void PresentModify::isUpdateDatabase(bool b)
{
	updateInfo = b;
}