/********************************************************************************
** Form generated from reading UI file 'databaseSet.ui'
**
** Created: Wed Jan 26 12:08:21 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESET_H
#define UI_DATABASESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseSetClass
{
public:
    QPushButton *connect2database;
    QPushButton *cancel;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *SQLDBName_LE;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *SQLHostName_LE;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *SQLLoginUser_LE;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *SQLLoginPasswd_LE;

    void setupUi(QDialog *DatabaseSetClass)
    {
        if (DatabaseSetClass->objectName().isEmpty())
            DatabaseSetClass->setObjectName(QString::fromUtf8("DatabaseSetClass"));
        DatabaseSetClass->resize(471, 382);
        DatabaseSetClass->setMinimumSize(QSize(471, 382));
        DatabaseSetClass->setMaximumSize(QSize(471, 382));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        DatabaseSetClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DatabaseSetClass->setWindowIcon(icon);
        connect2database = new QPushButton(DatabaseSetClass);
        connect2database->setObjectName(QString::fromUtf8("connect2database"));
        connect2database->setGeometry(QRect(130, 332, 75, 31));
        QFont font;
        font.setPointSize(12);
        connect2database->setFont(font);
        cancel = new QPushButton(DatabaseSetClass);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(270, 332, 75, 31));
        cancel->setFont(font);
        label_6 = new QLabel(DatabaseSetClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 471, 97));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Client/Resources/database backgroud image.jpg);"));
        layoutWidget = new QWidget(DatabaseSetClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(78, 120, 331, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        SQLDBName_LE = new QLineEdit(layoutWidget);
        SQLDBName_LE->setObjectName(QString::fromUtf8("SQLDBName_LE"));
        SQLDBName_LE->setMinimumSize(QSize(0, 31));

        horizontalLayout->addWidget(SQLDBName_LE);

        layoutWidget1 = new QWidget(DatabaseSetClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(78, 170, 331, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        SQLHostName_LE = new QLineEdit(layoutWidget1);
        SQLHostName_LE->setObjectName(QString::fromUtf8("SQLHostName_LE"));
        SQLHostName_LE->setMinimumSize(QSize(0, 31));

        horizontalLayout_2->addWidget(SQLHostName_LE);

        layoutWidget2 = new QWidget(DatabaseSetClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(78, 220, 331, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        SQLLoginUser_LE = new QLineEdit(layoutWidget2);
        SQLLoginUser_LE->setObjectName(QString::fromUtf8("SQLLoginUser_LE"));
        SQLLoginUser_LE->setMinimumSize(QSize(0, 31));

        horizontalLayout_3->addWidget(SQLLoginUser_LE);

        layoutWidget3 = new QWidget(DatabaseSetClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(78, 270, 331, 33));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        SQLLoginPasswd_LE = new QLineEdit(layoutWidget3);
        SQLLoginPasswd_LE->setObjectName(QString::fromUtf8("SQLLoginPasswd_LE"));
        SQLLoginPasswd_LE->setMinimumSize(QSize(0, 31));
        SQLLoginPasswd_LE->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(SQLLoginPasswd_LE);


        retranslateUi(DatabaseSetClass);

        QMetaObject::connectSlotsByName(DatabaseSetClass);
    } // setupUi

    void retranslateUi(QDialog *DatabaseSetClass)
    {
        DatabaseSetClass->setWindowTitle(QApplication::translate("DatabaseSetClass", "\346\225\260\346\215\256\345\272\223\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        connect2database->setText(QApplication::translate("DatabaseSetClass", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("DatabaseSetClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_2->setText(QApplication::translate("DatabaseSetClass", "\346\225\260\346\215\256\345\272\223\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        SQLDBName_LE->setText(QApplication::translate("DatabaseSetClass", "supermarket", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DatabaseSetClass", "\346\225\260\346\215\256\345\272\223\344\270\273\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        SQLHostName_LE->setText(QApplication::translate("DatabaseSetClass", "localhost", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DatabaseSetClass", "\346\225\260\346\215\256\345\272\223\347\224\250\346\210\267\357\274\232", 0, QApplication::UnicodeUTF8));
        SQLLoginUser_LE->setText(QApplication::translate("DatabaseSetClass", "root", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DatabaseSetClass", "\346\225\260\346\215\256\345\272\223\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        SQLLoginPasswd_LE->setText(QApplication::translate("DatabaseSetClass", "chenyf", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DatabaseSetClass: public Ui_DatabaseSetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESET_H
