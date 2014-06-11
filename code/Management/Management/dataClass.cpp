#include "DataClass.h"

//��������ʽ��������������ģʽֻ��Ϊ����   ��Ʒ��ŵ�
QRegExp DataClass::regExpIntegerOnly = QRegExp("[0-9]*");
//��������ģʽΪ��Ǯ�ȣ�֧��С��
QRegExp DataClass::regExpDecimalOnly = QRegExp("([1-9][0-9]*\\.[0-9]*)|(0\\.[0-9]*)");
//�����ۿ�����ģʽΪ0~100
QRegExp DataClass::regExpDiscountFormat = QRegExp("([1-9])|([1-9][0-9])|(100)");

QString DataClass::currentEmployeeID = QString("");

//����tableWidget��ͷ�Զ���Ӧ
// 	ui.goodsInfo_depot_TBW->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

DataClass::DataClass()
{

}

DataClass::~DataClass()
{

}

QString DataClass::MD5(QString input)
{
	//����qt�Ŀ⺯����MD5����
	QByteArray qba = QCryptographicHash::hash(input.toAscii(),QCryptographicHash::Md5);
	QString res;
	res.append(qba.toHex());
	return res;
}

QString DataClass::getDateTime(QString format)
{
	return QDateTime::currentDateTime().toString(format);
}