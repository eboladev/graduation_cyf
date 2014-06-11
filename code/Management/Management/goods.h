//商品管理界面

#ifndef GOODS_H
#define GOODS_H

#include <QSqlError>
#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "queryThread.h"
#include "ui_goods.h"

class Goods : public QDialog
{
	Q_OBJECT

public:
	Goods(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Goods();

private slots:
	//按钮点击事件
	void on_modify_modify_goods_BTN_clicked();
	void on_del_modify_goods_BTN_clicked();
	void on_add_modify_goods_BTN_clicked();

	//点击QRadioButton事件
	void on_goodsID_search_goods_RBTN_toggled(bool checked);
	void on_goodsClass_search_goods_RBTN_toggled(bool checked);

	//点击查询按钮
	void on_search_search_goods_BTN_clicked();

	//更新QTableWidget  参数是用来更新的值
	void updateTableWidget(QSqlQuery* query);
	//更新商品类别的下拉列表框
	void updateGoodsClassCB(QString& string);


private:
	// 查询线程
	QueryThread queryThread;
	Ui::GoodsClass ui;

	//检查查询数据库结果
	bool checkExecSqlRes(QSqlQuery* query, QString status);

	//初始化控件的一些属性
	void widgetInit();
};

#endif // MANAGEMENT_H
