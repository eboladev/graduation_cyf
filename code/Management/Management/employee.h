//员工管理界面

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QSqlError>
#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "queryThread.h"
#include "ui_employee.h"

class Employee : public QDialog
{
	Q_OBJECT

public:
	Employee(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Employee();

private slots:
	//修改按钮点击事件
	void on_modify_modify_employee_BTN_clicked();
	//删除按钮点击事件
	void on_del_modify_employee_BTN_clicked();
	//增加按钮点击事件
	void on_add_modify_employee_BTN_clicked();
	//查询按钮点击事件
	void on_search_search_employee_BTN_clicked();

	//QRadioButton状态改变事件
	void on_employeeID_search_employee_RBTN_toggled(bool checked);
	void on_employeeName_search_employee_RBTN_toggled(bool checked);

	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);
	

private:
	Ui::EmployeeClass ui;

	// 查询线程
	QueryThread queryThread;

	//初始化控件相关属性
	void widgetInit();
	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
};

#endif // MANAGEMENT_H
