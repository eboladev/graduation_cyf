/********************************************************************************
** Form generated from reading UI file 'employeeModify.ui'
**
** Created: Fri Feb 18 20:15:35 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEMODIFY_H
#define UI_EMPLOYEEMODIFY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeModifyClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_56;
    QLineEdit *employeeName_modify_employee_LE;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_58;
    QTextEdit *remark_modify_employee_TE;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_55;
    QLineEdit *employeeID_modify_employee_LE;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_57;
    QLineEdit *employeePasswd_modify_employee_LE;
    QCommandLinkButton *yes_modify_employee_CLBTN;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *employeeClass_modify_employee_CB;

    void setupUi(QDialog *EmployeeModifyClass)
    {
        if (EmployeeModifyClass->objectName().isEmpty())
            EmployeeModifyClass->setObjectName(QString::fromUtf8("EmployeeModifyClass"));
        EmployeeModifyClass->resize(401, 406);
        EmployeeModifyClass->setMinimumSize(QSize(401, 406));
        EmployeeModifyClass->setMaximumSize(QSize(401, 406));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        EmployeeModifyClass->setPalette(palette);
        layoutWidget = new QWidget(EmployeeModifyClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 160, 241, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_56 = new QLabel(layoutWidget);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_2->addWidget(label_56);

        employeeName_modify_employee_LE = new QLineEdit(layoutWidget);
        employeeName_modify_employee_LE->setObjectName(QString::fromUtf8("employeeName_modify_employee_LE"));
        employeeName_modify_employee_LE->setEnabled(true);

        horizontalLayout_2->addWidget(employeeName_modify_employee_LE);

        layoutWidget_2 = new QWidget(EmployeeModifyClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 280, 241, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_58 = new QLabel(layoutWidget_2);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_4->addWidget(label_58);

        remark_modify_employee_TE = new QTextEdit(layoutWidget_2);
        remark_modify_employee_TE->setObjectName(QString::fromUtf8("remark_modify_employee_TE"));

        horizontalLayout_4->addWidget(remark_modify_employee_TE);

        layoutWidget_3 = new QWidget(EmployeeModifyClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(80, 120, 241, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_55 = new QLabel(layoutWidget_3);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label_55);

        employeeID_modify_employee_LE = new QLineEdit(layoutWidget_3);
        employeeID_modify_employee_LE->setObjectName(QString::fromUtf8("employeeID_modify_employee_LE"));
        employeeID_modify_employee_LE->setEnabled(false);
        employeeID_modify_employee_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(employeeID_modify_employee_LE);

        layoutWidget_4 = new QWidget(EmployeeModifyClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 200, 241, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(layoutWidget_4);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_3->addWidget(label_57);

        employeePasswd_modify_employee_LE = new QLineEdit(layoutWidget_4);
        employeePasswd_modify_employee_LE->setObjectName(QString::fromUtf8("employeePasswd_modify_employee_LE"));
        employeePasswd_modify_employee_LE->setEnabled(true);
        employeePasswd_modify_employee_LE->setFrame(true);
        employeePasswd_modify_employee_LE->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(employeePasswd_modify_employee_LE);

        yes_modify_employee_CLBTN = new QCommandLinkButton(EmployeeModifyClass);
        yes_modify_employee_CLBTN->setObjectName(QString::fromUtf8("yes_modify_employee_CLBTN"));
        yes_modify_employee_CLBTN->setGeometry(QRect(160, 350, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(14);
        yes_modify_employee_CLBTN->setFont(font);
        yes_modify_employee_CLBTN->setAutoDefault(false);
        label = new QLabel(EmployeeModifyClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 90));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Management/Resources/emp modify backgroud image.jpg);"));
        layoutWidget1 = new QWidget(EmployeeModifyClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 240, 241, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(label_2);

        employeeClass_modify_employee_CB = new QComboBox(layoutWidget1);
        employeeClass_modify_employee_CB->setObjectName(QString::fromUtf8("employeeClass_modify_employee_CB"));

        horizontalLayout_5->addWidget(employeeClass_modify_employee_CB);


        retranslateUi(EmployeeModifyClass);

        QMetaObject::connectSlotsByName(EmployeeModifyClass);
    } // setupUi

    void retranslateUi(QDialog *EmployeeModifyClass)
    {
        EmployeeModifyClass->setWindowTitle(QApplication::translate("EmployeeModifyClass", "\344\277\256\346\224\271/\345\242\236\345\212\240\345\221\230\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("EmployeeModifyClass", "\345\221\230\345\267\245\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("EmployeeModifyClass", "\345\221\230\345\267\245\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("EmployeeModifyClass", "\345\221\230\345\267\245\345\267\245\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("EmployeeModifyClass", "\347\231\273\351\231\206\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        employeePasswd_modify_employee_LE->setInputMask(QString());
        employeePasswd_modify_employee_LE->setText(QString());
        employeePasswd_modify_employee_LE->setPlaceholderText(QString());
        yes_modify_employee_CLBTN->setText(QApplication::translate("EmployeeModifyClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("EmployeeModifyClass", "\345\221\230\345\267\245\347\261\273\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmployeeModifyClass: public Ui_EmployeeModifyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEMODIFY_H
