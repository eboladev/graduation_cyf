//Ա���������

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QSqlError>
#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "queryThread.h"
#include "ui_employee.h"

class Employee : public QDialog
{
	Q_OBJECT

public:
	Employee(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Employee();

private slots:
	//�޸İ�ť����¼�
	void on_modify_modify_employee_BTN_clicked();
	//ɾ����ť����¼�
	void on_del_modify_employee_BTN_clicked();
	//���Ӱ�ť����¼�
	void on_add_modify_employee_BTN_clicked();
	//��ѯ��ť����¼�
	void on_search_search_employee_BTN_clicked();

	//QRadioButton״̬�ı��¼�
	void on_employeeID_search_employee_RBTN_toggled(bool checked);
	void on_employeeName_search_employee_RBTN_toggled(bool checked);

	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);
	

private:
	Ui::EmployeeClass ui;

	// ��ѯ�߳�
	QueryThread queryThread;

	//��ʼ���ؼ��������
	void widgetInit();
	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
};

#endif // MANAGEMENT_H
