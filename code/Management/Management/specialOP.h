//特殊操作查看界面

#ifndef SPECIALOP_H
#define SPECIALOP_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_specialOP.h"

class SpecialOP : public QDialog
{
	Q_OBJECT

public:
	SpecialOP(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SpecialOP();

private slots:
	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

	//QRadioButton状态改变事件
	void on_employeeID_search_op_CKB_clicked();
	void on_employeeID_search_op_CKB_toggled(bool checked);
	void on_opTime_search_op_CKB_toggled(bool checked);
	void on_opClass_search_op_CKB_clicked();
	void on_opClass_search_op_CKB_toggled(bool checked);
	void on_opAll_search_op_CKB_clicked();

	//点击查询按钮
	void on_search_search_op_BTN_clicked();

private:
	Ui::SpecialOPClass ui;
	// 查询线程
	QueryThread queryThread;

	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//初始化控件属性
	void widgetInit();
};

#endif // MANAGEMENT_H
