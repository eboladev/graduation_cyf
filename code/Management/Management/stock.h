//�����������

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
	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

	//QRadioButton״̬�ı��¼�
	void on_importID_search_stock_RBTN_toggled(bool checked);
	void on_importTime_search_stock_RBTN_toggled(bool checked);

	//�����ѯ��ť
	void on_search_search_stock_BTN_clicked();
	//���������ť
	void on_import_import_stock_BTN_clicked();

private:
	Ui::StockClass ui;
	// ��ѯ�߳�
	QueryThread queryThread;

	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//��ʼ���ؼ�����
	void widgetInit();
};

#endif // MANAGEMENT_H
