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
		QMessageBox::information(NULL,"错误","请先设置连接数据库！");
		return ;
	}

	if(ui.userID->text() == "")
	{
		QMessageBox::information(NULL,"错误","请输入用户名！");
		return ;
	}

	if(ui.passwd->text() == "")
	{
		QMessageBox::information(NULL,"错误","请输入密码！");
		return ;
	}

	//查询数据库输入账号密码是否正确
	QSqlQuery query;
	QString sqlWords = QString("call userLoginValidate_mgmt_login('%1','%2');")
		.arg(ui.userID->text()).arg(DataClass::MD5(ui.passwd->text()));
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"错误","查询失败！");
		return ;
	}
	else
	{
		//返回查询结果，如果查询结果为1，则输入正确，否则错误
		int res = query.value(0).toInt();
		if(res ==1)
		{
			DataClass::currentEmployeeID = ui.userID->text();
			accept();
		}
		else
		{
			QMessageBox::information(NULL,"错误","账号或者密码错误！");
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