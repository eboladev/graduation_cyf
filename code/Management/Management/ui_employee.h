/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created: Fri Feb 18 20:15:36 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EmployeeClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_35;
    QRadioButton *employeeID_search_employee_RBTN;
    QLineEdit *employeeID_search_employee_LE;
    QHBoxLayout *horizontalLayout_36;
    QRadioButton *employeeName_search_employee_RBTN;
    QLineEdit *employeeName_search_employee_LE;
    QHBoxLayout *horizontalLayout_37;
    QRadioButton *employeeAll_search_employee_RBTN;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *search_search_employee_BTN;
    QGroupBox *groupBox_27;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_54;
    QLineEdit *employeeID_modify_employee_LE;
    QPushButton *modify_modify_employee_BTN;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_55;
    QLineEdit *employeeID_del_employee_LE;
    QPushButton *del_modify_employee_BTN;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_modify_employee_BTN;
    QFrame *line_5;
    QTableWidget *employeeInfo_employee_TBW;
    QLabel *status_employee_LB;

    void setupUi(QDialog *EmployeeClass)
    {
        if (EmployeeClass->objectName().isEmpty())
            EmployeeClass->setObjectName(QString::fromUtf8("EmployeeClass"));
        EmployeeClass->resize(800, 602);
        EmployeeClass->setMinimumSize(QSize(800, 602));
        EmployeeClass->setMaximumSize(QSize(800, 602));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        EmployeeClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        EmployeeClass->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(EmployeeClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(EmployeeClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout_2->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_9 = new QGroupBox(EmployeeClass);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setMinimumSize(QSize(0, 0));
        groupBox_9->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_26 = new QVBoxLayout(groupBox_9);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        employeeID_search_employee_RBTN = new QRadioButton(groupBox_9);
        employeeID_search_employee_RBTN->setObjectName(QString::fromUtf8("employeeID_search_employee_RBTN"));
        employeeID_search_employee_RBTN->setChecked(true);

        horizontalLayout_35->addWidget(employeeID_search_employee_RBTN);

        employeeID_search_employee_LE = new QLineEdit(groupBox_9);
        employeeID_search_employee_LE->setObjectName(QString::fromUtf8("employeeID_search_employee_LE"));

        horizontalLayout_35->addWidget(employeeID_search_employee_LE);


        verticalLayout_26->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        employeeName_search_employee_RBTN = new QRadioButton(groupBox_9);
        employeeName_search_employee_RBTN->setObjectName(QString::fromUtf8("employeeName_search_employee_RBTN"));
        employeeName_search_employee_RBTN->setMaximumSize(QSize(119, 16777215));

        horizontalLayout_36->addWidget(employeeName_search_employee_RBTN);

        employeeName_search_employee_LE = new QLineEdit(groupBox_9);
        employeeName_search_employee_LE->setObjectName(QString::fromUtf8("employeeName_search_employee_LE"));
        employeeName_search_employee_LE->setEnabled(false);

        horizontalLayout_36->addWidget(employeeName_search_employee_LE);


        verticalLayout_26->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        employeeAll_search_employee_RBTN = new QRadioButton(groupBox_9);
        employeeAll_search_employee_RBTN->setObjectName(QString::fromUtf8("employeeAll_search_employee_RBTN"));

        horizontalLayout_37->addWidget(employeeAll_search_employee_RBTN);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_13);

        search_search_employee_BTN = new QPushButton(groupBox_9);
        search_search_employee_BTN->setObjectName(QString::fromUtf8("search_search_employee_BTN"));

        horizontalLayout_37->addWidget(search_search_employee_BTN);


        verticalLayout_26->addLayout(horizontalLayout_37);


        horizontalLayout_4->addWidget(groupBox_9);

        groupBox_27 = new QGroupBox(EmployeeClass);
        groupBox_27->setObjectName(QString::fromUtf8("groupBox_27"));
        groupBox_27->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(groupBox_27);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_54 = new QLabel(groupBox_27);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(label_54);

        employeeID_modify_employee_LE = new QLineEdit(groupBox_27);
        employeeID_modify_employee_LE->setObjectName(QString::fromUtf8("employeeID_modify_employee_LE"));
        employeeID_modify_employee_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(employeeID_modify_employee_LE);

        modify_modify_employee_BTN = new QPushButton(groupBox_27);
        modify_modify_employee_BTN->setObjectName(QString::fromUtf8("modify_modify_employee_BTN"));

        horizontalLayout->addWidget(modify_modify_employee_BTN);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_55 = new QLabel(groupBox_27);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(label_55);

        employeeID_del_employee_LE = new QLineEdit(groupBox_27);
        employeeID_del_employee_LE->setObjectName(QString::fromUtf8("employeeID_del_employee_LE"));
        employeeID_del_employee_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(employeeID_del_employee_LE);

        del_modify_employee_BTN = new QPushButton(groupBox_27);
        del_modify_employee_BTN->setObjectName(QString::fromUtf8("del_modify_employee_BTN"));

        horizontalLayout_2->addWidget(del_modify_employee_BTN);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        add_modify_employee_BTN = new QPushButton(groupBox_27);
        add_modify_employee_BTN->setObjectName(QString::fromUtf8("add_modify_employee_BTN"));

        horizontalLayout_3->addWidget(add_modify_employee_BTN);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(groupBox_27);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_5 = new QFrame(EmployeeClass);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->setLineWidth(1);
        line_5->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_5);

        employeeInfo_employee_TBW = new QTableWidget(EmployeeClass);
        if (employeeInfo_employee_TBW->columnCount() < 4)
            employeeInfo_employee_TBW->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        employeeInfo_employee_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        employeeInfo_employee_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        employeeInfo_employee_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        employeeInfo_employee_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        employeeInfo_employee_TBW->setObjectName(QString::fromUtf8("employeeInfo_employee_TBW"));
        employeeInfo_employee_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        employeeInfo_employee_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        employeeInfo_employee_TBW->horizontalHeader()->setStretchLastSection(true);
        employeeInfo_employee_TBW->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(employeeInfo_employee_TBW);

        status_employee_LB = new QLabel(EmployeeClass);
        status_employee_LB->setObjectName(QString::fromUtf8("status_employee_LB"));

        verticalLayout_2->addWidget(status_employee_LB);


        retranslateUi(EmployeeClass);

        QMetaObject::connectSlotsByName(EmployeeClass);
    } // setupUi

    void retranslateUi(QDialog *EmployeeClass)
    {
        EmployeeClass->setWindowTitle(QApplication::translate("EmployeeClass", "\345\221\230\345\267\245\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox_9->setTitle(QApplication::translate("EmployeeClass", "\346\237\245\347\234\213\345\221\230\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        employeeID_search_employee_RBTN->setText(QApplication::translate("EmployeeClass", "\346\214\211\345\221\230\345\267\245\345\267\245\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        employeeName_search_employee_RBTN->setText(QApplication::translate("EmployeeClass", "\346\214\211\345\221\230\345\267\245\345\247\223\345\220\215\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        employeeAll_search_employee_RBTN->setText(QApplication::translate("EmployeeClass", "\346\237\245\350\257\242\346\211\200\346\234\211\345\221\230\345\267\245", 0, QApplication::UnicodeUTF8));
        search_search_employee_BTN->setText(QApplication::translate("EmployeeClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_27->setTitle(QApplication::translate("EmployeeClass", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("EmployeeClass", "\345\221\230\345\267\245\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        modify_modify_employee_BTN->setText(QApplication::translate("EmployeeClass", "\344\277\256\346\224\271\345\221\230\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("EmployeeClass", "\345\221\230\345\267\245\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        del_modify_employee_BTN->setText(QApplication::translate("EmployeeClass", "\345\210\240\351\231\244\345\221\230\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        add_modify_employee_BTN->setText(QApplication::translate("EmployeeClass", "\345\242\236\345\212\240\345\221\230\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = employeeInfo_employee_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EmployeeClass", "\345\221\230\345\267\245\345\267\245\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = employeeInfo_employee_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EmployeeClass", "\345\221\230\345\267\245\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = employeeInfo_employee_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EmployeeClass", "\345\221\230\345\267\245\347\261\273\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = employeeInfo_employee_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EmployeeClass", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        employeeInfo_employee_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        employeeInfo_employee_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        employeeInfo_employee_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_employee_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EmployeeClass: public Ui_EmployeeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
