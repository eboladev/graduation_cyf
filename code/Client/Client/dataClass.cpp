#include "dataClass.h"

//首先初始化静态数据成员
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
	//调用qt的库函数来MD5加密
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
	//初始化静态数据成员
	xmlStruct_employee.append("员工");
	xmlStruct_employee.append("员工工号");
	xmlStruct_employee.append("密码");
	xmlStruct_employee.append("姓名");
	xmlStruct_employee.append("员工类别");

	xmlStruct_associator.append("会员");
	xmlStruct_associator.append("会员卡号");
	xmlStruct_associator.append("姓名");

	xmlStruct_goods.append("商品");
	xmlStruct_goods.append("商品编号");
	xmlStruct_goods.append("销售价格");
	xmlStruct_goods.append("商品规格");
	xmlStruct_goods.append("商品名称");
	xmlStruct_goods.append("成本");
	xmlStruct_goods.append("折扣");
	xmlStruct_goods.append("会员折扣");

	xmlStruct_right.append("权限");
	xmlStruct_right.append("员工类别");
	xmlStruct_right.append("修改交易清单");

	xmlStruct_present.append("优惠管理");
	xmlStruct_present.append("优惠编号");
	xmlStruct_present.append("价格下限");
	xmlStruct_present.append("价格上限");
	xmlStruct_present.append("赠送商品编号");
	xmlStruct_present.append("赠送数量");
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
		QMessageBox::information(NULL,"错误","无法打开xml文件: " + xmlFileName);
		return false;
	}
	if(!doc.setContent(&xmlLoadFile,false))
	{
		QMessageBox::information(NULL,"错误","无法绑定QDomDocument到QFile");
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
		QMessageBox::information(NULL,"错误","无法打开xml文件: " + xmlFileName);
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
	//从xml中读取sql语句并执行，以此将上次的断网交易更新到数据库
	QDomDocument doc;
	if(!(loadXml(doc, "./WONConfig/断网SQL语句.xml")))
	{
		QDomElement root = doc.createElement("断网SQL语句");
		writeRoot2Xml(root,"./WONConfig/断网SQL语句.xml");
		return true;
	}

	QDomElement root = doc.documentElement();
	if(root.tagName() != "断网SQL语句")
	{
		QMessageBox::information(NULL,"错误","./WONConfig/断网SQL语句.xml 文件格式不正确！");
		return false;
	}
	QDomElement aElement = root.firstChildElement("SQL");
	QSqlQuery query;
	QString sqlWords;
	while(!aElement.isNull())
	{
		//读取每个sql语句并执行
		sqlWords = aElement.text();
		query.exec(sqlWords);
		aElement = aElement.nextSiblingElement("SQL");
	}

	//全部读取之后，再清空离线操作xml文件
	QDomDocument newDoc;
	QDomElement newRoot = newDoc.createElement("断网SQL语句");
	writeRoot2Xml(newRoot, "./WONConfig/断网SQL语句.xml");

	return true;
}


bool DataClass::loadDataFromXml()
{
	bool res_1 = loadDataFromXmlPrivate(xmlStruct_employee, memStruct_employee, "./WONConfig/员工.xml");
	bool res_2 = loadDataFromXmlPrivate(xmlStruct_associator, memStruct_associator, "./WONConfig/会员.xml");
	bool res_3 = loadDataFromXmlPrivate(xmlStruct_goods, memStruct_goods, "./WONConfig/商品.xml");
	bool res_4 = loadDataFromXmlPrivate(xmlStruct_present, memStruct_present, "./WONConfig/优惠管理.xml");
	bool res_5 = loadDataFromXmlPrivate(xmlStruct_right, memStruct_right, "./WONConfig/权限.xml");

	return (res_1 & res_2 & res_3 & res_4 & res_5);
}


