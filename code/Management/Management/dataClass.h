#ifndef DATACLASS_H
#define DATACLASS_H

#include <QRegExp>
#include <QDateTime>
#include <QCryptographicHash>

class DataClass
{
public:
	//��ǰ��¼��Ա��
	static QString currentEmployeeID;

	//�������Ƹ���lineEdit��������ʽ
	static QRegExp regExpIntegerOnly;
	static QRegExp regExpDecimalOnly;
	static QRegExp regExpDiscountFormat;

	DataClass();
	~DataClass();

	//get set��ǰ��½Ա��
	static void setCurrentLoginedEmployeeID(QString);
	static QString getCurrentLoginEmployeeID();

	//MD5���ܺ���
	static QString MD5(QString input);

	//���ص�ǰ���ڣ���format��ʽ
	static QString getDateTime(QString format);
};

#endif