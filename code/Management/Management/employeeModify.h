//Ա����Ϣ�޸Ľ���

#ifndef ASSOCIATORMODIFY_H
#define ASSOCIATORMODIFY_H

#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtGui/QDialog>

#include "dataClass.h"
#include "ui_employeeModify.h"

class EmployeeModify : public QDialog
{
	Q_OBJECT

public:
	EmployeeModify(QWidget *parent = 0, Qt::WFlags flags = 0);
	~EmployeeModify();

	//��ʼ���ؼ�������
	void setModifyID(QString);
	void setModifyName(QString);
	void setModifyClass(QString);
	void setModifyRemark(QString);
	
	//�������ݿ⻹���½�Ա��
	void isUpdateDatabase(bool b);

private slots:
	void on_yes_modify_employee_CLBTN_clicked();

private:
	//�Ǹ������ݿ⻹���½�Ա��
	bool updateInfo;
	Ui::EmployeeModifyClass ui;

	//��ʼ��һЩ�ؼ�����
	void widgetInit();
};

#endif // MANAGEMENT_H
