//�޸���Ʒ��Ϣ����

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

	//�����޸ĵ���Ʒ��Ĭ������
	void setModifyID(QString);
	void setModifyName(QString);
	void setModifyClass(QString);
	void setModifyPrice(QString);
	void setModifySpec(QString);
	void setModifyDiscount(QString);
	void setModifyCost(QString);
	void setModifyAssDiscount(QString);
	//����ʱ������Ʒ����������Ʒ
	void updateDatabase(bool b);

private slots:
	void on_yes_modif_goods_CLBTN_clicked();

signals:
	void updateGoodsClassCB(QString& string);

private:
	//�Ǹ������ݿ⻹���½�Ա��
	bool updateInfo;
	Ui::GoodsModifyClass ui;

	//��ʼ��һЩ�ؼ�����
	void widgetInit();
};

#endif // MANAGEMENT_H
