#include "dataClass.h"

//���ȳ�ʼ����̬���ݳ�Ա
QString DataClass::currentEmployeeID = QString("");
QString DataClass::currentDealWay = QString("WON");

QVector<QString> DataClass::xmlStruct_employee = QVector<QString>();
QVector<QString> DataClass::xmlStruct_associator = QVector<QString>();
QVector<QString> DataClass::xmlStruct_goods = QVector<QString>();
QVector<QString> DataClass::xmlStruct_right = QVector<QString>();
QVector<QString> DataClass::xmlStruct_present = QVector<QString>();

QMap<QString, QString> DataClass::memStruct_employee = QMap<QString, QString>();
QMap<QString, QString> DataClass::memStruct_associator = QMap<QString, QString>();
QMap<QString, QString> DataClass::memStruct_goods = QMap<QString, QString>();
QMap<QString, QString> DataClass::memStruct_right = QMap<QString, QString>();
QMap<QString, QString> DataClass::memStruct_present = QMap<QString, QString>();

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

float DataClass::string2float(QString input)
{
	int size = input.size();
	int pointIndex = input.indexOf(".");
	int intPart = input.mid(0,pointIndex).toInt();
	int decPartI = input.mid(pointIndex+1,size - pointIndex - 1).toInt();
	float decPargF = (float)decPartI;
	for(int i=0; i<size - pointIndex - 1; i++)
		decPargF /= 10;
	return intPart + decPargF;
	
}

void DataClass::initStaticData()
{
	//��ʼ����̬���ݳ�Ա
	xmlStruct_employee.append("Ա��");
	xmlStruct_employee.append("Ա������");
	xmlStruct_employee.append("����");
	xmlStruct_employee.append("����");
	xmlStruct_employee.append("Ա�����");

	xmlStruct_associator.append("��Ա");
	xmlStruct_associator.append("��Ա����");
	xmlStruct_associator.append("����");

	xmlStruct_goods.append("��Ʒ");
	xmlStruct_goods.append("��Ʒ���");
	xmlStruct_goods.append("���ۼ۸�");
	xmlStruct_goods.append("��Ʒ���");
	xmlStruct_goods.append("��Ʒ����");
	xmlStruct_goods.append("�ɱ�");
	xmlStruct_goods.append("�ۿ�");
	xmlStruct_goods.append("��Ա�ۿ�");

	xmlStruct_right.append("Ȩ��");
	xmlStruct_right.append("Ա�����");
	xmlStruct_right.append("�޸Ľ����嵥");

	xmlStruct_present.append("�Żݹ���");
	xmlStruct_present.append("�Żݱ��");
	xmlStruct_present.append("�۸�����");
	xmlStruct_present.append("�۸�����");
	xmlStruct_present.append("������Ʒ���");
	xmlStruct_present.append("��������");
}

QString DataClass::getDateTime(QString format)
{
	return QDateTime::currentDateTime().toString(format);
}

QString DataClass::getDealID()
{
	return currentEmployeeID + getDateTime("yyyyMMddhhmmss") + QString::number(qrand() % 10);
}

bool DataClass::loadXml(QDomDocument& doc, QString xmlFileName)
{
	QFile xmlLoadFile(xmlFileName);
	if(!xmlLoadFile.open(QIODevice::ReadOnly))
	{	
		QMessageBox::information(NULL,"����","�޷���xml�ļ�: " + xmlFileName);
		return false;
	}
	if(!doc.setContent(&xmlLoadFile,false))
	{
		QMessageBox::information(NULL,"����","�޷���QDomDocument��QFile");
		return false;
	}
	xmlLoadFile.close();
	return true;
}

bool DataClass::createElement(QDomElement& dom, QString elementTagText, QString elementContext)
{
	QDomDocument doc;
	QDomElement addElement = doc.createElement(elementTagText);
	QDomText addText = doc.createTextNode(elementContext);
	addElement.appendChild(addText);
	dom.appendChild(addElement);
	return true;
}
bool DataClass::writeRoot2Xml(QDomDocument& doc, QString xmlFileName)
{
	QFile xmlModifyFile(xmlFileName);
	if (!xmlModifyFile.open(QIODevice::WriteOnly))
	{
		QMessageBox::information(NULL,"����","�޷���xml�ļ�: " + xmlFileName);
		return false;
	}
	QTextStream out(&xmlModifyFile);
	doc.save(out,3);
	xmlModifyFile.close();

	return true;
}

bool DataClass::writeRoot2Xml(QDomElement& root, QString xmlFileName)
{
	QFile xmlModifFile(xmlFileName);
	if (!xmlModifFile.open(QIODevice::WriteOnly))
		return false;
	QTextStream out(&xmlModifFile);
	QDomDocument xmlDoc;
	QString strHead("version=\"1.0\" encoding=\"GB2312\"");
	xmlDoc.appendChild(xmlDoc.createProcessingInstruction("xml", strHead));
	out<<xmlDoc.toString();
	root.save(out,3);
	xmlModifFile.close();
	return true;
}

