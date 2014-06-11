/********************************************************************************
** Form generated from reading UI file 'management.ui'
**
** Created: Tue Mar 15 20:18:38 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_H
#define UI_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagementClass
{
public:
    QAction *about;
    QAction *quit;
    QWidget *centralWidget;
    QCommandLinkButton *depot_CLBTN;
    QCommandLinkButton *right_CLBTN;
    QCommandLinkButton *present_CLBTN;
    QCommandLinkButton *specialOP_CLBTN;
    QCommandLinkButton *stock_CLBTN;
    QCommandLinkButton *sell_CLBTN;
    QCommandLinkButton *employee_CLBTN;
    QCommandLinkButton *goods_CLBTN;
    QCommandLinkButton *associator_CLBTN;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ManagementClass)
    {
        if (ManagementClass->objectName().isEmpty())
            ManagementClass->setObjectName(QString::fromUtf8("ManagementClass"));
        ManagementClass->resize(568, 433);
        ManagementClass->setMinimumSize(QSize(568, 433));
        ManagementClass->setMaximumSize(QSize(568, 433));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ManagementClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ManagementClass->setWindowIcon(icon);
        ManagementClass->setStyleSheet(QString::fromUtf8(""));
        about = new QAction(ManagementClass);
        about->setObjectName(QString::fromUtf8("about"));
        quit = new QAction(ManagementClass);
        quit->setObjectName(QString::fromUtf8("quit"));
        centralWidget = new QWidget(ManagementClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        depot_CLBTN = new QCommandLinkButton(centralWidget);
        depot_CLBTN->setObjectName(QString::fromUtf8("depot_CLBTN"));
        depot_CLBTN->setGeometry(QRect(50, 140, 111, 41));
        depot_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        right_CLBTN = new QCommandLinkButton(centralWidget);
        right_CLBTN->setObjectName(QString::fromUtf8("right_CLBTN"));
        right_CLBTN->setGeometry(QRect(50, 230, 111, 41));
        right_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        present_CLBTN = new QCommandLinkButton(centralWidget);
        present_CLBTN->setObjectName(QString::fromUtf8("present_CLBTN"));
        present_CLBTN->setGeometry(QRect(220, 140, 111, 41));
        present_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        specialOP_CLBTN = new QCommandLinkButton(centralWidget);
        specialOP_CLBTN->setObjectName(QString::fromUtf8("specialOP_CLBTN"));
        specialOP_CLBTN->setGeometry(QRect(220, 230, 111, 41));
        specialOP_CLBTN->setMinimumSize(QSize(0, 0));
        specialOP_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        stock_CLBTN = new QCommandLinkButton(centralWidget);
        stock_CLBTN->setObjectName(QString::fromUtf8("stock_CLBTN"));
        stock_CLBTN->setGeometry(QRect(390, 140, 111, 41));
        stock_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        sell_CLBTN = new QCommandLinkButton(centralWidget);
        sell_CLBTN->setObjectName(QString::fromUtf8("sell_CLBTN"));
        sell_CLBTN->setGeometry(QRect(50, 320, 111, 41));
        sell_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        employee_CLBTN = new QCommandLinkButton(centralWidget);
        employee_CLBTN->setObjectName(QString::fromUtf8("employee_CLBTN"));
        employee_CLBTN->setGeometry(QRect(390, 230, 111, 41));
        employee_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        goods_CLBTN = new QCommandLinkButton(centralWidget);
        goods_CLBTN->setObjectName(QString::fromUtf8("goods_CLBTN"));
        goods_CLBTN->setGeometry(QRect(390, 320, 111, 41));
        goods_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        associator_CLBTN = new QCommandLinkButton(centralWidget);
        associator_CLBTN->setObjectName(QString::fromUtf8("associator_CLBTN"));
        associator_CLBTN->setGeometry(QRect(220, 320, 111, 41));
        associator_CLBTN->setMaximumSize(QSize(16777215, 16777215));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 384, 33));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(24);
        label->setFont(font);
        ManagementClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ManagementClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ManagementClass->setStatusBar(statusBar);

        retranslateUi(ManagementClass);

        QMetaObject::connectSlotsByName(ManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *ManagementClass)
    {
        ManagementClass->setWindowTitle(QApplication::translate("ManagementClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        about->setText(QApplication::translate("ManagementClass", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("ManagementClass", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        depot_CLBTN->setText(QApplication::translate("ManagementClass", "\345\272\223\345\255\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        right_CLBTN->setText(QApplication::translate("ManagementClass", "\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        present_CLBTN->setText(QApplication::translate("ManagementClass", "\344\274\230\346\203\240\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        specialOP_CLBTN->setText(QApplication::translate("ManagementClass", "\347\211\271\346\256\212\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        stock_CLBTN->setText(QApplication::translate("ManagementClass", "\350\277\233\350\264\247\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        sell_CLBTN->setText(QApplication::translate("ManagementClass", "\351\224\200\345\224\256\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        employee_CLBTN->setText(QApplication::translate("ManagementClass", "\345\221\230\345\267\245\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        goods_CLBTN->setText(QApplication::translate("ManagementClass", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        associator_CLBTN->setText(QApplication::translate("ManagementClass", "\344\274\232\345\221\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManagementClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManagementClass: public Ui_ManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_H
