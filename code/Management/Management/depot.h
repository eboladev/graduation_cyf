//仓库管理界面

#ifndef DEPOT_H
#define DEPOT_H

#include <QSqlError>
#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "queryThread.h"
#include "ui_depot.h"

class Depot : public QDialog
{
	Q_OBJECT

public:
	Depot(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Depot();

private slots:
	//几个QRadioButton点击事件  使相关联的QLineEdit等控件有效
	void on_goodsID_search_depot_RBTN_toggled(bool checked);
	void on_goodsClass_search_depot_RBTN_toggled(bool checked);
	void on_goodsCount_search_depot_RBTN_toggled(bool checked);
	//点击查询按钮
	void on_search_search_depot_BTN_clicked();
	//点击修改按钮
	void on_modify_modify_depot_BTN_clicked();

	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

private:
	// 查询线程
	QueryThread queryThread;

	Ui::DepotClass ui;

	//初始化一些控件属性
	void widgetInit();
	
	//检查查询数据库结果
	bool checkExecSqlRes(const QSqlQuery* query, const QString& status);
};


#endif // MANAGEMENT_H
