#include "databaseSet.h"

DatabaseSet::DatabaseSet(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	db = NULL;
}

DatabaseSet::~DatabaseSet()
{
}

void DatabaseSet::on_cancel_clicked()
{
	this->close();
}

void DatabaseSet::on_connect2database_clicked()
{
	//连接数据库字段
	//我的电脑上连接数据库的时候要断网。
	db = &(QSqlDatabase::addDatabase("QMYSQL"));
	db->setHostName(ui.SQLHostName_LE->text());
	db->setDatabaseName(ui.SQLDBName_LE->text());
	db->setUserName(ui.SQLLoginUser_LE->text());
	db->setPassword(ui.SQLLoginPasswd_LE->text());
	if(db->open())
	{
		QMessageBox::information(this,"成功","数据库连接成功！");
		accept();
	}
	else
	{
		QMessageBox::information(this,"失败","数据库连接失败：" + db->lastError().text());
		db = NULL;
	}
}

QSqlDatabase* DatabaseSet::getDatabaseConnect()
{
	return db;
}