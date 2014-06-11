//员工信息修改界面

#ifndef ASSOCIATORMODIFY_H
#define ASSOCIATORMODIFY_H

#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "dataClass.h"
#include "ui_employeeModify.h"

class EmployeeModify : public QDialog
{
	Q_OBJECT

public:
	EmployeeModify(QWidget *parent = 0, Qt::WFlags flags = 0);
	~EmployeeModify();

	//初始化控件的内容
	void setModifyID(QString);
	void setModifyName(QString);
	void setModifyClass(QString);
	void setModifyRemark(QString);
	
	//更新数据库还是新建员工
	void isUpdateDatabase(bool b);

private slots:
	void on_yes_modify_employee_CLBTN_clicked();

private:
	//是更新数据库还是新建员工
	bool updateInfo;
	Ui::EmployeeModifyClass ui;

	//初始化一些控件属性
	void widgetInit();
};

#endif // MANAGEMENT_H
