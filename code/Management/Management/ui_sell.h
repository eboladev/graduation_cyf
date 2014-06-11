/********************************************************************************
** Form generated from reading UI file 'sell.ui'
**
** Created: Fri Feb 18 20:15:30 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELL_H
#define UI_SELL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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

class Ui_SellClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_29;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *goodsID_search_sell_CKB;
    QLineEdit *goodsID_search_sell_LE;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *employeeID_search_sell_CKB;
    QLineEdit *employeeID_search_sell_LE;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *sellTime_search_sell_CKB;
    QDateTimeEdit *sellTimeStart_search_sell_DTE;
    QLabel *label_17;
    QDateTimeEdit *sellTimeEnd_search_sell_DTE;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *sellAll_search_sell_CKB;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *search_search_sell_BTN;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *goodsID_stat_sell_CKB;
    QLineEdit *goodsID_stat_sell_LE;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *employeeID_stat_sell_CKB;
    QLineEdit *employeeID_stat_sell_LE;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *sellTime_stat_sell_CKB;
    QDateTimeEdit *sellTimeStart_stat_sell_DTE;
    QLabel *label_18;
    QDateTimeEdit *sellTimeEnd_stat_sell_DTE;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *sellAll_stat_sell_CKB;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *stat_stat_sell_BTN;
    QFrame *line_4;
    QTableWidget *sellInfo_depot_TBW;
    QLabel *status_sell_LB;

    void setupUi(QDialog *SellClass)
    {
        if (SellClass->objectName().isEmpty())
            SellClass->setObjectName(QString::fromUtf8("SellClass"));
        SellClass->resize(800, 602);
        SellClass->setMinimumSize(QSize(800, 602));
        SellClass->setMaximumSize(QSize(800, 602));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        SellClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SellClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SellClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SellClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout->addWidget(label);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        groupBox_5 = new QGroupBox(SellClass);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 163));
        groupBox_5->setMaximumSize(QSize(375, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        goodsID_search_sell_CKB = new QCheckBox(groupBox_5);
        goodsID_search_sell_CKB->setObjectName(QString::fromUtf8("goodsID_search_sell_CKB"));

        horizontalLayout->addWidget(goodsID_search_sell_CKB);

        goodsID_search_sell_LE = new QLineEdit(groupBox_5);
        goodsID_search_sell_LE->setObjectName(QString::fromUtf8("goodsID_search_sell_LE"));
        goodsID_search_sell_LE->setEnabled(false);

        horizontalLayout->addWidget(goodsID_search_sell_LE);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        employeeID_search_sell_CKB = new QCheckBox(groupBox_5);
        employeeID_search_sell_CKB->setObjectName(QString::fromUtf8("employeeID_search_sell_CKB"));
        employeeID_search_sell_CKB->setMinimumSize(QSize(119, 0));

        horizontalLayout_2->addWidget(employeeID_search_sell_CKB);

        employeeID_search_sell_LE = new QLineEdit(groupBox_5);
        employeeID_search_sell_LE->setObjectName(QString::fromUtf8("employeeID_search_sell_LE"));
        employeeID_search_sell_LE->setEnabled(false);

        horizontalLayout_2->addWidget(employeeID_search_sell_LE);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sellTime_search_sell_CKB = new QCheckBox(groupBox_5);
        sellTime_search_sell_CKB->setObjectName(QString::fromUtf8("sellTime_search_sell_CKB"));
        sellTime_search_sell_CKB->setMinimumSize(QSize(119, 0));

        horizontalLayout_3->addWidget(sellTime_search_sell_CKB);

        sellTimeStart_search_sell_DTE = new QDateTimeEdit(groupBox_5);
        sellTimeStart_search_sell_DTE->setObjectName(QString::fromUtf8("sellTimeStart_search_sell_DTE"));
        sellTimeStart_search_sell_DTE->setEnabled(false);

        horizontalLayout_3->addWidget(sellTimeStart_search_sell_DTE);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_3->addWidget(label_17);

        sellTimeEnd_search_sell_DTE = new QDateTimeEdit(groupBox_5);
        sellTimeEnd_search_sell_DTE->setObjectName(QString::fromUtf8("sellTimeEnd_search_sell_DTE"));
        sellTimeEnd_search_sell_DTE->setEnabled(false);

        horizontalLayout_3->addWidget(sellTimeEnd_search_sell_DTE);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sellAll_search_sell_CKB = new QCheckBox(groupBox_5);
        sellAll_search_sell_CKB->setObjectName(QString::fromUtf8("sellAll_search_sell_CKB"));

        horizontalLayout_4->addWidget(sellAll_search_sell_CKB);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        search_search_sell_BTN = new QPushButton(groupBox_5);
        search_search_sell_BTN->setObjectName(QString::fromUtf8("search_search_sell_BTN"));

        horizontalLayout_4->addWidget(search_search_sell_BTN);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_29->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(SellClass);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 163));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        goodsID_stat_sell_CKB = new QCheckBox(groupBox_6);
        goodsID_stat_sell_CKB->setObjectName(QString::fromUtf8("goodsID_stat_sell_CKB"));

        horizontalLayout_5->addWidget(goodsID_stat_sell_CKB);

        goodsID_stat_sell_LE = new QLineEdit(groupBox_6);
        goodsID_stat_sell_LE->setObjectName(QString::fromUtf8("goodsID_stat_sell_LE"));
        goodsID_stat_sell_LE->setEnabled(false);

        horizontalLayout_5->addWidget(goodsID_stat_sell_LE);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        employeeID_stat_sell_CKB = new QCheckBox(groupBox_6);
        employeeID_stat_sell_CKB->setObjectName(QString::fromUtf8("employeeID_stat_sell_CKB"));
        employeeID_stat_sell_CKB->setMinimumSize(QSize(119, 0));

        horizontalLayout_6->addWidget(employeeID_stat_sell_CKB);

        employeeID_stat_sell_LE = new QLineEdit(groupBox_6);
        employeeID_stat_sell_LE->setObjectName(QString::fromUtf8("employeeID_stat_sell_LE"));
        employeeID_stat_sell_LE->setEnabled(false);

        horizontalLayout_6->addWidget(employeeID_stat_sell_LE);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        sellTime_stat_sell_CKB = new QCheckBox(groupBox_6);
        sellTime_stat_sell_CKB->setObjectName(QString::fromUtf8("sellTime_stat_sell_CKB"));
        sellTime_stat_sell_CKB->setMinimumSize(QSize(119, 0));

        horizontalLayout_7->addWidget(sellTime_stat_sell_CKB);

        sellTimeStart_stat_sell_DTE = new QDateTimeEdit(groupBox_6);
        sellTimeStart_stat_sell_DTE->setObjectName(QString::fromUtf8("sellTimeStart_stat_sell_DTE"));
        sellTimeStart_stat_sell_DTE->setEnabled(false);

        horizontalLayout_7->addWidget(sellTimeStart_stat_sell_DTE);

        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(24, 16777215));

        horizontalLayout_7->addWidget(label_18);

        sellTimeEnd_stat_sell_DTE = new QDateTimeEdit(groupBox_6);
        sellTimeEnd_stat_sell_DTE->setObjectName(QString::fromUtf8("sellTimeEnd_stat_sell_DTE"));
        sellTimeEnd_stat_sell_DTE->setEnabled(false);

        horizontalLayout_7->addWidget(sellTimeEnd_stat_sell_DTE);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        sellAll_stat_sell_CKB = new QCheckBox(groupBox_6);
        sellAll_stat_sell_CKB->setObjectName(QString::fromUtf8("sellAll_stat_sell_CKB"));

        horizontalLayout_8->addWidget(sellAll_stat_sell_CKB);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        stat_stat_sell_BTN = new QPushButton(groupBox_6);
        stat_stat_sell_BTN->setObjectName(QString::fromUtf8("stat_stat_sell_BTN"));

        horizontalLayout_8->addWidget(stat_stat_sell_BTN);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_29->addWidget(groupBox_6);


        verticalLayout->addLayout(horizontalLayout_29);

        line_4 = new QFrame(SellClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setLineWidth(1);
        line_4->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_4);

        sellInfo_depot_TBW = new QTableWidget(SellClass);
        if (sellInfo_depot_TBW->columnCount() < 7)
            sellInfo_depot_TBW->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        sellInfo_depot_TBW->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        sellInfo_depot_TBW->setObjectName(QString::fromUtf8("sellInfo_depot_TBW"));
        sellInfo_depot_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        sellInfo_depot_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        sellInfo_depot_TBW->setTextElideMode(Qt::ElideRight);
        sellInfo_depot_TBW->horizontalHeader()->setStretchLastSection(true);
        sellInfo_depot_TBW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(sellInfo_depot_TBW);

        status_sell_LB = new QLabel(SellClass);
        status_sell_LB->setObjectName(QString::fromUtf8("status_sell_LB"));

        verticalLayout->addWidget(status_sell_LB);


        retranslateUi(SellClass);

        QMetaObject::connectSlotsByName(SellClass);
    } // setupUi

    void retranslateUi(QDialog *SellClass)
    {
        SellClass->setWindowTitle(QApplication::translate("SellClass", "\351\224\200\345\224\256\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox_5->setTitle(QApplication::translate("SellClass", "\351\224\200\345\224\256\346\270\205\345\215\225\346\237\245\347\234\213", 0, QApplication::UnicodeUTF8));
        goodsID_search_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\345\225\206\345\223\201\347\274\226\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        employeeID_search_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\346\224\266\351\223\266\345\221\230\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        sellTime_search_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\346\227\266\351\227\264\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        sellTimeStart_search_sell_DTE->setDisplayFormat(QApplication::translate("SellClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("SellClass", "----", 0, QApplication::UnicodeUTF8));
        sellTimeEnd_search_sell_DTE->setDisplayFormat(QApplication::translate("SellClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        sellAll_search_sell_CKB->setText(QApplication::translate("SellClass", "\346\211\200\346\234\211\351\224\200\345\224\256\346\203\205\345\206\265\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        search_search_sell_BTN->setText(QApplication::translate("SellClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("SellClass", "\351\224\200\345\224\256\351\207\221\351\242\235\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        goodsID_stat_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\345\225\206\345\223\201\347\274\226\345\217\267\347\273\237\350\256\241\357\274\232", 0, QApplication::UnicodeUTF8));
        employeeID_stat_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\346\224\266\351\223\266\345\221\230\347\273\237\350\256\241\357\274\232", 0, QApplication::UnicodeUTF8));
        sellTime_stat_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\346\227\266\351\227\264\347\273\237\350\256\241\357\274\232", 0, QApplication::UnicodeUTF8));
        sellTimeStart_stat_sell_DTE->setDisplayFormat(QApplication::translate("SellClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("SellClass", "----", 0, QApplication::UnicodeUTF8));
        sellTimeEnd_stat_sell_DTE->setDisplayFormat(QApplication::translate("SellClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        sellAll_stat_sell_CKB->setText(QApplication::translate("SellClass", "\346\214\211\346\211\200\346\234\211\346\224\266\351\223\266\345\221\230\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        stat_stat_sell_BTN->setText(QApplication::translate("SellClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = sellInfo_depot_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SellClass", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = sellInfo_depot_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SellClass", "\346\224\266\351\223\266\345\221\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = sellInfo_depot_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SellClass", "\351\224\200\345\224\256\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = sellInfo_depot_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SellClass", "\351\224\200\345\224\256\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = sellInfo_depot_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SellClass", "\346\212\230\346\211\243", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = sellInfo_depot_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SellClass", "\344\274\232\345\221\230\346\212\230\346\211\243", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = sellInfo_depot_TBW->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SellClass", "\351\224\200\345\224\256\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sellInfo_depot_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        sellInfo_depot_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        sellInfo_depot_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_sell_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SellClass: public Ui_SellClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELL_H
