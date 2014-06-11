//��Ա��Ϣ�޸Ľ���

#ifndef ASSOCIATORMODIFY_H
#define ASSOCIATORMODIFY_H

#include <QSqlQuery>
#include <QSqlError>
#include <QBitmap>
#include <QRegExp>
#include <QDateTime>
#include <QMessageBox>
#include <QtGui/QDialog>
#include "ui_associatorModify.h"

class AssociatorModify : public QDialog
{
	Q_OBJECT

public:
	AssociatorModify(QWidget *parent = 0, Qt::WFlags flags = 0);
	~AssociatorModify();

	//��ʼ������
	void setModifyID(QString);
	void setModifyName(QString);
	void setModifyTime(QString);
	void setModifyRemark(QString);

	void isUpdateDatabase(bool);

private slots:
	void on_yes_modify_associator_BTN_clicked();

private:
	Ui::AssociatorModifyClass ui;
	//�Ǹ������ݿ⻹�ǲ������ݿ�
	bool updateInfo;

	//��ʼ���ؼ���Ϣ
	void widgetInit();
};

#endif // MANAGEMENT_H
