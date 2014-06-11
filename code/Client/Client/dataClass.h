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

//dataClass����һЩ��������������
class DataClass
{
public:
	//�ڴ��д�����ݵ����ݽṹ
	static QMap<QString, QString> memStruct_employee;
	static QMap<QString, QString> memStruct_associator;
	static QMap<QString, QString> memStruct_goods;
	static QMap<QString, QString> memStruct_right;
	static QMap<QString, QString> memStruct_present;

	//���浱ǰ��¼���û�
	static QString currentEmployeeID;

	//��ǰ���׷�ʽ��"WN":with net  "WON":without net
	static QString currentDealWay;

	//����/��������
	DataClass();
	~DataClass();

	//��ʼ��static����
	static void initStaticData();

	//���ݿ��������
	static void databaseOPTest();

	//MD5���ܺ���
	static QString MD5(QString input);

	//���ص�ǰ���ڣ���format��ʽ
	static QString getDateTime(QString format);

	//���ؽ��׺ţ���ɣ���½Ա����+����ʱ��+�������һλ����
	static QString getDealID();

	//����С������ַ����͵���ֵת����׼ȷ��Float
	static float string2float(QString input);

	//��ȡָ���ַ���ָ���xml��root�ڵ�
	//xmlFileName��xml�ļ���
	//root&�����ڵ�
	//doc&���󶨵�xml�ĵ�
	//mode��xml�ļ���ģʽ
	static bool loadXml(QDomDocument& doc, QString xmlFileName);

	//����һ���ڵ�ڵ�
	//root&�����ڵ�
	//elementTagText���ڵ�����
	//elementContext���ڵ�����
	static bool createElement(QDomElement& dom, QString elementTagText, QString elementContext);

	//��ȡָ���ַ���ָ���xml��root�ڵ�
	//���غ�����root��������Ϊ��write��ʽ��дxml  doc��������Ϊ��append��ʽ��дxml
	//��Ϊ�������ͳһ��root��ʽ�����У��������֪��Ϊʲô���� mark
	//doc&��xml�ĵ�
	//root&�����ڵ�
	//xmlFileName��xml�ļ���
	//mode��xml�ļ���ģʽ
	static bool writeRoot2Xml(QDomDocument& doc, QString xmlFileName);
	static bool writeRoot2Xml(QDomElement& root, QString xmlFileName);

	//����Ƕ������ף������ȵ��ô˺�������ȡ����xml�ļ�����Ϣ
	static bool loadDataFromXml();

	//������������ף������Ƚ�����xml�ļ��е����ݿ����ִ�У�Ȼ���ȡ�µ���Ʒ����Ϣ��xml�ļ�
	static bool updataDatabaseFromXml();
	static bool updataDatabaseToXml();

private:
	//QVector<QString> ��ʼ��xml�ļ��ṹ�����㴴����xml�ж�ȡ/������ݵ�ͳһ����
	//����Ϊ��Ա����Ϣ����Ա��Ϣ����Ʒ��Ϣ��Ȩ����Ϣ���Żݹ�����Ϣ
	static QVector<QString> xmlStruct_employee;
	static QVector<QString> xmlStruct_associator;
	static QVector<QString> xmlStruct_goods;
	static QVector<QString> xmlStruct_right;
	static QVector<QString> xmlStruct_present;

	//����Database�Ĵ洢����֮�󣬽�����д��xml�ļ����ܣ���ͬʱд���ڴ�����ݽṹ��
	//xmlStruct����ʼ��xml�ļ��ṹ
	//memStruct��xml�ļ���Ҫд����ڴ�����ݽṹ
	//xmlFileName��xml�ĵ�����
	//databaseProcessString��Ҫ���õ����ݿ�Ĵ洢�����ַ���
	static bool updataDatabaseToXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName, QString databaseProcessString);

	//��XML�ж�ȡ���ݷŵ��ڴ��еĺ���
	//xmlStruct����ʼ��xml�ļ��ṹ
	//memStruct��xml�ļ���Ҫд����ڴ�����ݽṹ
	//xmlFileName��xml�ĵ�����
	static bool loadDataFromXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName);
};

#endif