/********************************************************************************
** Form generated from reading UI file 'stock.ui'
**
** Created: Fri Feb 18 20:15:29 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_H
#define UI_STOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
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

class Ui_StockClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *importID_search_stock_RBTN;
    QLineEdit *importID_search_stock_LE;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *importTime_search_stock_RBTN;
    QHBoxLayout *horizontalLayout_13;
    QDateTimeEdit *importTimeStart_search_stock_DTE;
    QLabel *label_12;
    QDateTimeEdit *importTimeEnd_search_stock_DTE;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *importAll_search_stock_RBTN;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *search_search_stock_BTN;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_16;
    QLineEdit *importID_import_stock_LE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *goodsCount_import_stock_LE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *goodsID_import_stock_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QLineEdit *goodsSpecs_import_stock_LE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *goodsPrice_import_stock_LE;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *goodsSource_import_stock_LE;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QDateTimeEdit *goodsTime_import_stock_DTE;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *import_import_stock_BTN;
    QFrame *line_2;
    QTableWidget *goodsInfo_stock_TBW;
    QLabel *status_stock_LB;

    void setupUi(QDialog *StockClass)
    {
        if (StockClass->objectName().isEmpty())
            StockClass->setObjectName(QString::fromUtf8("StockClass"));
        StockClass->resize(800, 602);
        StockClass->setMinimumSize(QSize(800, 602));
        StockClass->setMaximumSize(QSize(800, 602));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        StockClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        StockClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(StockClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(StockClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_4 = new QGroupBox(StockClass);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 163));
        groupBox_4->setMaximumSize(QSize(350, 16777215));
        verticalLayout_13 = new QVBoxLayout(groupBox_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        importID_search_stock_RBTN = new QRadioButton(groupBox_4);
        importID_search_stock_RBTN->setObjectName(QString::fromUtf8("importID_search_stock_RBTN"));
        importID_search_stock_RBTN->setChecked(true);

        horizontalLayout_17->addWidget(importID_search_stock_RBTN);

        importID_search_stock_LE = new QLineEdit(groupBox_4);
        importID_search_stock_LE->setObjectName(QString::fromUtf8("importID_search_stock_LE"));

        horizontalLayout_17->addWidget(importID_search_stock_LE);


        verticalLayout_13->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        importTime_search_stock_RBTN = new QRadioButton(groupBox_4);
        importTime_search_stock_RBTN->setObjectName(QString::fromUtf8("importTime_search_stock_RBTN"));

        horizontalLayout_18->addWidget(importTime_search_stock_RBTN);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        importTimeStart_search_stock_DTE = new QDateTimeEdit(groupBox_4);
        importTimeStart_search_stock_DTE->setObjectName(QString::fromUtf8("importTimeStart_search_stock_DTE"));
        importTimeStart_search_stock_DTE->setEnabled(false);

        horizontalLayout_13->addWidget(importTimeStart_search_stock_DTE);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_13->addWidget(label_12);

        importTimeEnd_search_stock_DTE = new QDateTimeEdit(groupBox_4);
        importTimeEnd_search_stock_DTE->setObjectName(QString::fromUtf8("importTimeEnd_search_stock_DTE"));
        importTimeEnd_search_stock_DTE->setEnabled(false);
        importTimeEnd_search_stock_DTE->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(23, 59, 59)));

        horizontalLayout_13->addWidget(importTimeEnd_search_stock_DTE);


        horizontalLayout_18->addLayout(horizontalLayout_13);


        verticalLayout_13->addLayout(horizontalLayout_18);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        importAll_search_stock_RBTN = new QRadioButton(groupBox_4);
        importAll_search_stock_RBTN->setObjectName(QString::fromUtf8("importAll_search_stock_RBTN"));

        horizontalLayout_14->addWidget(importAll_search_stock_RBTN);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);

        search_search_stock_BTN = new QPushButton(groupBox_4);
        search_search_stock_BTN->setObjectName(QString::fromUtf8("search_search_stock_BTN"));

        horizontalLayout_14->addWidget(search_search_stock_BTN);


        verticalLayout_13->addLayout(horizontalLayout_14);


        horizontalLayout_7->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(StockClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 163));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout->addWidget(label_16);

        importID_import_stock_LE = new QLineEdit(groupBox_3);
        importID_import_stock_LE->setObjectName(QString::fromUtf8("importID_import_stock_LE"));

        horizontalLayout->addWidget(importID_import_stock_LE);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        goodsCount_import_stock_LE = new QLineEdit(groupBox_3);
        goodsCount_import_stock_LE->setObjectName(QString::fromUtf8("goodsCount_import_stock_LE"));

        horizontalLayout_4->addWidget(goodsCount_import_stock_LE);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        goodsID_import_stock_LE = new QLineEdit(groupBox_3);
        goodsID_import_stock_LE->setObjectName(QString::fromUtf8("goodsID_import_stock_LE"));

        horizontalLayout_2->addWidget(goodsID_import_stock_LE);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(84, 0));

        horizontalLayout_5->addWidget(label_13);

        goodsSpecs_import_stock_LE = new QLineEdit(groupBox_3);
        goodsSpecs_import_stock_LE->setObjectName(QString::fromUtf8("goodsSpecs_import_stock_LE"));
        goodsSpecs_import_stock_LE->setEnabled(false);

        horizontalLayout_5->addWidget(goodsSpecs_import_stock_LE);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        goodsPrice_import_stock_LE = new QLineEdit(groupBox_3);
        goodsPrice_import_stock_LE->setObjectName(QString::fromUtf8("goodsPrice_import_stock_LE"));

        horizontalLayout_3->addWidget(goodsPrice_import_stock_LE);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(84, 0));

        horizontalLayout_6->addWidget(label_11);

        goodsSource_import_stock_LE = new QLineEdit(groupBox_3);
        goodsSource_import_stock_LE->setObjectName(QString::fromUtf8("goodsSource_import_stock_LE"));

        horizontalLayout_6->addWidget(goodsSource_import_stock_LE);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        goodsTime_import_stock_DTE = new QDateTimeEdit(groupBox_3);
        goodsTime_import_stock_DTE->setObjectName(QString::fromUtf8("goodsTime_import_stock_DTE"));
        goodsTime_import_stock_DTE->setEnabled(false);
        goodsTime_import_stock_DTE->setMinimumSize(QSize(120, 0));

        horizontalLayout_8->addWidget(goodsTime_import_stock_DTE);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);

        import_import_stock_BTN = new QPushButton(groupBox_3);
        import_import_stock_BTN->setObjectName(QString::fromUtf8("import_import_stock_BTN"));

        horizontalLayout_15->addWidget(import_import_stock_BTN);


        horizontalLayout_8->addLayout(horizontalLayout_15);


        gridLayout->addLayout(horizontalLayout_8, 3, 0, 1, 2);


        horizontalLayout_7->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_7);

        line_2 = new QFrame(StockClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        goodsInfo_stock_TBW = new QTableWidget(StockClass);
        if (goodsInfo_stock_TBW->columnCount() < 9)
            goodsInfo_stock_TBW->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        goodsInfo_stock_TBW->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        goodsInfo_stock_TBW->setObjectName(QString::fromUtf8("goodsInfo_stock_TBW"));
        goodsInfo_stock_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        goodsInfo_stock_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        goodsInfo_stock_TBW->horizontalHeader()->setStretchLastSection(true);
        goodsInfo_stock_TBW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(goodsInfo_stock_TBW);

        status_stock_LB = new QLabel(StockClass);
        status_stock_LB->setObjectName(QString::fromUtf8("status_stock_LB"));

        verticalLayout->addWidget(status_stock_LB);


        retranslateUi(StockClass);

        QMetaObject::connectSlotsByName(StockClass);
    } // setupUi

    void retranslateUi(QDialog *StockClass)
    {
        StockClass->setWindowTitle(QApplication::translate("StockClass", "\350\277\233\350\264\247\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox_4->setTitle(QApplication::translate("StockClass", "\350\277\233\350\264\247\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        importID_search_stock_RBTN->setText(QApplication::translate("StockClass", "\346\214\211\350\277\233\350\264\247\345\215\225\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        importTime_search_stock_RBTN->setText(QApplication::translate("StockClass", "\346\214\211\350\277\233\350\264\247\346\227\266\351\227\264\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        importTimeStart_search_stock_DTE->setDisplayFormat(QApplication::translate("StockClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("StockClass", "----", 0, QApplication::UnicodeUTF8));
        importTimeEnd_search_stock_DTE->setDisplayFormat(QApplication::translate("StockClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        importAll_search_stock_RBTN->setText(QApplication::translate("StockClass", "\346\211\200\346\234\211\350\277\233\350\264\247\344\272\244\346\230\223\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        search_search_stock_BTN->setText(QApplication::translate("StockClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("StockClass", "\345\225\206\345\223\201\350\277\233\350\264\247", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("StockClass", "\350\277\233\350\264\247\345\215\225\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        importID_import_stock_LE->setText(QString());
        label_8->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\350\277\233\350\264\247\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\350\277\233\350\264\247\345\221\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("StockClass", "\350\277\233\344\273\267(\357\277\245)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\344\276\233\345\272\224\345\225\206\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("StockClass", "\350\277\233\350\264\247\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsTime_import_stock_DTE->setDisplayFormat(QApplication::translate("StockClass", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        import_import_stock_BTN->setText(QApplication::translate("StockClass", "\347\241\256\350\256\244\350\277\233\350\264\247", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = goodsInfo_stock_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StockClass", "\350\277\233\350\264\247\345\215\225\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = goodsInfo_stock_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = goodsInfo_stock_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = goodsInfo_stock_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\350\277\233\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = goodsInfo_stock_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("StockClass", "\345\225\206\345\223\201\350\247\204\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = goodsInfo_stock_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("StockClass", "\350\277\233\350\264\247\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = goodsInfo_stock_TBW->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("StockClass", "\350\277\233\350\264\247\345\221\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = goodsInfo_stock_TBW->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("StockClass", "\344\276\233\345\272\224\345\225\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = goodsInfo_stock_TBW->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("StockClass", "\350\277\233\350\264\247\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        goodsInfo_stock_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        goodsInfo_stock_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        goodsInfo_stock_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_stock_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StockClass: public Ui_StockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_H
