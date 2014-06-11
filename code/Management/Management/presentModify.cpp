#include "presentModify.h"

PresentModify::PresentModify(QWidget *parent, Qt::WFlags flags)
: QDialog(parent, flags),updateInfo(true)
{
	ui.setupUi(this);

	widgetInit();
}

PresentModify::~PresentModify()
{

}

void PresentModify::widgetInit()
{
	//��������ʽ���Ƹ���QLineEdit�������ʽ
	ui.presentGoodsCount_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.presentMoneyEnd_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
	ui.presentMoneyStart_modify_present_LE->setValidator(new QRegExpValidator(DataClass::regExpDecimalOnly,this));
}

void PresentModify::on_yes_modify_associator_BTN_clicked()
{
	if(ui.presentMoneyStart_modify_present_LE->text() == "" || ui.presentMoneyEnd_modify_present_LE->text() == "" ||
	   ui.presentGoodsID_modify_present_LE->text() == "" || ui.presentGoodsCount_modify_present_LE->text() == "")
	{
		QMessageBox::information(NULL,"����","����д������Ϣ��");
		return ;
	}

	if(ui.presentMoneyStart_modify_present_LE->text().toInt() > ui.presentMoneyEnd_modify_present_LE->text().toInt())
	{
		QMessageBox::information(this,"����","�۸������������");
		return ;
	}

	QSqlQuery query;
	QString sqlWords = QString("call getGoodsListByID_mgmt_goods('%1');").arg(ui.presentGoodsID_modify_present_LE->text());
	query.exec(sqlWords);
	if(!query.next())
	{
		QMessageBox::information(NULL,"����","û�д���Ʒ������ϸ���������Ʒ��ţ�");
		return ;
	}

	if(!updateInfo)
	{
		//��������۸������Ƿ��Ѿ�����
		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text());
		query.exec(sqlWords);
		if(query.next())
		{
			QMessageBox::information(this,"����",QString("��Ч���Żݹ���:\"%1\"�ļ۸�����:\"%2--%3\"�����˴˼۸�����")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}
		//��������۸������Ƿ��Ѿ�����
		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text());
		query.exec(sqlWords);
		if(query.next())
		{
			QMessageBox::information(this,"����",QString("��Ч���Żݹ���:\"%1\"�ļ۸�����:\"%2--%3\"�����˴˼۸�����")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}

		sqlWords = QString("call addPresent_mgmt_present('%1',%2,%3,'%4',%5);")
			.arg(ui.presentID_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentGoodsID_modify_present_LE->text())
			.arg(ui.presentGoodsCount_modify_present_LE->text());
	}
	else
	{
		//��������۸������Ƿ��Ѿ�����
		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text());
		query.exec(sqlWords);
		while(query.next())
		{
			if(query.value(0).toString() == ui.presentID_modify_present_LE->text())
				continue ;
			QMessageBox::information(this,"����",QString("�Żݹ���:\"%1\"�ļ۸�����:\"%2--%3\"�����˴˼۸�����")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}

		sqlWords = QString("call getPresentListByPrice_mgmt_present(%1,%2);")
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text());
		query.exec(sqlWords);
		while(query.next())
		{
			if(query.value(0).toString() == ui.presentID_modify_present_LE->text())
				continue ;
			QMessageBox::information(this,"����",QString("�Żݹ���:\"%1\"�ļ۸�����:\"%2--%3\"�����˴˼۸�����")
				.arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString()));
			return ;
		}

		sqlWords = QString("call setPresent_mgmt_present('%1',%2,%3,'%4',%5);")
			.arg(ui.presentID_modify_present_LE->text())
			.arg(ui.presentMoneyEnd_modify_present_LE->text())
			.arg(ui.presentMoneyStart_modify_present_LE->text())
			.arg(ui.presentGoodsID_modify_present_LE->text())
			.arg(ui.presentGoodsCount_modify_present_LE->text());
	}
	query.exec(sqlWords);
	if(query.lastError().type() != QSqlError::NoError)
	{
		QMessageBox::information(NULL,"����","�޸����ݿ����" + query.lastError().text());
		return ;
	}
	else
	{
		QMessageBox::information(NULL,"��ʾ","�޸ĳɹ���");
		this->close();
	}
}

void PresentModify::setModifyID(QString modifyID)
{
	ui.presentID_modify_present_LE->setText(modifyID);
}

void PresentModify::setModifyPriceUp(QString modifyPriceUp)
{
	ui.presentMoneyEnd_modify_present_LE->setText(modifyPriceUp);
}

void PresentModify::setModifyPriceDown(QString modifyPriceDown)
{
	ui.presentMoneyStart_modify_present_LE->setText(modifyPriceDown);
}

void PresentModify::setModifyPresentID(QString modifyPresentID)
{
	ui.presentGoodsID_modify_present_LE->setText(modifyPresentID);
}

void PresentModify::setModifyPresentCount(QString modifyPresentCount)
{
	ui.presentGoodsCount_modify_present_LE->setText(modifyPresentCount);
}

void PresentModify::isUpdateDatabase(bool b)
{
	updateInfo = b;
}