//Ȩ�޹������

#ifndef RIGHT_H
#define RIGHT_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_right.h"

class Right : public QDialog
{
	Q_OBJECT

public:
	Right(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Right();

private slots:
	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

	//QRadioButton״̬�ı��¼�
	void on_employeeClass_search_right_RBTN_toggled(bool checked);

	//�����ѯ��ť
	void on_search_search_right_BTN_clicked();
	//����޸İ�ť
	void on_modify_modify_right_BTN_clicked();

private:
	Ui::RightClass ui;
	// ��ѯ�߳�
	QueryThread queryThread;

	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
	//��ʼ���ؼ�����
	void widgetInit();
};

#endif // MANAGEMENT_H
