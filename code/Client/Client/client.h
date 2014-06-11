#ifndef CLIENT_H
#define CLIENT_H

#include <QList>
#include <QBitmap>
#include <QRegExp>
#include <QKeyEvent>
#include <QDateTime>
#include <QMessageBox>

#include <QDomElement>
#include <QDomDocument>
#include <QtGui/QMainWindow>

#include "dataClass.h"
#include "ui_client.h"

class Client : public QMainWindow
{
	Q_OBJECT

public:
	Client(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Client();

private slots:
	//����޸Ĺ����嵥��ť
	//��ȡ�����֤�����á�ɾ����
	void on_modifyList_BTN_clicked();
	//������ƷID�������밴ť
	void on_insertList_BTN_clicked();
	//���ɾ����ť
	//��TableWidget����ѡ�е���ɾ��
	void on_delGoods_BTN_clicked();
	//������˰�ť
	//��Ҫ������������ݿ���£����������½�sql���д��xml��
	void on_calMoney_CLBTN_clicked();
	//Ӧ�ҽ����źű仯
	void on_receiveMoney_LE_textChanged();
	//�������嵥�б�ı�ʱ���ı���
	void on_associatorID_LE_textChanged();

private:
	Ui::ClientClass ui;

	//��ʼ��һЩ�ؼ�������
	void widgetInit();

protected:
	//���ذ��°�ť�¼�
	//��Ҫ���ڽ���Enter��Return��
	void keyPressEvent(QKeyEvent *);

	//���غ���
	//�û��ı��С֮�������趨����ͼƬ
	void resizeEvent(QResizeEvent*);
};

#endif 
