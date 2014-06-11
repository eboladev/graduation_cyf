//������Ʒ��Ϣ�޸Ľ���

#ifndef PRESENTMODIFY_H
#define PRESENTMODIFY_H

#include <QMessageBox>
#include <QtGui/QDialog>
#include <QSqlError>
#include <QSqlQuery>

#include "dataClass.h"
#include "ui_presentModify.h"

class PresentModify : public QDialog
{
	Q_OBJECT

public:
	PresentModify(QWidget *parent = 0, Qt::WFlags flags = 0);
	~PresentModify();

	//���ó�ʼ����Ϣ
	void setModifyID(QString);
	void setModifyPriceUp(QString);
	void setModifyPriceDown(QString);
	void setModifyPresentID(QString);
	void setModifyPresentCount(QString);

	void isUpdateDatabase(bool);

private slots:
	void on_yes_modify_associator_BTN_clicked();

private:
	Ui::PresentModifyClass ui;
	//�Ǹ������ݿ⻹�ǲ������ݿ�
	bool updateInfo;

	//��ʼ���ؼ���Ϣ
	void widgetInit();
};

#endif // MANAGEMENT_H