bool DataClass::updataDatabaseFromXml()
{
	//��xml�ж�ȡsql��䲢ִ�У��Դ˽��ϴεĶ������׸��µ����ݿ�
	QDomDocument doc;
	if(!(loadXml(doc, "./WONConfig/����SQL���.xml")))
	{
		QDomElement root = doc.createElement("����SQL���");
		writeRoot2Xml(root,"./WONConfig/����SQL���.xml");
		return true;
	}

	QDomElement root = doc.documentElement();
	if(root.tagName() != "����SQL���")
	{
		QMessageBox::information(NULL,"����","./WONConfig/����SQL���.xml �ļ���ʽ����ȷ��");
		return false;
	}
	QDomElement aElement = root.firstChildElement("SQL");
	QSqlQuery query;
	QString sqlWords;
	while(!aElement.isNull())
	{
		//��ȡÿ��sql��䲢ִ��
		sqlWords = aElement.text();
		query.exec(sqlWords);
		aElement = aElement.nextSiblingElement("SQL");
	}

	//ȫ����ȡ֮����������߲���xml�ļ�
	QDomDocument newDoc;
	QDomElement newRoot = newDoc.createElement("����SQL���");
	writeRoot2Xml(newRoot, "./WONConfig/����SQL���.xml");

	return true;
}


bool DataClass::loadDataFromXml()
{
	bool res_1 = loadDataFromXmlPrivate(xmlStruct_employee, memStruct_employee, "./WONConfig/Ա��.xml");
	bool res_2 = loadDataFromXmlPrivate(xmlStruct_associator, memStruct_associator, "./WONConfig/��Ա.xml");
	bool res_3 = loadDataFromXmlPrivate(xmlStruct_goods, memStruct_goods, "./WONConfig/��Ʒ.xml");
	bool res_4 = loadDataFromXmlPrivate(xmlStruct_present, memStruct_present, "./WONConfig/�Żݹ���.xml");
	bool res_5 = loadDataFromXmlPrivate(xmlStruct_right, memStruct_right, "./WONConfig/Ȩ��.xml");

	return (res_1 & res_2 & res_3 & res_4 & res_5);
}


bool DataClass::loadDataFromXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName)
{
	//����XML��ʽ
	QDomDocument doc;
	//���ú������������ò���
	if(!(loadXml(doc, xmlFileName)))
		return false;

	QDomElement root = doc.documentElement();
	if(root.tagName() != xmlStruct[0])
	{
		QMessageBox::information(NULL,"����",xmlFileName + "�ļ���ʽ����ȷ��");
		return false;
	}
	QDomElement aElement = root.firstChildElement(xmlStruct[0] + "��Ϣ");
	//��ȡXML�ļ�������Ϣ�ӹ���ӳ�䣬�������ڴ�����ݽṹ��
	while(!aElement.isNull())
	{
		QString mapKey, mapValue;
		mapKey = aElement.firstChildElement(xmlStruct[1]).text();
		for(int i=1; i<xmlStruct.size() - 1; i++)
		{
			mapValue += aElement.firstChildElement(xmlStruct[i+1]).text() + "_";
		}
		memStruct.insert(mapKey, mapValue);
		aElement = aElement.nextSiblingElement(xmlStruct[0] + "��Ϣ");
	}
	return true;
}

bool DataClass::updataDatabaseToXml()
{
	//��Ϊ��ʼ�Ѿ���ȡ��һ��xml�ļ����ڴ�����ݽṹ��
	//���Ը������ݿ��������ݵ�ʱ��Ҫ�����
	memStruct_right.clear();
	memStruct_present.clear();
	memStruct_goods.clear();
	memStruct_employee.clear();
	memStruct_associator.clear();
	bool res_1 = updataDatabaseToXmlPrivate(xmlStruct_employee, memStruct_employee, "./WONConfig/Ա��.xml", "call getAllEmployeeInfo_client_init();");
	bool res_2 = updataDatabaseToXmlPrivate(xmlStruct_associator, memStruct_associator, "./WONConfig/��Ա.xml", "call getAllAssociatorInfo_client_init();");
	bool res_3 = updataDatabaseToXmlPrivate(xmlStruct_goods, memStruct_goods, "./WONConfig/��Ʒ.xml", "call getAllGoodsInfo_client_init();");
	bool res_4 = updataDatabaseToXmlPrivate(xmlStruct_present, memStruct_present, "./WONConfig/�Żݹ���.xml", "call getAllPresentInfo_client_init();");
	bool res_5 = updataDatabaseToXmlPrivate(xmlStruct_right, memStruct_right, "./WONConfig/Ȩ��.xml", "call getAllRightInfo_client_init();");
	
	return (res_1 & res_2 & res_3 & res_4 & res_5);
}


