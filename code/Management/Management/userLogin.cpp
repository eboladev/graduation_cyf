#include "userLogin.h"
#include "databaseSet.h"

UserLogin::UserLogin(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags),db(NULL)
{
	ui.setupUi(this);
}

UserLogin::~UserLogin()
{

}

void UserLogin::on_login_clicked()
{
// 	accept();
// 	DataClass::currentEmployeeID = "0000";
// 	return ;
	if(!db)
	{
		QMessageBox::information(NULL,"����","���������������ݿ⣡");
		return ;
	}

	if(ui.userID->text() == "")
	{
		QMessageBox::information(NULL,"����","�������û�����");
		return ;
	}

	if(ui.passwd->text() == "")
	{
		QMessageBox::information(NULL,"����","���������룡");
		return ;
	}

	//��ѯ���ݿ������˺������Ƿ���ȷ
	QSqlQuery query;
	QString sqlWords = QString("call userLoginValidate_mgmt_login('%1','%2');")
		.arg(ui.userID->text()).arg(DataClass::MD5(ui.passwd->text()));
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"����","��ѯʧ�ܣ�");
		return ;
	}
	else
	{
		//���ز�ѯ����������ѯ���Ϊ1����������ȷ���������
		int res = query.value(0).toInt();
		if(res ==1)
		{
			DataClass::currentEmployeeID = ui.userID->text();
			accept();
		}
		else
		{
			QMessageBox::information(NULL,"����","�˺Ż����������");
			return ;
		}
	}
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