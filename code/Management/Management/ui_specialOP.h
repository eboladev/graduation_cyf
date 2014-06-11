/********************************************************************************
** Form generated from reading UI file 'specialOP.ui'
**
** Created: Fri Feb 18 21:24:09 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALOP_H
#define UI_SPECIALOP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpecialOPClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *employeeID_search_op_CKB;
    QLineEdit *employeeID_search_op_LE;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *opClass_search_op_CKB;
    QComboBox *opClass_search_op_CB;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *opTime_search_op_CKB;
    QDateTimeEdit *timeStart_search_op_DTE;
    QLabel *label_2;
    QDateTimeEdit *timeEnd_search_op_DTE;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *opAll_search_op_CKB;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_search_op_BTN;
    QFrame *line;
    QTableWidget *opInfo_op_TBW;
    QLabel *status_op_LB;

    void setupUi(QDialog *SpecialOPClass)
    {
        if (SpecialOPClass->objectName().isEmpty())
            SpecialOPClass->setObjectName(QString::fromUtf8("SpecialOPClass"));
        SpecialOPClass->resize(513, 564);
        SpecialOPClass->setMinimumSize(QSize(513, 564));
        SpecialOPClass->setMaximumSize(QSize(513, 564));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        SpecialOPClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SpecialOPClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SpecialOPClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SpecialOPClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(SpecialOPClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setSizeIncrement(QSize(0, 0));
        groupBox->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        employeeID_search_op_CKB = new QCheckBox(groupBox);
        employeeID_search_op_CKB->setObjectName(QString::fromUtf8("employeeID_search_op_CKB"));

        horizontalLayout->addWidget(employeeID_search_op_CKB);

        employeeID_search_op_LE = new QLineEdit(groupBox);
        employeeID_search_op_LE->setObjectName(QString::fromUtf8("employeeID_search_op_LE"));
        employeeID_search_op_LE->setEnabled(false);
        employeeID_search_op_LE->setMinimumSize(QSize(0, 0));
        employeeID_search_op_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(employeeID_search_op_LE);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        opClass_search_op_CKB = new QCheckBox(groupBox);
        opClass_search_op_CKB->setObjectName(QString::fromUtf8("opClass_search_op_CKB"));
        opClass_search_op_CKB->setMaximumSize(QSize(119, 16777215));

        horizontalLayout_4->addWidget(opClass_search_op_CKB);

        opClass_search_op_CB = new QComboBox(groupBox);
        opClass_search_op_CB->setObjectName(QString::fromUtf8("opClass_search_op_CB"));
        opClass_search_op_CB->setEnabled(false);

        horizontalLayout_4->addWidget(opClass_search_op_CB);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        opTime_search_op_CKB = new QCheckBox(groupBox);
        opTime_search_op_CKB->setObjectName(QString::fromUtf8("opTime_search_op_CKB"));
        opTime_search_op_CKB->setMinimumSize(QSize(0, 0));
        opTime_search_op_CKB->setMaximumSize(QSize(119, 16777215));

        horizontalLayout_2->addWidget(opTime_search_op_CKB);

        timeStart_search_op_DTE = new QDateTimeEdit(groupBox);
        timeStart_search_op_DTE->setObjectName(QString::fromUtf8("timeStart_search_op_DTE"));
        timeStart_search_op_DTE->setEnabled(false);

        horizontalLayout_2->addWidget(timeStart_search_op_DTE);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(label_2);

        timeEnd_search_op_DTE = new QDateTimeEdit(groupBox);
        timeEnd_search_op_DTE->setObjectName(QString::fromUtf8("timeEnd_search_op_DTE"));
        timeEnd_search_op_DTE->setEnabled(false);

        horizontalLayout_2->addWidget(timeEnd_search_op_DTE);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        opAll_search_op_CKB = new QCheckBox(groupBox);
        opAll_search_op_CKB->setObjectName(QString::fromUtf8("opAll_search_op_CKB"));

        horizontalLayout_5->addWidget(opAll_search_op_CKB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        search_search_op_BTN = new QPushButton(groupBox);
        search_search_op_BTN->setObjectName(QString::fromUtf8("search_search_op_BTN"));

        horizontalLayout_5->addWidget(search_search_op_BTN);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(groupBox);

        line = new QFrame(SpecialOPClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        opInfo_op_TBW = new QTableWidget(SpecialOPClass);
        if (opInfo_op_TBW->columnCount() < 4)
            opInfo_op_TBW->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        opInfo_op_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        opInfo_op_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        opInfo_op_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        opInfo_op_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        opInfo_op_TBW->setObjectName(QString::fromUtf8("opInfo_op_TBW"));
        opInfo_op_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        opInfo_op_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        opInfo_op_TBW->horizontalHeader()->setStretchLastSection(true);
        opInfo_op_TBW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(opInfo_op_TBW);

        status_op_LB = new QLabel(SpecialOPClass);
        status_op_LB->setObjectName(QString::fromUtf8("status_op_LB"));

        verticalLayout->addWidget(status_op_LB);


        retranslateUi(SpecialOPClass);

        QMetaObject::connectSlotsByName(SpecialOPClass);
    } // setupUi

    void retranslateUi(QDialog *SpecialOPClass)
    {
        SpecialOPClass->setWindowTitle(QApplication::translate("SpecialOPClass", "\347\211\271\346\256\212\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("SpecialOPClass", "\346\237\245\350\257\242\347\211\271\346\256\212\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        employeeID_search_op_CKB->setText(QApplication::translate("SpecialOPClass", "\346\214\211\345\221\230\345\267\245\345\267\245\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        opClass_search_op_CKB->setText(QApplication::translate("SpecialOPClass", "\346\214\211\346\223\215\344\275\234\347\261\273\345\236\213\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        opTime_search_op_CKB->setText(QApplication::translate("SpecialOPClass", "\346\214\211\346\223\215\344\275\234\346\227\266\351\227\264\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        timeStart_search_op_DTE->setDisplayFormat(QApplication::translate("SpecialOPClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SpecialOPClass", " --- ", 0, QApplication::UnicodeUTF8));
        timeEnd_search_op_DTE->setDisplayFormat(QApplication::translate("SpecialOPClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        opAll_search_op_CKB->setText(QApplication::translate("SpecialOPClass", "\346\211\200\346\234\211\347\211\271\346\256\212\346\223\215\344\275\234\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        search_search_op_BTN->setText(QApplication::translate("SpecialOPClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = opInfo_op_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SpecialOPClass", "\345\221\230\345\267\245\345\267\245\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = opInfo_op_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SpecialOPClass", "\347\211\271\346\256\212\346\223\215\344\275\234\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = opInfo_op_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SpecialOPClass", "\346\223\215\344\275\234\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = opInfo_op_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SpecialOPClass", "\346\223\215\344\275\234\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        opInfo_op_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        opInfo_op_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        opInfo_op_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_op_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SpecialOPClass: public Ui_SpecialOPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALOP_H
