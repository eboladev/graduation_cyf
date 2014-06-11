/********************************************************************************
** Form generated from reading UI file 'userLogin.ui'
**
** Created: Fri Feb 18 20:15:28 2011
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

class Ui_UserLoginClass
{
public:
    QLineEdit *userID;
    QPushButton *cancel;
    QLabel *label_2;
    QPushButton *login;
    QLabel *label_3;
    QLineEdit *passwd;
    QPushButton *datebaseSet;

    void setupUi(QDialog *UserLoginClass)
    {
        if (UserLoginClass->objectName().isEmpty())
            UserLoginClass->setObjectName(QString::fromUtf8("UserLoginClass"));
        UserLoginClass->resize(493, 322);
        UserLoginClass->setMinimumSize(QSize(493, 322));
        UserLoginClass->setMaximumSize(QSize(493, 322));
        UserLoginClass->setSizeIncrement(QSize(410, 290));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        UserLoginClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        UserLoginClass->setWindowIcon(icon);
        UserLoginClass->setAutoFillBackground(false);
        UserLoginClass->setStyleSheet(QString::fromUtf8(""));
        userID = new QLineEdit(UserLoginClass);
        userID->setObjectName(QString::fromUtf8("userID"));
        userID->setGeometry(QRect(150, 130, 261, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        userID->setFont(font);
        userID->setStyleSheet(QString::fromUtf8(""));
        cancel = new QPushButton(UserLoginClass);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(340, 260, 75, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        cancel->setFont(font1);
        cancel->setFocusPolicy(Qt::TabFocus);
        cancel->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(UserLoginClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 140, 60, 16));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));
        login = new QPushButton(UserLoginClass);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(80, 260, 75, 31));
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(UserLoginClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 200, 51, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));
        passwd = new QLineEdit(UserLoginClass);
        passwd->setObjectName(QString::fromUtf8("passwd"));
        passwd->setGeometry(QRect(150, 190, 261, 31));
        passwd->setFont(font);
        passwd->setStyleSheet(QString::fromUtf8(""));
        passwd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        passwd->setEchoMode(QLineEdit::Password);
        datebaseSet = new QPushButton(UserLoginClass);
        datebaseSet->setObjectName(QString::fromUtf8("datebaseSet"));
        datebaseSet->setGeometry(QRect(210, 260, 75, 31));
        datebaseSet->setFont(font1);
        datebaseSet->setFocusPolicy(Qt::TabFocus);
        datebaseSet->setStyleSheet(QString::fromUtf8(""));
        datebaseSet->setAutoDefault(true);
        QWidget::setTabOrder(userID, passwd);
        QWidget::setTabOrder(passwd, login);
        QWidget::setTabOrder(login, datebaseSet);
        QWidget::setTabOrder(datebaseSet, cancel);

        retranslateUi(UserLoginClass);

        QMetaObject::connectSlotsByName(UserLoginClass);
    } // setupUi

    void retranslateUi(QDialog *UserLoginClass)
    {
        UserLoginClass->setWindowTitle(QApplication::translate("UserLoginClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237 - \345\221\230\345\267\245\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("UserLoginClass", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserLoginClass", "\350\264\246  \345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("UserLoginClass", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserLoginClass", "\345\257\206  \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        datebaseSet->setText(QApplication::translate("UserLoginClass", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserLoginClass: public Ui_UserLoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
