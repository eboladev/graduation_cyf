#ifndef DATABASESET_H
#define DATABASESET_H

#include <QtSql>
#include <QRegExp>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtGui/QMainWindow>
#include "ui_databaseSet.h"

class DatabaseSet : public QDialog
{
	Q_OBJECT

public:
	DatabaseSet(QWidget *parent = 0, Qt::WFlags flags = 0);
	~DatabaseSet();

	QSqlDatabase* getDatabaseConnect();

private slots:
	//����������ݿⰴť
	void on_connect2database_clicked();
	void on_cancel_clicked();

private:
	Ui::DatabaseSetClass ui;

	//�������ݿ����ӵ�ָ��
	QSqlDatabase* db;
};

#endif 
