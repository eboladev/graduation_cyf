//会员信息修改界面

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

	//初始化数据
	void setModifyID(QString);
	void setModifyName(QString);
	void setModifyTime(QString);
	void setModifyRemark(QString);

	void isUpdateDatabase(bool);

private slots:
	void on_yes_modify_associator_BTN_clicked();

private:
	Ui::AssociatorModifyClass ui;
	//是更新数据库还是插入数据库
	bool updateInfo;

	//初始化控件信息
	void widgetInit();
};

#endif // MANAGEMENT_H
