//��Ʒ�������

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
	//��ť����¼�
	void on_modify_modify_goods_BTN_clicked();
	void on_del_modify_goods_BTN_clicked();
	void on_add_modify_goods_BTN_clicked();

	//���QRadioButton�¼�
	void on_goodsID_search_goods_RBTN_toggled(bool checked);
	void on_goodsClass_search_goods_RBTN_toggled(bool checked);

	//�����ѯ��ť
	void on_search_search_goods_BTN_clicked();

	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);
	//������Ʒ���������б��
	void updateGoodsClassCB(QString& string);


private:
	// ��ѯ�߳�
	QueryThread queryThread;
	Ui::GoodsClass ui;

	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);

	//��ʼ���ؼ���һЩ����
	void widgetInit();
};

#endif // MANAGEMENT_H
