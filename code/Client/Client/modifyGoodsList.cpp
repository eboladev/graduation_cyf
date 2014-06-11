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
	//��֤������û������Ƿ���ȷ
	QString userID = ui.employeeID_LE->text();
	QString userPasswd = DataClass::MD5(ui.employeePasswd_LE->text());
	if(!(DataClass::memStruct_employee.contains(userID)))
	{
		QMessageBox::information(NULL,"����","��ID�����ڣ�");
		return ;
	}
	QString passwd = DataClass::memStruct_employee.value(userID);
	if(userPasswd != passwd.mid(0,32))
	{
		QMessageBox::information(NULL,"����","�����������");
		return ;
	}
	//��ȡԱ������Ϣ�ֶ�
	QString right = DataClass::memStruct_employee.value(userID);
	//�ҵ�Ա����Ա������ֶ�
	int tmp_1 = right.indexOf("_");
	tmp_1 = right.indexOf("_",tmp_1+1);
	int tmp_2 = right.indexOf("_",tmp_1+1);
	right = right.mid(tmp_1+1,tmp_2-tmp_1-1);
	//����Ա������Ա������Ƿ����޸Ĺ����嵥��Ȩ��
	if(!(DataClass::memStruct_right.contains(right)))
	{
		QMessageBox::information(NULL,"����","��Ա��û�м�¼���Ȩ����Ϣ��");
		return ;
	}
	if(DataClass::memStruct_right.value(right) == "1_")
	{
		QString sqlWords = QString("call insertOP('%1','�޸Ĺ��ﵥ','%2','')").arg(ui.employeeID_LE->text())
			.arg(DataClass::getDateTime("yyyy-MM-dd hh:mm:ss"));
		QDomDocument doc;
		DataClass::loadXml(doc, "./WONConfig/����SQL���.xml");
		DataClass::createElement(doc.documentElement(),"SQL",sqlWords);
		DataClass::writeRoot2Xml(doc, "./WONConfig/����SQL���.xml");

		accept();
	}
	else
	{
		QMessageBox::information(NULL,"����","��Ա��û���޸Ĺ����嵥Ȩ�ޣ�");
		return ;
	}
}

void ModifyGoodsList::on_cancel_BTN_clicked()
{
	this->close();
}