bool DataClass::loadDataFromXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName)
{
	//创建XML格式
	QDomDocument doc;
	//调用函数，传入引用参数
	if(!(loadXml(doc, xmlFileName)))
		return false;

	QDomElement root = doc.documentElement();
	if(root.tagName() != xmlStruct[0])
	{
		QMessageBox::information(NULL,"错误",xmlFileName + "文件格式不正确！");
		return false;
	}
	QDomElement aElement = root.firstChildElement(xmlStruct[0] + "信息");
	//读取XML文件，将信息加工成映射，并存入内存的数据结构中
	while(!aElement.isNull())
	{
		QString mapKey, mapValue;
		mapKey = aElement.firstChildElement(xmlStruct[1]).text();
		for(int i=1; i<xmlStruct.size() - 1; i++)
		{
			mapValue += aElement.firstChildElement(xmlStruct[i+1]).text() + "_";
		}
		memStruct.insert(mapKey, mapValue);
		aElement = aElement.nextSiblingElement(xmlStruct[0] + "信息");
	}
	return true;
}

bool DataClass::updataDatabaseToXml()
{
	//因为开始已经读取过一次xml文件到内存的数据结构中
	//所以更新数据库中心数据的时候要先清空
	memStruct_right.clear();
	memStruct_present.clear();
	memStruct_goods.clear();
	memStruct_employee.clear();
	memStruct_associator.clear();
	bool res_1 = updataDatabaseToXmlPrivate(xmlStruct_employee, memStruct_employee, "./WONConfig/员工.xml", "call getAllEmployeeInfo_client_init();");
	bool res_2 = updataDatabaseToXmlPrivate(xmlStruct_associator, memStruct_associator, "./WONConfig/会员.xml", "call getAllAssociatorInfo_client_init();");
	bool res_3 = updataDatabaseToXmlPrivate(xmlStruct_goods, memStruct_goods, "./WONConfig/商品.xml", "call getAllGoodsInfo_client_init();");
	bool res_4 = updataDatabaseToXmlPrivate(xmlStruct_present, memStruct_present, "./WONConfig/优惠管理.xml", "call getAllPresentInfo_client_init();");
	bool res_5 = updataDatabaseToXmlPrivate(xmlStruct_right, memStruct_right, "./WONConfig/权限.xml", "call getAllRightInfo_client_init();");
	
	return (res_1 & res_2 & res_3 & res_4 & res_5);
}


bool DataClass::updataDatabaseToXmlPrivate(QVector<QString>& xmlStruct, QMap<QString, QString>& memStruct, QString xmlFileName, QString databaseProcessString)
{
	//创建XML格式
	QDomDocument doc;
	QDomElement root = doc.createElement(xmlStruct[0]);

	//执行数据库存储过程
	QSqlQuery query;
	QString sqlWords = databaseProcessString;
	query.exec(sqlWords);
	while(query.next())
	{
		//将存储过程返回结果加工成映射形式保存到xml
		QDomElement addElement;
		QDomText addText;
		QDomElement infoElement = doc.createElement(xmlStruct[0] + "信息");
		QString mapKey = query.value(0).toString();
		QString mapValue;
		for(int i=0; i<xmlStruct.size()-1; i++)
		{
			QString queryString = query.value(i).toString();
			DataClass::createElement(infoElement, xmlStruct[i+1], queryString);
			//将存储过程返回结果加工成映射形式保存到内存的数据结构
			if(i > 0)
				mapValue += query.value(i).toString() + "_";
		}
		root.appendChild(infoElement);
		memStruct.insert(mapKey,mapValue);
	}
	//重写此XML文件

	DataClass::writeRoot2Xml(root, xmlFileName);
	return true;
}

