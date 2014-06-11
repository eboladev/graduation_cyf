/********************************************************************************
** Form generated from reading UI file 'userLogin.ui'
**
** Created: Fri Dec 3 01:07:53 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userLoginClass
{
public:
    QLabel *label;
    QLineEdit *useID;
    QPushButton *cancel;
    QLabel *label_2;
    QPushButton *login;
    QLabel *label_3;
    QLineEdit *usePasswd;

    void setupUi(QDialog *userLoginClass)
    {
        if (userLoginClass->objectName().isEmpty())
            userLoginClass->setObjectName(QString::fromUtf8("userLoginClass"));
        userLoginClass->resize(410, 290);
        userLoginClass->setMinimumSize(QSize(410, 290));
        userLoginClass->setSizeIncrement(QSize(410, 290));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        userLoginClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        userLoginClass->setWindowIcon(icon);
        label = new QLabel(userLoginClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 291, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        useID = new QLineEdit(userLoginClass);
        useID->setObjectName(QString::fromUtf8("useID"));
        useID->setGeometry(QRect(130, 130, 201, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        useID->setFont(font1);
        cancel = new QPushButton(userLoginClass);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(220, 230, 75, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(12);
        cancel->setFont(font2);
        cancel->setFocusPolicy(Qt::NoFocus);
        label_2 = new QLabel(userLoginClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 130, 60, 16));
        label_2->setFont(font2);
        login = new QPushButton(userLoginClass);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(100, 230, 75, 23));
        login->setFont(font2);
        label_3 = new QLabel(userLoginClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 61, 16));
        label_3->setFont(font2);
        usePasswd = new QLineEdit(userLoginClass);
        usePasswd->setObjectName(QString::fromUtf8("usePasswd"));
        usePasswd->setGeometry(QRect(130, 170, 201, 20));
        usePasswd->setFont(font1);

        retranslateUi(userLoginClass);

        QMetaObject::connectSlotsByName(userLoginClass);
    } // setupUi

    void retranslateUi(QDialog *userLoginClass)
    {
        userLoginClass->setWindowTitle(QApplication::translate("userLoginClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\263\273\347\273\237 - \346\224\266\351\223\266\345\221\230\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("userLoginClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("userLoginClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("userLoginClass", "\350\264\246  \345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("userLoginClass", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("userLoginClass", "\345\257\206  \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class userLoginClass: public Ui_userLoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
