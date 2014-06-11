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
	//���ñ���ͼƬ
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
		QMessageBox::information(NULL,"����","��ID�����ڣ�");
		return ;
	}
	QString passwd = DataClass::memStruct_employee.value(userID);
	if(userPasswd != passwd.mid(0,32))
	{
		QMessageBox::information(NULL,"����","�����������");
		return ;
	}

	//�ж����û���������ݿ⣬ѯ���Ƿ��������
	if(ui.withoutNet->isChecked() && mustUpdataXml)
	{
		QMessageBox::information(NULL,"����","����XML�ļ����󣬲���ʹ�ö������ף�");
		return ;
	}
	if(!db && ui.withNet->isChecked())
	{
		QMessageBox::information(NULL,"����","���ݿ���δ�������ӡ���ʹ���������ף������������ݿ����ӣ�");
		return ;
	}
	else if(ui.withoutNet->isChecked())
	{
		//�����������5��xml�ļ������ܶ�������
		if((QFile::exists("./WONConfig/Ա��.xml") & QFile::exists("./WONConfig/Ա��.xml") &
			QFile::exists("./WONConfig/Ա��.xml") & QFile::exists("./WONConfig/Ա��.xml") & 
			QFile::exists("./WONConfig/Ա��.xml")) == false)
		{
			QMessageBox::information(NULL,"����","����xml�ļ����󣬲��ܽ��ж������ף������������ݿ��ȡ���ݣ�");
			return ;
		}
	}

	mustUpdataXml = false;
	DataClass::currentDealWay = ui.withoutNet->isChecked() ? "WON" : "WN";
	DataClass::currentEmployeeID = ui.userID->text();
	QString sqlWords = QString("call insertOP('%1','��½','%2','')").arg(ui.userID->text())
		.arg(DataClass::getDateTime("yyyy-MM-dd hh:mm:ss"));

	QDomDocument doc;
	DataClass::loadXml(doc, "./WONConfig/����SQL���.xml");
	QDomElement root = doc.documentElement();
	DataClass::createElement(root,"SQL",sqlWords);
	DataClass::writeRoot2Xml(root, "./WONConfig/����SQL���.xml");
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
		QMessageBox mb("ȷ��", "���ݿ������ӣ�ȷ���������ӣ�",
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