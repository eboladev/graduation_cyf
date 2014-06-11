#ifndef DATACLASS_H
#define DATACLASS_H

#include <QMap>
#include <QVector>
#include <QCryptographicHash>

#include <QFile>
#include <QVariant>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>

#include <QDateTime>
#include <QTextStream>
#include <QIODevice>
#include <QDomElement>
#include <QDomDocument>

//dataClass用于一些公共变量，函数
class DataClass
{
public:
	//内存中存放数据的数据结构
	static QMap<QString, QString> memStruct_employee;
	static QMap<QString, QString> memStruct_associator;
	static QMap<QString, QString> memStruct_goods;
	static QMap<QString, QString> memStruct_right;
	static QMap<QString, QString> memStruct_present;

	//保存当前登录的用户
	static QString currentEmployeeID;

	//当前交易方式，"WN":with net  "WON":without net
	static QString currentDealWay;

	//构造/析构函数
	DataClass();
	~DataClass();

	//初始化static数据
	static void initStaticData();

	//数据库操作测试
	static void databaseOPTest();

	//MD5加密函数
	static QString MD5(QString input);

	//返回当前日期，以format形式
	static QString getDateTime(QString format);

	//返回交易号，组成：登陆员工号+交易时间+随机生成一位数字
	static QString getDealID();

	//将带小数点的字符串型的数值转换成准确的Float
	static float string2float(QString input);

	//获取指定字符串指向的xml的root节点
	//xmlFileName：xml文件名
	//root&：根节点
	//doc&：绑定的xml文档
	//mode：xml文件打开模式
	static bool loadXml(QDomDocument& doc, QString xmlFileName);

	//创建一个节点节点
	//root&：根节点
	//elementTagText：节点名称
	//elementContext：节点内容
	static bool createElement(QDomElement& dom, QString elementTagText, QString elementContext);

	//获取指定字符串指向的xml的root节点
	//重载函数，root参数函数为以write方式读写xml  doc参数函数为以append方式读写xml
	//因为发现如果统一用root方式，不行，会出错。不知道为什么。。 mark
	//doc&：xml文档
	//root&：根节点
	//xmlFileName：xml文件名
	//mode：xml文件打开模式
	static bool writeRoot2Xml(QDomDocument& doc, QString xmlFileName);
	static bool writeRoot2Xml(QDomElement& root, QString xmlFileName);

	//如果是断网交易，则首先调用此函数来读取各个xml文件的信息
	static bool loadDataFromXml();

	//如果是联网交易，则首先将交易xml文件中的数据库语句执行，然后读取新的商品等信息到xml文件
	static bool updataDatabaseFromXml();
	static bool updataDatabaseToXml();

private:
	//QVector<QString> 初始化xml文件结构，方便创建从xml中读取/存放数据的统一函数
	//依次为：员工信息，会员信息，商品信息，权限信息，优惠管理信息
	static QVector<QString> xmlStruct_employee;
	static QVector<QString> xmlStruct_associator;
	static QVector<QString> xmlStruct_goods;
	static QVector<QString> xmlStruct_right;
	static QVector<QString> xmlStruct_present;

	//调用Database的存储过程之后，将数据写到xml文件汇总，并同时写到内存的数据结构中
	//xmlStruct：初始化xml文件结构
	//memStruct：xml文件将要写入的内存的数据结构
	//xmlFileName：xml文档名称
	//databaseProcessString：要调用的数据库的存储过程字符串
	static bool updataDatabaseToXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName, QString databaseProcessString);

	//从XML中读取数据放到内存中的函数
	//xmlStruct：初始化xml文件结构
	//memStruct：xml文件将要写入的内存的数据结构
	//xmlFileName：xml文档名称
	static bool loadDataFromXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName);
};

#endif