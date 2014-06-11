//��������鿴����

#ifndef SPECIALOP_H
#define SPECIALOP_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_specialOP.h"

class SpecialOP : public QDialog
{
	Q_OBJECT

public:
	SpecialOP(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SpecialOP();

private slots:
	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

	//QRadioButton״̬�ı��¼�
	void on_employeeID_search_op_CKB_clicked();
	void on_employeeID_search_op_CKB_toggled(bool checked);
	void on_opTime_search_op_CKB_toggled(bool checked);
	void on_opClass_search_op_CKB_clicked();
	void on_opClass_search_op_CKB_toggled(bool checked);
	void on_opAll_search_op_CKB_clicked();

	//�����ѯ��ť
	void on_search_search_op_BTN_clicked();

private:
	Ui::SpecialOPClass ui;
	// ��ѯ�߳�
	QueryThread queryThread;

	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//��ʼ���ؼ�����
	void widgetInit();
};

#endif // MANAGEMENT_H
