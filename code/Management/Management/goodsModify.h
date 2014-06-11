//修改商品信息界面

#ifndef ASSOCIATORMODIFY_H
#define ASSOCIATORMODIFY_H

#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtGui/QDialog>
#include "dataClass.h"
#include "ui_goodsModify.h"

class GoodsModify : public QDialog
{
	Q_OBJECT

public:
	GoodsModify(QWidget *parent = 0, Qt::WFlags flags = 0);
	~GoodsModify();

	//设置修改的商品的默认属性
	void setModifyID(QString);
	void setModifyName(QString);
	void setModifyClass(QString);
	void setModifyPrice(QString);
	void setModifySpec(QString);
	void setModifyDiscount(QString);
	void setModifyCost(QString);
	void setModifyAssDiscount(QString);
	//设置时更新商品还是增加商品
	void updateDatabase(bool b);

private slots:
	void on_yes_modif_goods_CLBTN_clicked();

signals:
	void updateGoodsClassCB(QString& string);

private:
	//是更新数据库还是新建员工
	bool updateInfo;
	Ui::GoodsModifyClass ui;

	//初始化一些控件属性
	void widgetInit();
};

#endif // MANAGEMENT_H
