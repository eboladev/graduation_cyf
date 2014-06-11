/********************************************************************************
** Form generated from reading UI file 'right.ui'
**
** Created: Fri Feb 18 22:13:56 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHT_H
#define UI_RIGHT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RightClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_26;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_33;
    QRadioButton *employeeClass_search_right_RBTN;
    QComboBox *employeeClass_search_right_CB;
    QHBoxLayout *horizontalLayout_31;
    QRadioButton *all_search_right_RBTN;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *search_search_right_BTN;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_6;
    QComboBox *employeeClass_modify_right_CB;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_19;
    QComboBox *right_modify_right_CB;
    QSpacerItem *horizontalSpacer_11;
    QRadioButton *yes_modify_right_RBTN;
    QRadioButton *no_modify_right_RBTN;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *modify_modify_right_BTN;
    QFrame *line_3;
    QTableWidget *rightInfo_right_TBW;
    QLabel *status_right_LB;

    void setupUi(QDialog *RightClass)
    {
        if (RightClass->objectName().isEmpty())
            RightClass->setObjectName(QString::fromUtf8("RightClass"));
        RightClass->resize(800, 602);
        RightClass->setMinimumSize(QSize(800, 602));
        RightClass->setMaximumSize(QSize(800, 627));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        RightClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RightClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(RightClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RightClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout->addWidget(label);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        groupBox_7 = new QGroupBox(RightClass);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 163));
        groupBox_7->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_18 = new QVBoxLayout(groupBox_7);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        employeeClass_search_right_RBTN = new QRadioButton(groupBox_7);
        employeeClass_search_right_RBTN->setObjectName(QString::fromUtf8("employeeClass_search_right_RBTN"));
        employeeClass_search_right_RBTN->setMinimumSize(QSize(0, 0));
        employeeClass_search_right_RBTN->setMaximumSize(QSize(118, 16777215));
        employeeClass_search_right_RBTN->setChecked(true);

        horizontalLayout_33->addWidget(employeeClass_search_right_RBTN);

        employeeClass_search_right_CB = new QComboBox(groupBox_7);
        employeeClass_search_right_CB->setObjectName(QString::fromUtf8("employeeClass_search_right_CB"));

        horizontalLayout_33->addWidget(employeeClass_search_right_CB);


        verticalLayout_18->addLayout(horizontalLayout_33);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        all_search_right_RBTN = new QRadioButton(groupBox_7);
        all_search_right_RBTN->setObjectName(QString::fromUtf8("all_search_right_RBTN"));
        all_search_right_RBTN->setMaximumSize(QSize(119, 16777215));

        horizontalLayout_31->addWidget(all_search_right_RBTN);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_10);

        search_search_right_BTN = new QPushButton(groupBox_7);
        search_search_right_BTN->setObjectName(QString::fromUtf8("search_search_right_BTN"));

        horizontalLayout_31->addWidget(search_search_right_BTN);


        verticalLayout_18->addLayout(horizontalLayout_31);


        horizontalLayout_26->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(RightClass);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(0, 163));
        verticalLayout_16 = new QVBoxLayout(groupBox_8);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_6 = new QLabel(groupBox_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_27->addWidget(label_6);

        employeeClass_modify_right_CB = new QComboBox(groupBox_8);
        employeeClass_modify_right_CB->setObjectName(QString::fromUtf8("employeeClass_modify_right_CB"));

        horizontalLayout_27->addWidget(employeeClass_modify_right_CB);


        verticalLayout_16->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_28->addWidget(label_19);

        right_modify_right_CB = new QComboBox(groupBox_8);
        right_modify_right_CB->setObjectName(QString::fromUtf8("right_modify_right_CB"));

        horizontalLayout_28->addWidget(right_modify_right_CB);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_11);

        yes_modify_right_RBTN = new QRadioButton(groupBox_8);
        yes_modify_right_RBTN->setObjectName(QString::fromUtf8("yes_modify_right_RBTN"));
        yes_modify_right_RBTN->setEnabled(true);
        yes_modify_right_RBTN->setChecked(true);

        horizontalLayout_28->addWidget(yes_modify_right_RBTN);

        no_modify_right_RBTN = new QRadioButton(groupBox_8);
        no_modify_right_RBTN->setObjectName(QString::fromUtf8("no_modify_right_RBTN"));

        horizontalLayout_28->addWidget(no_modify_right_RBTN);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_12);

        modify_modify_right_BTN = new QPushButton(groupBox_8);
        modify_modify_right_BTN->setObjectName(QString::fromUtf8("modify_modify_right_BTN"));

        horizontalLayout_28->addWidget(modify_modify_right_BTN);


        verticalLayout_16->addLayout(horizontalLayout_28);


        horizontalLayout_26->addWidget(groupBox_8);


        verticalLayout->addLayout(horizontalLayout_26);

        line_3 = new QFrame(RightClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setLineWidth(1);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_3);

        rightInfo_right_TBW = new QTableWidget(RightClass);
        if (rightInfo_right_TBW->columnCount() < 10)
            rightInfo_right_TBW->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        rightInfo_right_TBW->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        rightInfo_right_TBW->setObjectName(QString::fromUtf8("rightInfo_right_TBW"));
        rightInfo_right_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        rightInfo_right_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        rightInfo_right_TBW->horizontalHeader()->setStretchLastSection(true);
        rightInfo_right_TBW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(rightInfo_right_TBW);

        status_right_LB = new QLabel(RightClass);
        status_right_LB->setObjectName(QString::fromUtf8("status_right_LB"));

        verticalLayout->addWidget(status_right_LB);


        retranslateUi(RightClass);

        QMetaObject::connectSlotsByName(RightClass);
    } // setupUi

    void retranslateUi(QDialog *RightClass)
    {
        RightClass->setWindowTitle(QApplication::translate("RightClass", "\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox_7->setTitle(QApplication::translate("RightClass", "\346\237\245\347\234\213\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        employeeClass_search_right_RBTN->setText(QApplication::translate("RightClass", "\346\214\211\345\221\230\345\267\245\347\261\273\345\210\253\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        all_search_right_RBTN->setText(QApplication::translate("RightClass", "\346\237\245\350\257\242\346\211\200\346\234\211\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        search_search_right_BTN->setText(QApplication::translate("RightClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("RightClass", "\344\277\256\346\224\271\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RightClass", "\345\221\230\345\267\245\347\261\273\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("RightClass", "\346\235\203\351\231\220\344\277\256\346\224\271\357\274\232", 0, QApplication::UnicodeUTF8));
        right_modify_right_CB->clear();
        right_modify_right_CB->insertItems(0, QStringList()
         << QApplication::translate("RightClass", "\346\237\245\350\257\242\351\224\200\345\224\256\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\344\277\256\346\224\271\344\272\244\346\230\223\346\270\205\345\215\225", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\346\237\245\347\234\213\347\211\271\346\256\212\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\346\237\245\350\257\242\344\274\230\346\203\240\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\345\221\230\345\267\245\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\344\274\232\345\221\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\345\272\223\345\255\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\350\277\233\350\264\247\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RightClass", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8)
        );
        yes_modify_right_RBTN->setText(QApplication::translate("RightClass", "\346\230\257", 0, QApplication::UnicodeUTF8));
        no_modify_right_RBTN->setText(QApplication::translate("RightClass", "\345\220\246", 0, QApplication::UnicodeUTF8));
        modify_modify_right_BTN->setText(QApplication::translate("RightClass", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = rightInfo_right_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("RightClass", "\345\221\230\345\267\245\345\267\245\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = rightInfo_right_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("RightClass", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = rightInfo_right_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("RightClass", "\345\272\223\345\255\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = rightInfo_right_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("RightClass", "\346\237\245\347\234\213\347\211\271\346\256\212\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = rightInfo_right_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("RightClass", "\344\277\256\346\224\271\344\272\244\346\230\223\346\270\205\345\215\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = rightInfo_right_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("RightClass", "\345\221\230\345\267\245\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = rightInfo_right_TBW->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("RightClass", "\344\274\232\345\221\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = rightInfo_right_TBW->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("RightClass", "\350\277\233\350\264\247\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = rightInfo_right_TBW->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("RightClass", "\346\235\203\351\231\220\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = rightInfo_right_TBW->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("RightClass", "\346\237\245\350\257\242\351\224\200\345\224\256\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rightInfo_right_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rightInfo_right_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        rightInfo_right_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_right_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RightClass: public Ui_RightClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHT_H