bool DataClass::updataDatabaseToXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName, QString databaseProcessString)
{
	//����XML��ʽ
	QDomDocument doc;
	QDomElement root = doc.createElement(xmlStruct[0]);

	//ִ�����ݿ�洢����
	QSqlQuery query;
	QString sqlWords = databaseProcessString;
	query.exec(sqlWords);
	while(query.next())
	{
		//���洢���̷��ؽ���ӹ���ӳ����ʽ���浽xml
		QDomElement addElement;
		QDomText addText;
		QDomElement infoElement = doc.createElement(xmlStruct[0] + "��Ϣ");
		QString mapKey = query.value(0).toString();
		QString mapValue;
		for(int i=0; i<xmlStruct.size()-1; i++)
		{
			QString queryString = query.value(i).toString();
			DataClass::createElement(infoElement, xmlStruct[i+1], queryString);
			//���洢���̷��ؽ���ӹ���ӳ����ʽ���浽�ڴ�����ݽṹ
			if(i > 0)
				mapValue += query.value(i).toString() + "_";
		}
		root.appendChild(infoElement);
		memStruct.insert(mapKey,mapValue);
	}
	//��д��XML�ļ�

	DataClass::writeRoot2Xml(root, xmlFileName);
	return true;
}

void DataClass::databaseOPTest()
{
/*
	QSqlQuery query;
	QString sqlWords;

	//���뵽��Ʒ��Ϣ��
	for(int i=0; i<4000; i++)
	{
		int tmp_1 = qrand();
		int tmp_2 = qrand();
		int tmp_3 = qrand();
		int tmp_4 = qrand();
		sqlWords = "insert into ��Ʒ values('" + QString::number(tmp_1) + "','����Ʒ'," + QString::number(tmp_2) +",'��','����Ʒ1'," + QString::number(tmp_3) + "," + QString::number(tmp_4) + ")";
		query.exec(sqlWords);
		sqlWords = "insert into ��Ʒ values('" + QString::number(tmp_1+1) + "','������Ʒ'," + QString::number(tmp_2) +",'ƿ','������Ʒ2'," + QString::number(tmp_3) + "," + QString::number(tmp_4) + ")";
		query.exec(sqlWords);
		sqlWords = "insert into ��Ʒ values('" + QString::number(tmp_1+2) + "','�����Ʒ'," + QString::number(tmp_2) +",'��','�����Ʒ3'," + QString::number(tmp_3) + "," + QString::number(tmp_4) + ")";
		query.exec(sqlWords);
	}

	//���뵽��Ա��Ϣ��
	sqlWords = "insert into ��Ա values('0001','����','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0002','����','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0003','����','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0004','С��','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0005','С��','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0006','С��','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0007','����','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0008','�º�','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into ��Ա values('0009','С��','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);

	//�����棺 insert into ��� select ��Ʒ���,100 from ��Ʒ
	//���뵽Ա����Ϣ��
	sqlWords = "insert into Ա�� values('0000','" + DataClass::MD5("0000") + "','����', '','����Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0001','" + DataClass::MD5("0001") + "','����', '','����Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0002','" + DataClass::MD5("0002") + "','����', '','����Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0003','" + DataClass::MD5("0003") + "','����', '','��Ʒ����Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0004','" + DataClass::MD5("0004") + "','С��', '','��Ʒ����Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0005','" + DataClass::MD5("0005") + "','С��', '','������Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0006','" + DataClass::MD5("0006") + "','С��', '','������Ա')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0007','" + DataClass::MD5("0007") + "','����', '','���¹���')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0008','" + DataClass::MD5("0008") + "','����', '','���¹���')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0009','" + DataClass::MD5("0009") + "','����', '','�����ܹ�')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0010','" + DataClass::MD5("0010") + "','���', '','�����ܹ�')";
	query.exec(sqlWords);
	sqlWords = "insert into Ա�� values('0011','" + DataClass::MD5("0011") + "','����', '','�����ܹ�')";
	query.exec(sqlWords);

	//����Ȩ����Ϣ��
	sqlWords = "insert into Ȩ�� values('����Ա',1,1,1,1,1,1,1,1,1,1)";
	query.exec(sqlWords);
	sqlWords = "insert into Ȩ�� values('������Ա',0,1,0,0,0,0,1,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into Ȩ�� values('���¹���',0,0,0,0,1,1,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into Ȩ�� values('��Ʒ����Ա',1,0,0,0,0,0,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into Ȩ�� values('�����ܹ�',0,0,0,1,0,0,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into Ȩ�� values('����Ա',0,0,0,0,0,0,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into Ȩ�� values('�����ܹ�',0,0,0,1,0,0,0,0,1,1)";
	query.exec(sqlWords);

	//�����Żݹ�����Ϣ
	sqlWords = "insert into �Żݹ��� values('0001',300,500,'1',1,1)";
	query.exec(sqlWords);
	sqlWords = "insert into �Żݹ��� values('0002',500,700,'100',1,1)";
	query.exec(sqlWords);
	sqlWords = "insert into �Żݹ��� values('0003',700,900,'10000',1,1)";
	query.exec(sqlWords);

	//�洢���̵��ò���
	sqlWords = "call getAllAssociatorInfo_client_init();";
	query.exec(sqlWords);
	while(query.next())
	{
		QString context = query.value(0).toString() + query.value(1).toString() + query.value(2).toString() + query.value(3).toString();
		QMessageBox::information(NULL,"info",context);
	}
*/
}