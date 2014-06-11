#include "management.h"
#include "userLogin.h"

#include <QBitmap>
#include <QTextCodec>
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QTextCodec *codec = QTextCodec::codecForName("System");  
	QTextCodec::setCodecForLocale(codec); 
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);

	QApplication a(argc, argv);
	a.setFont(QFont("simsun", 9, QFont::Normal));

 	Management mainUI;
	UserLogin loginUI;

	//…Ë÷√±≥æ∞Õº∆¨
	QPixmap pixmap_login("./Resources/login backgroud image.jpg");
	QPalette palette_login;
	palette_login.setBrush(loginUI.backgroundRole(), QBrush(pixmap_login));
	loginUI.setPalette(palette_login);
	loginUI.setMask(pixmap_login.mask());
	loginUI.setAutoFillBackground(true);

	if(loginUI.exec() == QDialog::Accepted)
	{
 		mainUI.show();
		return a.exec();
	}

	return 0;
}
