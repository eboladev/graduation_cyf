//�鿴�����������

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
	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

	//�����嵥��ѯ��ť
	void on_search_search_sell_BTN_clicked();
	//����ͳ�Ʋ�ѯ��ť
	void on_stat_stat_sell_BTN_clicked();

	//QCheckBox״̬�ı��¼�
	//���У�һ�²���ͬʱѡ��
	//"����Ʒ��Ų�ѯ"  and  "����Ʒ����ѯ"
	//"����Ʒ���ͳ��"  and  "����Ʒ���ͳ��"
	//"�������������ѯ" and �������в�ѯ
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
	// ��ѯ�߳�
	QueryThread queryThread;

	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//��ʼ��һЩ�ؼ�����
	void widgetInit();
};

#endif // MANAGEMENT_H
