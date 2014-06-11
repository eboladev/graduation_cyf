#include "employeeModify.h"

EmployeeModify::EmployeeModify(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags),updateInfo(true)
{
	ui.setupUi(this);

	widgetInit();
}

EmployeeModify::~EmployeeModify()
{

}

void EmployeeModify::widgetInit()
{
	//初始化下拉列表框
	QSqlQuery query;
	QString sqlWords = "call getEmployeesClassList_mgmt_depot();";
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(NULL,"错误","获取员工类别集合失败！");
		return ;
	}
	while (query.next())
		ui.employeeClass_modify_employee_CB->addItem(query.value(0).toString());
}

void EmployeeModify::on_yes_modify_employee_CLBTN_clicked()
{
	if(ui.employeeName_modify_employee_LE->text() == "" || ui.employeePasswd_modify_employee_LE->text() == "" || ui.employeeClass_modify_employee_CB->currentText() == "")
	{
		QMessageBox::information(NULL,"错误","请填写完整信息！");
		return ;
	}
	QSqlQuery query;
	QString sqlWords;
	if(!updateInfo)
	{
		sqlWords = QString("call addEmployee_mgmt_employee('%1','%2','%3','%4','%5');")
			.arg(ui.employeeID_modify_employee_LE->text())
			.arg(DataClass::MD5(ui.employeePasswd_modify_employee_LE->text()))
			.arg(ui.employeeName_modify_employee_LE->text())
			.arg(ui.remark_modify_employee_TE->toPlainText())
			.arg(ui.employeeClass_modify_employee_CB->currentText());
	}
	else
	{
		sqlWords = QString("call setEmployee_mgmt_employee('%1','%2','%3','%4','%5');")
			.arg(ui.employeeID_modify_employee_LE->text())
			.arg(DataClass::MD5(ui.employeePasswd_modify_employee_LE->text()))
			.arg(ui.employeeName_modify_employee_LE->text())
			.arg(ui.remark_modify_employee_TE->toPlainText())
			.arg(ui.employeeClass_modify_employee_CB->currentText());
	}
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(NULL,"错误","修改数据库出错！");
		return ;
	}
	else
	{
		QMessageBox::information(NULL,"提示","修改成功！");
		this->close();
	}
}

void EmployeeModify::isUpdateDatabase(bool b)
{
	updateInfo = b;
}
void EmployeeModify::setModifyID(QString modifyID)
{
	ui.employeeID_modify_employee_LE->setText(modifyID);
}

void EmployeeModify::setModifyName(QString mofiyName)
{
	ui.employeeName_modify_employee_LE->setText(mofiyName);
}
void EmployeeModify::setModifyClass(QString modifyClass)
{
	int index = ui.employeeClass_modify_employee_CB->findText(modifyClass);
	ui.employeeClass_modify_employee_CB->setCurrentIndex(index);
}
void EmployeeModify::setModifyRemark(QString modifyRemark)
{
	ui.remark_modify_employee_TE->setText(modifyRemark);
}