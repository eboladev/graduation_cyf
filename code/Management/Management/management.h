//功能选择界面

#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QtGui/QMainWindow>
#include "ui_management.h"

class Management : public QMainWindow
{
	Q_OBJECT

public:
	Management(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Management();
	
private slots:
	//以下是各个功能按钮单击响应事件
	void on_depot_CLBTN_clicked();
	void on_present_CLBTN_clicked();
	void on_stock_CLBTN_clicked();
	void on_sell_CLBTN_clicked();
	void on_right_CLBTN_clicked();
	void on_specialOP_CLBTN_clicked();
	void on_employee_CLBTN_clicked();
	void on_goods_CLBTN_clicked();
	void on_associator_CLBTN_clicked();

private:
	Ui::ManagementClass ui;
};

#endif // MANAGEMENT_H
