#include "client.h"
#include "dataClass.h"
#include "userLogin.h"

#include <QBitmap>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QtGui/QApplication>

#include <QFile>

int main(int argc, char *argv[])
{
	QTextCodec *codec = QTextCodec::codecForName("System");  
	QTextCodec::setCodecForLocale(codec); 
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);

	QApplication a(argc, argv);
	a.setFont(QFont("simsun", 9, QFont::Normal));

	//�������ݿ�����
	Client mainUI;
	UserLogin loginUI;

	//�������Ͻǹرհ�ť
//	loginUI.setWindowFlags(Qt::FramelessWindowHint);

	QSqlDatabase *db = NULL;

	DataClass::initStaticData();
	bool res = DataClass::loadDataFromXml();

	if(!res)
	{
		QMessageBox::information(NULL,"���ش���","���������ļ����ش��󣬲��ܽ��ж������ף�");
		loginUI.setMustUpdataXml(true);
		//���ܶ���������������һ��
	}
	if(loginUI.exec() == QDialog::Accepted)
	{
		db = loginUI.getDatabaseConnect();
		//���ԼӸ�����������ʾ���ڶ�ȡ���ݣ����Ժ�
		if(!db)
		{
			//dbΪ�գ�˵��׼�����ö������ס�
		}
		else
		{
			QMessageBox::information(NULL,"��ʾ","���ȷ���󣬳��򽫴ӷ�����ͬ��������������������ݣ����Ժ�");
			//db��Ϊ�գ�˵��׼�������������ס�
			res = DataClass::updataDatabaseToXml() & DataClass::updataDatabaseFromXml();
		}
		if(!res)
		{
			QMessageBox::information(NULL,"���ش���","�������ش�������ݴ�����ʾ�޸�����֮���ٴ򿪳���");
			return 0;
		}

		mainUI.show();
		return a.exec();
	}

	return 0;
}