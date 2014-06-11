#ifndef CLIENT_H
#define CLIENT_H

#include <QList>
#include <QBitmap>
#include <QRegExp>
#include <QKeyEvent>
#include <QDateTime>
#include <QMessageBox>

#include <QDomElement>
#include <QDomDocument>
#include <QtGui/QMainWindow>

#include "dataClass.h"
#include "ui_client.h"

class Client : public QMainWindow
{
	Q_OBJECT

public:
	Client(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Client();

private slots:
	//点击修改购物清单按钮
	//获取身份验证后，启用“删除”
	void on_modifyList_BTN_clicked();
	//输入商品ID后点击输入按钮
	void on_insertList_BTN_clicked();
	//点击删除按钮
	//将TableWidget里面选中的项删除
	void on_delGoods_BTN_clicked();
	//点击结账按钮
	//主要处理促销、数据库更新（断网交易下将sql语句写入xml）
	void on_calMoney_CLBTN_clicked();
	//应找金额的信号变化
	void on_receiveMoney_LE_textChanged();
	//当购物清单列表改变时，改变金额
	void on_associatorID_LE_textChanged();

private:
	Ui::ClientClass ui;

	//初始化一些控件的属性
	void widgetInit();

protected:
	//重载按下按钮事件
	//主要用于接收Enter、Return键
	void keyPressEvent(QKeyEvent *);

	//重载函数
	//用户改变大小之后，重新设定背景图片
	void resizeEvent(QResizeEvent*);
};

#endif 
