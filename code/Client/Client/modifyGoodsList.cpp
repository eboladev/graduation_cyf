#include "modifyGoodsList.h"

ModifyGoodsList::ModifyGoodsList(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags)
{
	ui.setupUi(this);

	ui.employeeID_LE->setFocus();
}

ModifyGoodsList::~ModifyGoodsList()
{
}

void ModifyGoodsList::on_ok_BTN_clicked()
{
	//验证输入的用户密码是否正确
	QString userID = ui.employeeID_LE->text();
	QString userPasswd = DataClass::MD5(ui.employeePasswd_LE->text());
	if(!(DataClass::memStruct_employee.contains(userID)))
	{
		QMessageBox::information(NULL,"错误","此ID不存在！");
		return ;
	}
	QString passwd = DataClass::memStruct_employee.value(userID);
	if(userPasswd != passwd.mid(0,32))
	{
		QMessageBox::information(NULL,"错误","密码输入错误！");
		return ;
	}
	//提取员工的信息字段
	QString right = DataClass::memStruct_employee.value(userID);
	//找到员工的员工类别字段
	int tmp_1 = right.indexOf("_");
	tmp_1 = right.indexOf("_",tmp_1+1);
	int tmp_2 = right.indexOf("_",tmp_1+1);
	right = right.mid(tmp_1+1,tmp_2-tmp_1-1);
	//检查此员工所属员工类别是否有修改购物清单的权限
	if(!(DataClass::memStruct_right.contains(right)))
	{
		QMessageBox::information(NULL,"错误","此员工没有记录相关权限信息！");
		return ;
	}
	if(DataClass::memStruct_right.value(right) == "1_")
	{
		QString sqlWords = QString("call insertOP('%1','修改购物单','%2','')").arg(ui.employeeID_LE->text())
			.arg(DataClass::getDateTime("yyyy-MM-dd hh:mm:ss"));
		QDomDocument doc;
		DataClass::loadXml(doc, "./WONConfig/断网SQL语句.xml");
		DataClass::createElement(doc.documentElement(),"SQL",sqlWords);
		DataClass::writeRoot2Xml(doc, "./WONConfig/断网SQL语句.xml");

		accept();
	}
	else
	{
		QMessageBox::information(NULL,"错误","此员工没有修改购物清单权限！");
		return ;
	}
}

void ModifyGoodsList::on_cancel_BTN_clicked()
{
	this->close();
}