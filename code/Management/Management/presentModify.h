//赠送商品信息修改界面

#ifndef PRESENTMODIFY_H
#define PRESENTMODIFY_H

#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "dataClass.h"
#include "ui_presentModify.h"

class PresentModify : public QDialog
{
	Q_OBJECT

public:
	PresentModify(QWidget *parent = 0, Qt::WFlags flags = 0);
	~PresentModify();

	//设置初始化信息
	void setModifyID(QString);
	void setModifyPriceUp(QString);
	void setModifyPriceDown(QString);
	void setModifyPresentID(QString);
	void setModifyPresentCount(QString);

	void isUpdateDatabase(bool);

private slots:
	void on_yes_modify_associator_BTN_clicked();

private:
	Ui::PresentModifyClass ui;
	//是更新数据库还是插入数据库
	bool updateInfo;

	//初始化控件信息
	void widgetInit();
};

#endif // MANAGEMENT_H
