#ifndef USERLOGIN_H
#define USERLOGIN_H

#include "dataClass.h"
#include "ui_userLogin.h"

#include <QIODevice>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtGui/QDialog>

class UserLogin : public QDialog
{
	Q_OBJECT

public:
	UserLogin(QWidget *parent = 0, Qt::WFlags flags = 0);
	~UserLogin();

private slots:
	//各个按钮对于的响应事件
	void on_login_clicked();
	void on_cancel_clicked();
	void on_datebaseSet_clicked();

private:
	Ui::UserLoginClass ui;

	QSqlDatabase* db;
};

#endif 
