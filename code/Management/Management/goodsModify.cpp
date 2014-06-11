#include "goodsModify.h"

GoodsModify::GoodsModify(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags),updateInfo(true)
{
	ui.setupUi(this);

	widgetInit();
}

GoodsModify::~GoodsModify()
{

}

void GoodsModify::widgetInit()
{
	//初始化下拉列表框
	QSqlQuery query;
	QString sqlWords = "call getGoodsClassList_mgmt_depot_goods();";
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(NULL,"错误","获取商品类别集合失败！");
		return ;
	}
	while (query.next())
		ui.goodsClass_modify_goods_CB->addItem(query.value(0).toString());

	//设置QLineEdit的输入格式
	ui.goodsPrice_modify_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.goodsCost_modify_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.goodsDiscount_modify_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpDiscountFormat,this));
	ui.goodsAssDiscount_modify_goods_LE->setValidator(new QRegExpValidator(DataClass::regExpDiscountFormat,this));
}

void GoodsModify::on_yes_modif_goods_CLBTN_clicked()
{
	if(ui.goodsID_modify_goods_LE->text() == "" || ui.goodsName_modify_goods_LE->text() == "" ||
		ui.goodsClass_modify_goods_CB->currentText() == "" || ui.goodsPrice_modify_goods_LE->text() == "" ||
		ui.goodsSpecification_modify_goods_LE->text() == "" || ui.goodsDiscount_modify_goods_LE->text() == "" ||
		ui.goodsCost_modify_goods_LE->text() == "" || ui.goodsAssDiscount_modify_goods_LE->text() == "")
	{
		QMessageBox::information(NULL,"错误","请填写完整信息！");
		return ;
	}
	QSqlQuery query;
	QString sqlWords;
	if(!updateInfo)
	{
		QSqlQuery _query;
		QString _sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.goodsID_modify_goods_LE->text());
		_query.exec(_sqlWords);
		if(_query.next())
		{
			QMessageBox::information(NULL,"错误","此商品已存在！");
			return ;
		}

		sqlWords = QString("call addGoods_mgmt_goods('%1','%2',%3,'%4','%5',%6,%7,%8);")
			.arg(ui.goodsID_modify_goods_LE->text()).arg(ui.goodsClass_modify_goods_CB->currentText())
			.arg(ui.goodsPrice_modify_goods_LE->text()).arg(ui.goodsSpecification_modify_goods_LE->text())
			.arg(ui.goodsName_modify_goods_LE->text()).arg(ui.goodsCost_modify_goods_LE->text())
			.arg(ui.goodsDiscount_modify_goods_LE->text()).arg(ui.goodsAssDiscount_modify_goods_LE->text());
	}
	else
	{
		sqlWords = QString("call setGoods_mgmt_goods('%1','%2',%3,'%4','%5',%6,%7,%8);")
			.arg(ui.goodsID_modify_goods_LE->text()).arg(ui.goodsClass_modify_goods_CB->currentText())
			.arg(ui.goodsPrice_modify_goods_LE->text()).arg(ui.goodsSpecification_modify_goods_LE->text())
			.arg(ui.goodsName_modify_goods_LE->text()).arg(ui.goodsCost_modify_goods_LE->text())
			.arg(ui.goodsDiscount_modify_goods_LE->text()).arg(ui.goodsAssDiscount_modify_goods_LE->text());
	}
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(NULL,"错误","修改数据库出错！" + query.lastError().text());
		return ;
	}
	else
	{
		if(ui.goodsClass_modify_goods_CB->findText(ui.goodsClass_modify_goods_CB->currentText()) == -1)
		{
			sqlWords = QString("call insertGoodsClass_mgmt_goods('%1')").arg(ui.goodsClass_modify_goods_CB->currentText());
			query.exec(sqlWords);
			if(query.lastError().type() != QSqlError::NoError)
			{
				QMessageBox::information(this,"错误","插入数据库失败！");
				return ;
			}
			emit updateGoodsClassCB(ui.goodsClass_modify_goods_CB->currentText());
		}
		QMessageBox::information(NULL,"提示","修改成功！");
		this->close();
	}
}

void GoodsModify::setModifyID(QString modifyID)
{
	ui.goodsID_modify_goods_LE->setText(modifyID);
}
void GoodsModify::setModifyName(QString modifyName)
{
	ui.goodsName_modify_goods_LE->setText(modifyName);
}
void GoodsModify::setModifyClass(QString modifyClass)
{
	int index = ui.goodsClass_modify_goods_CB->findText(modifyClass);
	ui.goodsClass_modify_goods_CB->setCurrentIndex(index);
}
void GoodsModify::setModifyPrice(QString modifyPrice)
{
	ui.goodsPrice_modify_goods_LE->setText(modifyPrice);
}
void GoodsModify::setModifySpec(QString modifySpec)
{
	ui.goodsSpecification_modify_goods_LE->setText(modifySpec);
}
void GoodsModify::setModifyDiscount(QString modifyDiscount)
{
	ui.goodsDiscount_modify_goods_LE->setText(modifyDiscount);
}
void GoodsModify::setModifyCost(QString modifyCost)
{
	ui.goodsCost_modify_goods_LE->setText(modifyCost);
}
void GoodsModify::setModifyAssDiscount(QString modifyAssDiscount)
{
	ui.goodsAssDiscount_modify_goods_LE->setText(modifyAssDiscount);
}
void GoodsModify::updateDatabase(bool b)
{
	updateInfo = b;
	if(!updateInfo)
		ui.goodsID_modify_goods_LE->setDisabled(false);
}