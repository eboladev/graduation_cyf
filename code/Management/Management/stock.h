//进货管理界面

#ifndef STOCK_H
#define STOCK_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_stock.h"

class Stock : public QDialog
{
	Q_OBJECT

public:
	Stock(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Stock();

private slots:
	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

	//QRadioButton状态改变事件
	void on_importID_search_stock_RBTN_toggled(bool checked);
	void on_importTime_search_stock_RBTN_toggled(bool checked);

	//点击查询按钮
	void on_search_search_stock_BTN_clicked();
	//点击进货按钮
	void on_import_import_stock_BTN_clicked();

private:
	Ui::StockClass ui;
	// 查询线程
	QueryThread queryThread;

	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//初始化控件属性
	void widgetInit();
};

#endif // MANAGEMENT_H
