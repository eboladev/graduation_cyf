/********************************************************************************
** Form generated from reading UI file 'modifyGoodsList.ui'
**
** Created: Wed Jan 26 12:03:01 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYGOODSLIST_H
#define UI_MODIFYGOODSLIST_H

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

class Ui_ModifyGoodsListClass
{
public:
    QLabel *label;
    QPushButton *ok_BTN;
    QPushButton *cancel_BTN;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *employeePasswd_LE;
    QLabel *label_2;
    QLineEdit *employeeID_LE;

    void setupUi(QDialog *ModifyGoodsListClass)
    {
        if (ModifyGoodsListClass->objectName().isEmpty())
            ModifyGoodsListClass->setObjectName(QString::fromUtf8("ModifyGoodsListClass"));
        ModifyGoodsListClass->resize(426, 309);
        ModifyGoodsListClass->setMinimumSize(QSize(388, 290));
        ModifyGoodsListClass->setMaximumSize(QSize(3880, 2900));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ModifyGoodsListClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ModifyGoodsListClass->setWindowIcon(icon);
        label = new QLabel(ModifyGoodsListClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 431, 91));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Client/Resources/right backgroud image.jpg);"));
        ok_BTN = new QPushButton(ModifyGoodsListClass);
        ok_BTN->setObjectName(QString::fromUtf8("ok_BTN"));
        ok_BTN->setGeometry(QRect(100, 240, 75, 31));
        QFont font1;
        font1.setPointSize(12);
        ok_BTN->setFont(font1);
        cancel_BTN = new QPushButton(ModifyGoodsListClass);
        cancel_BTN->setObjectName(QString::fromUtf8("cancel_BTN"));
        cancel_BTN->setGeometry(QRect(240, 240, 75, 31));
        cancel_BTN->setFont(font1);
        label_4 = new QLabel(ModifyGoodsListClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 290, 301, 16));
        label_3 = new QLabel(ModifyGoodsListClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(64, 189, 80, 21));
        label_3->setFont(font1);
        employeePasswd_LE = new QLineEdit(ModifyGoodsListClass);
        employeePasswd_LE->setObjectName(QString::fromUtf8("employeePasswd_LE"));
        employeePasswd_LE->setGeometry(QRect(150, 180, 181, 31));
        employeePasswd_LE->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(ModifyGoodsListClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(64, 140, 80, 21));
        label_2->setFont(font1);
        employeeID_LE = new QLineEdit(ModifyGoodsListClass);
        employeeID_LE->setObjectName(QString::fromUtf8("employeeID_LE"));
        employeeID_LE->setGeometry(QRect(150, 130, 181, 31));
        QWidget::setTabOrder(employeeID_LE, employeePasswd_LE);
        QWidget::setTabOrder(employeePasswd_LE, ok_BTN);
        QWidget::setTabOrder(ok_BTN, cancel_BTN);

        retranslateUi(ModifyGoodsListClass);

        QMetaObject::connectSlotsByName(ModifyGoodsListClass);
    } // setupUi

    void retranslateUi(QDialog *ModifyGoodsListClass)
    {
        ModifyGoodsListClass->setWindowTitle(QApplication::translate("ModifyGoodsListClass", "\344\277\256\346\224\271\350\264\255\347\211\251\346\270\205\345\215\225\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        ok_BTN->setText(QApplication::translate("ModifyGoodsListClass", "\351\252\214\350\257\201", 0, QApplication::UnicodeUTF8));
        cancel_BTN->setText(QApplication::translate("ModifyGoodsListClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ModifyGoodsListClass", "\350\257\267\350\276\223\345\205\245\345\205\267\346\234\211\344\277\256\346\224\271\350\264\255\347\211\251\346\270\205\345\215\225\346\235\203\351\231\220\347\232\204\345\221\230\345\267\245\345\267\245\345\217\267\345\222\214\345\257\206\347\240\201\344\273\245\351\252\214\350\257\201\357\274\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModifyGoodsListClass", "\345\221\230\345\267\245\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModifyGoodsListClass", "\345\221\230\345\267\245\345\267\245\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifyGoodsListClass: public Ui_ModifyGoodsListClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYGOODSLIST_H
