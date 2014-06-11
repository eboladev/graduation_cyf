//�Żݹ������

#ifndef PRESENT_H
#define PRESENT_H

#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "queryThread.h"
#include "ui_present.h"

class Present : public QDialog
{
	Q_OBJECT

public:
	Present(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Present();

private slots:
	//�޸İ�ť����¼�
	void on_modify_modify_present_BTN_clicked();
	//ɾ����ť����¼�
	void on_del_modify_present_BTN_clicked();
	//���Ӱ�ť����¼�
	void on_add_modify_present_BTN_clicked();
	//��ѯ��ť����¼�
	void on_search_search_present_RBTN_clicked();

	//QRadioButton״̬�ı��¼�
	void on_presentID_search_present_RBTN_toggled(bool checked);
	void on_presentMoney_search_depot_RBTN_toggled(bool checked);

	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

private:
	Ui::PresentClass ui;
	// ��ѯ�߳�
	QueryThread queryThread;

	//��ʼ���ؼ�����
	void widgetInit();
	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
};

#endif // MANAGEMENT_H
