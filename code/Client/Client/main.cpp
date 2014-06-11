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

	//保存数据库连接
	Client mainUI;
	UserLogin loginUI;

	//禁用右上角关闭按钮
//	loginUI.setWindowFlags(Qt::FramelessWindowHint);

	QSqlDatabase *db = NULL;

	DataClass::initStaticData();
	bool res = DataClass::loadDataFromXml();

	if(!res)
	{
		QMessageBox::information(NULL,"严重错误","本地数据文件严重错误，不能进行断网交易！");
		loginUI.setMustUpdataXml(true);
		//不能断网，必须先联网一次
	}
	if(loginUI.exec() == QDialog::Accepted)
	{
		db = loginUI.getDatabaseConnect();
		//可以加个进度条，显示正在读取数据，请稍后。
		if(!db)
		{
			//db为空，说明准备采用断网交易。
		}
		else
		{
			QMessageBox::information(NULL,"提示","点击确定后，程序将从服务器同步本地数据与服务器数据，请稍后！");
			//db不为空，说明准备采用联网交易。
			res = DataClass::updataDatabaseToXml() & DataClass::updataDatabaseFromXml();
		}
		if(!res)
		{
			QMessageBox::information(NULL,"严重错误","程序严重错误，请根据错误提示修复错误之后再打开程序！");
			return 0;
		}

		mainUI.show();
		return a.exec();
	}

	return 0;
}