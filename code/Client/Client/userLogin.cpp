#include "userLogin.h"
#include "databaseSet.h"

UserLogin::UserLogin(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags),db(NULL),mustUpdataXml(false)
{
	ui.setupUi(this);

	widgetInit();
}

UserLogin::~UserLogin()
{

}

void UserLogin::widgetInit()
{
	//设置背景图片
	QPixmap pixmap_login("./Resources/login backgroud image.jpg");
	QPalette palette_login;
	palette_login.setBrush(this->backgroundRole(), QBrush(pixmap_login));
	this->setPalette(palette_login);
	this->setMask(pixmap_login.mask());
	this->setAutoFillBackground(true);
}

void UserLogin::setMustUpdataXml(bool pra)
{
	mustUpdataXml = pra;
}

void UserLogin::on_login_clicked()
{
	QString userID = ui.userID->text();
	QString userPasswd = DataClass::MD5(ui.passwd->text());
	if(!(DataClass::memStruct_employee.contains(userID)))
	{
		QMessageBox::information(NULL,"错误","此ID不存在！");
		return ;
	}
	QString passwd = DataClass::memStruct_employee.value(userID);
	if(userPasswd != passwd.mid(0,32))
	{
		QMessageBox::information(NULL,"错误","密码输入错误！");
		return ;
	}

	//判断如果没有连接数据库，询问是否断网销售
	if(ui.withoutNet->isChecked() && mustUpdataXml)
	{
		QMessageBox::information(NULL,"错误","本地XML文件错误，不能使用断网交易！");
		return ;
	}
	if(!db && ui.withNet->isChecked())
	{
		QMessageBox::information(NULL,"错误","数据库尚未设置连接。若使用联网交易，请先设置数据库连接！");
		return ;
	}
	else if(ui.withoutNet->isChecked())
	{
		//如果不存在那5个xml文件，则不能断网交易
		if((QFile::exists("./WONConfig/员工.xml") & QFile::exists("./WONConfig/员工.xml") &
			QFile::exists("./WONConfig/员工.xml") & QFile::exists("./WONConfig/员工.xml") & 
			QFile::exists("./WONConfig/员工.xml")) == false)
		{
			QMessageBox::information(NULL,"错误","本地xml文件错误，不能进行断网交易，请先连接数据库获取数据！");
			return ;
		}
	}

	mustUpdataXml = false;
	DataClass::currentDealWay = ui.withoutNet->isChecked() ? "WON" : "WN";
	DataClass::currentEmployeeID = ui.userID->text();
	QString sqlWords = QString("call insertOP('%1','登陆','%2','')").arg(ui.userID->text())
		.arg(DataClass::getDateTime("yyyy-MM-dd hh:mm:ss"));

	QDomDocument doc;
	DataClass::loadXml(doc, "./WONConfig/断网SQL语句.xml");
	QDomElement root = doc.documentElement();
	DataClass::createElement(root,"SQL",sqlWords);
	DataClass::writeRoot2Xml(root, "./WONConfig/断网SQL语句.xml");
	accept();
}
void UserLogin::on_cancel_clicked()
{
	this->close();
}

void UserLogin::on_datebaseSet_clicked()
{
	if(db)
	{
		QMessageBox mb("确认", "数据库已连接，确定重新连接？",
			QMessageBox::Question,
			QMessageBox::Yes   |   QMessageBox::Default,
			QMessageBox::No     |   QMessageBox::Escape,
			QMessageBox::NoButton);

		if(mb.exec() == QMessageBox::No)   
			return;

		QSqlDatabase::removeDatabase("supermarket");
		db = NULL;
	}
	DatabaseSet dbs;
	if(dbs.exec() == QDialog::Accepted)
	{
		db = dbs.getDatabaseConnect();
	}
}

QSqlDatabase* UserLogin::getDatabaseConnect()
{
	return db;
}