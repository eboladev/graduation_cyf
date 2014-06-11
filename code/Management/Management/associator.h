//会员管理界面

#ifndef ASSOCIATOR_H
#define ASSOCIATOR_H

#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>

#include "queryThread.h"
#include "ui_associator.h"

class Associator : public QDialog
{
	Q_OBJECT

public:
	Associator(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Associator();

private slots:
	//修改按钮点击事件
	void on_modify_modify_associator_BTN_clicked();
	//删除按钮点击事件
	void on_del_modify_associator_BTN_clicked();
	//增加按钮点击事件
	void on_add_modify_associator_BTN_clicked();
	//查询按钮点击事件
	void on_search_search_associator_BTN_clicked();

	//QRadioButton状态改变事件
	void on_associatorID_search_associator_RBTN_toggled(bool checked);
	void on_associatorName_search_associator_RBTN_toggled(bool checked);

	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

private:
	Ui::AssociatorClass ui;

	// 查询线程
	QueryThread queryThread;

	//初始化一些控件的属性
	void widgetInit();
	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
};

#endif // MANAGEMENT_H
