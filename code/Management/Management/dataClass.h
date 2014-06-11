#ifndef DATACLASS_H
#define DATACLASS_H

#include <QRegExp>
#include <QDateTime>
#include <QCryptographicHash>

class DataClass
{
public:
	//当前登录的员工
	static QString currentEmployeeID;

	//用于限制各个lineEdit的正则表达式
	static QRegExp regExpIntegerOnly;
	static QRegExp regExpDecimalOnly;
	static QRegExp regExpDiscountFormat;

	DataClass();
	~DataClass();

	//get set当前登陆员工
	static void setCurrentLoginedEmployeeID(QString);
	static QString getCurrentLoginEmployeeID();

	//MD5加密函数
	static QString MD5(QString input);

	//返回当前日期，以format形式
	static QString getDateTime(QString format);
};

#endif