//优惠管理界面

#ifndef PRESENT_H
#define PRESENT_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_present.h"

class Present : public QDialog
{
	Q_OBJECT

public:
	Present(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Present();

private slots:
	//修改按钮点击事件
	void on_modify_modify_present_BTN_clicked();
	//删除按钮点击事件
	void on_del_modify_present_BTN_clicked();
	//增加按钮点击事件
	void on_add_modify_present_BTN_clicked();
	//查询按钮点击事件
	void on_search_search_present_RBTN_clicked();

	//QRadioButton状态改变事件
	void on_presentID_search_present_RBTN_toggled(bool checked);
	void on_presentMoney_search_depot_RBTN_toggled(bool checked);

	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

private:
	Ui::PresentClass ui;
	// 查询线程
	QueryThread queryThread;

	//初始化控件属性
	void widgetInit();
	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
};

#endif // MANAGEMENT_H
