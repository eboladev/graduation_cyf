//��Ա�������

#ifndef ASSOCIATOR_H
#define ASSOCIATOR_H

#include <QSqlQuery>
#include <QBitmap>
#include <QRegExp>
#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>

#include "queryThread.h"
#include "ui_associator.h"

class Associator : public QDialog
{
	Q_OBJECT

public:
	Associator(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Associator();

private slots:
	//�޸İ�ť����¼�
	void on_modify_modify_associator_BTN_clicked();
	//ɾ����ť����¼�
	void on_del_modify_associator_BTN_clicked();
	//���Ӱ�ť����¼�
	void on_add_modify_associator_BTN_clicked();
	//��ѯ��ť����¼�
	void on_search_search_associator_BTN_clicked();

	//QRadioButton״̬�ı��¼�
	void on_associatorID_search_associator_RBTN_toggled(bool checked);
	void on_associatorName_search_associator_RBTN_toggled(bool checked);

	//����QTableWidget  �������������µ�ֵ
	void updateTableWidget(QSqlQuery* query);

private:
	Ui::AssociatorClass ui;

	// ��ѯ�߳�
	QueryThread queryThread;

	//��ʼ��һЩ�ؼ�������
	void widgetInit();
	//����ѯ���ݿ���
	bool checkExecSqlRes(QSqlQuery* query, QString status);
};

#endif // MANAGEMENT_H