void DataClass::databaseOPTest()
{
/*
	QSqlQuery query;
	QString sqlWords;

	//插入到商品信息表
	for(int i=0; i<4000; i++)
	{
		int tmp_1 = qrand();
		int tmp_2 = qrand();
		int tmp_3 = qrand();
		int tmp_4 = qrand();
		sqlWords = "insert into 商品 values('" + QString::number(tmp_1) + "','日用品'," + QString::number(tmp_2) +",'盒','日用品1'," + QString::number(tmp_3) + "," + QString::number(tmp_4) + ")";
		query.exec(sqlWords);
		sqlWords = "insert into 商品 values('" + QString::number(tmp_1+1) + "','生活用品'," + QString::number(tmp_2) +",'瓶','生活用品2'," + QString::number(tmp_3) + "," + QString::number(tmp_4) + ")";
		query.exec(sqlWords);
		sqlWords = "insert into 商品 values('" + QString::number(tmp_1+2) + "','数码产品'," + QString::number(tmp_2) +",'箱','数码产品3'," + QString::number(tmp_3) + "," + QString::number(tmp_4) + ")";
		query.exec(sqlWords);
	}

	//插入到会员信息表
	sqlWords = "insert into 会员 values('0001','张三','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0002','李四','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0003','王五','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0004','小明','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0005','小红','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0006','小军','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0007','李明','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0008','陈红','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);
	sqlWords = "insert into 会员 values('0009','小红','2011-01-13 00:00:00', '')";
	query.exec(sqlWords);

	//插入库存： insert into 库存 select 商品编号,100 from 商品
	//插入到员工信息表
	sqlWords = "insert into 员工 values('0000','" + DataClass::MD5("0000") + "','王三', '','管理员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0001','" + DataClass::MD5("0001") + "','张三', '','销售员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0002','" + DataClass::MD5("0002") + "','李四', '','销售员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0003','" + DataClass::MD5("0003") + "','王五', '','商品管理员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0004','" + DataClass::MD5("0004") + "','小明', '','商品管理员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0005','" + DataClass::MD5("0005") + "','小军', '','库存管理员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0006','" + DataClass::MD5("0006") + "','小红', '','库存管理员')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0007','" + DataClass::MD5("0007") + "','李明', '','人事管理')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0008','" + DataClass::MD5("0008") + "','陈四', '','人事管理')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0009','" + DataClass::MD5("0009") + "','王二', '','收银总管')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0010','" + DataClass::MD5("0010") + "','李洪', '','销售总管')";
	query.exec(sqlWords);
	sqlWords = "insert into 员工 values('0011','" + DataClass::MD5("0011") + "','王明', '','销售总管')";
	query.exec(sqlWords);

	//插入权限信息表
	sqlWords = "insert into 权限 values('管理员',1,1,1,1,1,1,1,1,1,1)";
	query.exec(sqlWords);
	sqlWords = "insert into 权限 values('库存管理员',0,1,0,0,0,0,1,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into 权限 values('人事管理',0,0,0,0,1,1,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into 权限 values('商品管理员',1,0,0,0,0,0,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into 权限 values('收银总管',0,0,0,1,0,0,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into 权限 values('销售员',0,0,0,0,0,0,0,0,0,0)";
	query.exec(sqlWords);
	sqlWords = "insert into 权限 values('销售总管',0,0,0,1,0,0,0,0,1,1)";
	query.exec(sqlWords);

	//插入优惠管理信息
	sqlWords = "insert into 优惠管理 values('0001',300,500,'1',1,1)";
	query.exec(sqlWords);
	sqlWords = "insert into 优惠管理 values('0002',500,700,'100',1,1)";
	query.exec(sqlWords);
	sqlWords = "insert into 优惠管理 values('0003',700,900,'10000',1,1)";
	query.exec(sqlWords);

	//存储过程调用测试
	sqlWords = "call getAllAssociatorInfo_client_init();";
	query.exec(sqlWords);
	while(query.next())
	{
		QString context = query.value(0).toString() + query.value(1).toString() + query.value(2).toString() + query.value(3).toString();
		QMessageBox::information(NULL,"info",context);
	}
*/
}