/********************************************************************************
** Form generated from reading UI file 'userLogin.ui'
**
** Created: Wed Jan 26 11:34:49 2011
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

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
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *withNet;
    QRadioButton *withoutNet;
    QPushButton *datebaseSet;
    QLabel *label_4;

    void setupUi(QDialog *UserLoginClass)
    {
        if (UserLoginClass->objectName().isEmpty())
            UserLoginClass->setObjectName(QString::fromUtf8("UserLoginClass"));
        UserLoginClass->resize(493, 353);
        UserLoginClass->setMinimumSize(QSize(493, 353));
        UserLoginClass->setMaximumSize(QSize(493, 353));
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
        icon.addFile(QString::fromUtf8(":/Client/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
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
        cancel->setGeometry(QRect(340, 300, 75, 31));
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
        login->setGeometry(QRect(80, 300, 75, 31));
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(UserLoginClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 190, 51, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));
        passwd = new QLineEdit(UserLoginClass);
        passwd->setObjectName(QString::fromUtf8("passwd"));
        passwd->setGeometry(QRect(150, 180, 261, 31));
        passwd->setFont(font);
        passwd->setStyleSheet(QString::fromUtf8(""));
        passwd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        passwd->setEchoMode(QLineEdit::Password);
        groupBox = new QGroupBox(UserLoginClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 230, 261, 41));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 3, -1, 3);
        withNet = new QRadioButton(groupBox);
        withNet->setObjectName(QString::fromUtf8("withNet"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        withNet->setFont(font2);
        withNet->setStyleSheet(QString::fromUtf8(""));
        withNet->setChecked(false);

        horizontalLayout->addWidget(withNet);

        withoutNet = new QRadioButton(groupBox);
        withoutNet->setObjectName(QString::fromUtf8("withoutNet"));
        withoutNet->setFont(font2);
        withoutNet->setStyleSheet(QString::fromUtf8(""));
        withoutNet->setChecked(true);

        horizontalLayout->addWidget(withoutNet);

        datebaseSet = new QPushButton(UserLoginClass);
        datebaseSet->setObjectName(QString::fromUtf8("datebaseSet"));
        datebaseSet->setGeometry(QRect(210, 300, 75, 31));
        datebaseSet->setFont(font1);
        datebaseSet->setFocusPolicy(Qt::TabFocus);
        datebaseSet->setStyleSheet(QString::fromUtf8(""));
        datebaseSet->setAutoDefault(true);
        label_4 = new QLabel(UserLoginClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 240, 51, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8(""));
        QWidget::setTabOrder(userID, passwd);
        QWidget::setTabOrder(passwd, withNet);
        QWidget::setTabOrder(withNet, withoutNet);
        QWidget::setTabOrder(withoutNet, login);

        retranslateUi(UserLoginClass);

        QMetaObject::connectSlotsByName(UserLoginClass);
    } // setupUi

    void retranslateUi(QDialog *UserLoginClass)
    {
        UserLoginClass->setWindowTitle(QApplication::translate("UserLoginClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237 - \346\224\266\351\223\266\345\221\230\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("UserLoginClass", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserLoginClass", "\350\264\246  \345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("UserLoginClass", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserLoginClass", "\345\257\206  \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        withNet->setText(QApplication::translate("UserLoginClass", "\350\201\224\347\275\221\344\272\244\346\230\223", 0, QApplication::UnicodeUTF8));
        withoutNet->setText(QApplication::translate("UserLoginClass", "\346\226\255\347\275\221\344\272\244\346\230\223", 0, QApplication::UnicodeUTF8));
        datebaseSet->setText(QApplication::translate("UserLoginClass", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UserLoginClass", "\347\275\221  \347\273\234\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserLoginClass: public Ui_UserLoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
