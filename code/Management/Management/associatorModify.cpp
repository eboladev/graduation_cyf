#include "associatorModify.h"

AssociatorModify::AssociatorModify(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);
	widgetInit();
}

AssociatorModify::~AssociatorModify()
{

}

void AssociatorModify::widgetInit()
{
	ui.regTime_modify_associator_DTE->setDateTime(QDateTime::currentDateTime());
}

void AssociatorModify::on_yes_modify_associator_BTN_clicked()
{
	if(ui.associatorName_modify_associator_LE->text() == "" || ui.regTime_modify_associator_DTE->text() == "")
	{
		QMessageBox::information(NULL,"错误","请填写完整信息！");
		return ;
	}
	QSqlQuery query;
	QString sqlWords;
	if(!updateInfo)
	{
		sqlWords = QString("call addAssociator_mgmt_associator('%1','%2','%3','%4');")
			.arg(ui.associatorID_modify_associator_LE->text())
			.arg(ui.associatorName_modify_associator_LE->text())
			.arg(ui.regTime_modify_associator_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss"))
			.arg(ui.remark_modify_associator_TE->toPlainText());
	}
	else
	{
		sqlWords = QString("call setAssociator_mgmt_associator('%1','%2','%3','%4');")
			.arg(ui.associatorID_modify_associator_LE->text())
			.arg(ui.associatorName_modify_associator_LE->text())
			.arg(ui.regTime_modify_associator_DTE->dateTime().toString("yyyy-MM-dd hh:mm:ss"))
			.arg(ui.remark_modify_associator_TE->toPlainText());
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

void AssociatorModify::isUpdateDatabase(bool b)
{
	updateInfo = b;
}
void AssociatorModify::setModifyID(QString modifyID)
{
	ui.associatorID_modify_associator_LE->setText(modifyID);
}
void AssociatorModify::setModifyName(QString modifyName)
{
	ui.associatorName_modify_associator_LE->setText(modifyName);
}
void AssociatorModify::setModifyTime(QString modifyTime)
{
	ui.regTime_modify_associator_DTE->setDateTime(QDateTime::fromString(modifyTime.replace("T"," "), "yyyy-MM-dd hh:mm:ss"));
}
void AssociatorModify::setModifyRemark(QString modifyRemark)
{
	ui.remark_modify_associator_TE->setText(modifyRemark);
}