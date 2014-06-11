//�ֿ�������

#ifndef DEPOT_H
#define DEPOT_H

#include <QSqlError>
#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "queryThread.h"
#include "ui_depot.h"

class Depot : public QDialog
{
	Q_OBJECT

public:
	Depot(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Depot();

private slots:
	//����QRadioButton����¼�  ʹ�������QLineEdit�ȿؼ���Ч
	void on_goodsID_search_depot_RBTN_toggled(bool checked);
	void on_goodsClass_search_depot_RBTN_toggled(bool checked);
	void on_goodsCount_search_depot_RBTN_toggled(bool checked);
	//�����ѯ��ť
	void on_search_search_depot_BTN_clicked();
	//����޸İ�ť
	void on_modify_modify_depot_BTN_clicked();

	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

private:
	// ��ѯ�߳�
	QueryThread queryThread;

	Ui::DepotClass ui;

	//��ʼ��һЩ�ؼ�����
	void widgetInit();
	
	//����ѯ���ݿ���
	bool checkExecSqlRes(const QSqlQuery* query, const QString& status);
};


#endif // MANAGEMENT_H
