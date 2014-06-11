//查看销售情况界面

#ifndef SELL_H
#define SELL_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_sell.h"

class Sell : public QDialog
{
	Q_OBJECT

public:
	Sell(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Sell();

private slots:
	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);

	//销售清单查询按钮
	void on_search_search_sell_BTN_clicked();
	//销售统计查询按钮
	void on_stat_stat_sell_BTN_clicked();

	//QCheckBox状态改变事件
	//其中，一下不能同时选中
	//"按商品编号查询"  and  "按商品类别查询"
	//"按商品编号统计"  and  "按商品类别统计"
	//"所有销售情况查询" and 其他所有查询
	void on_goodsID_search_sell_CKB_clicked();
	void on_goodsID_search_sell_CKB_toggled(bool checked);
	void on_employeeID_search_sell_CKB_clicked();
	void on_employeeID_search_sell_CKB_toggled(bool checked);
	void on_sellTime_search_sell_CKB_toggled(bool checked);
	void on_sellAll_search_sell_CKB_clicked();

	void on_goodsID_stat_sell_CKB_clicked();
	void on_goodsID_stat_sell_CKB_toggled(bool checked);
	void on_employeeID_stat_sell_CKB_clicked();
	void on_employeeID_stat_sell_CKB_toggled(bool checked);
	void on_sellTime_stat_sell_CKB_toggled(bool checked);
	void on_sellAll_stat_sell_CKB_clicked();

private:
	Ui::SellClass ui;
	// 查询线程
	QueryThread queryThread;

	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//初始化一些控件属性
	void widgetInit();
};

#endif // MANAGEMENT_H
