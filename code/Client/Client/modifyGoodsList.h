#ifndef MODIFYGOODSLIST_H
#define MODIFYGOODSLIST_H

#include <QMessageBox>
#include <QtGui/QMainWindow>

#include "dataClass.h"
#include "ui_modifyGoodsList.h"

class ModifyGoodsList : public QDialog
{
	Q_OBJECT

public:
	ModifyGoodsList(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ModifyGoodsList();

private slots:
	//点击确定按钮，响应事件
	void on_ok_BTN_clicked();
	void on_cancel_BTN_clicked();

private:
	Ui::ModifyGoodsListClass ui;

};

#endif 
