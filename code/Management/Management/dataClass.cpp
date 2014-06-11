#include "DataClass.h"

//用正则表达式限制输入框的输入模式只能为数字   商品编号等
QRegExp DataClass::regExpIntegerOnly = QRegExp("[0-9]*");
//限制输入模式为价钱等，支持小数
QRegExp DataClass::regExpDecimalOnly = QRegExp("([1-9][0-9]*\\.[0-9]*)|(0\\.[0-9]*)");
//限制折扣输入模式为0~100
QRegExp DataClass::regExpDiscountFormat = QRegExp("([1-9])|([1-9][0-9])|(100)");

QString DataClass::currentEmployeeID = QString("");

//设置tableWidget表头自动适应
// 	ui.goodsInfo_depot_TBW->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

DataClass::DataClass()
{

}

DataClass::~DataClass()
{

}

QString DataClass::MD5(QString input)
{
	//调用qt的库函数来MD5加密
	QByteArray qba = QCryptographicHash::hash(input.toAscii(),QCryptographicHash::Md5);
	QString res;
	res.append(qba.toHex());
	return res;
}

QString DataClass::getDateTime(QString format)
{
	return QDateTime::currentDateTime().toString(format);
}