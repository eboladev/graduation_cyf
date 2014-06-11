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
	//�������ݿ��ֶ�
	//�ҵĵ������������ݿ��ʱ��Ҫ������
	db = &(QSqlDatabase::addDatabase("QMYSQL"));
	db->setHostName(ui.SQLHostName_LE->text());
	db->setDatabaseName(ui.SQLDBName_LE->text());
	db->setUserName(ui.SQLLoginUser_LE->text());
	db->setPassword(ui.SQLLoginPasswd_LE->text());
	if(db->open())
	{
		QMessageBox::information(this,"�ɹ�","���ݿ����ӳɹ���");
		accept();
	}
	else
	{
		QMessageBox::information(this,"ʧ��","���ݿ�����ʧ�ܣ�" + db->lastError().text());
		db = NULL;
	}
}

QSqlDatabase* DatabaseSet::getDatabaseConnect()
{
	return db;
}