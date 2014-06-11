//权限管理界面

#ifndef RIGHT_H
#define RIGHT_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_right.h"

class Right : public QDialog
{
	Q_OBJECT

public:
	Right(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Right();

private slots:
	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

	//QRadioButton状态改变事件
	void on_employeeClass_search_right_RBTN_toggled(bool checked);

	//点击查询按钮
	void on_search_search_right_BTN_clicked();
	//点击修改按钮
	void on_modify_modify_right_BTN_clicked();

private:
	Ui::RightClass ui;
	// 查询线程
	QueryThread queryThread;

	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//初始化控件属性
	void widgetInit();
};

#endif // MANAGEMENT_H
