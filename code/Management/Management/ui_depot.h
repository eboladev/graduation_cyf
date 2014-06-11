/********************************************************************************
** Form generated from reading UI file 'depot.ui'
**
** Created: Fri Feb 18 20:15:36 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOT_H
#define UI_DEPOT_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepotClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *goodsID_search_depot_RBTN;
    QLineEdit *goodsID_search_depot_LE;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *goodsClass_search_depot_RBTN;
    QComboBox *goodsClass_search_depot_CB;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *goodsCount_search_depot_RBTN;
    QLineEdit *goodsHaveStart_search_depot_LE;
    QLabel *label_2;
    QLineEdit *goodsHaveEnd_search_depot_LE;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *goodsAll_search_depot_RBTN;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_search_depot_BTN;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *goodsID_modify_depot_LE;
    QLineEdit *goodsSelledCount_modify_depot_LE;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *help_modify_depot_LB;
    QPushButton *modify_modify_depot_BTN;
    QFrame *line;
    QTableWidget *goodsInfo_depot_TBW;
    QLabel *status_depot_LB;

    void setupUi(QDialog *DepotClass)
    {
        if (DepotClass->objectName().isEmpty())
            DepotClass->setObjectName(QString::fromUtf8("DepotClass"));
        DepotClass->resize(800, 602);
        DepotClass->setMinimumSize(QSize(800, 602));
        DepotClass->setMaximumSize(QSize(800, 602));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        DepotClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DepotClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DepotClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DepotClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout->addWidget(label);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        groupBox = new QGroupBox(DepotClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(365, 16777215));
        groupBox->setSizeIncrement(QSize(0, 0));
        groupBox->setBaseSize(QSize(373, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        goodsID_search_depot_RBTN = new QRadioButton(groupBox);
        goodsID_search_depot_RBTN->setObjectName(QString::fromUtf8("goodsID_search_depot_RBTN"));
        goodsID_search_depot_RBTN->setChecked(true);

        horizontalLayout->addWidget(goodsID_search_depot_RBTN);

        goodsID_search_depot_LE = new QLineEdit(groupBox);
        goodsID_search_depot_LE->setObjectName(QString::fromUtf8("goodsID_search_depot_LE"));
        goodsID_search_depot_LE->setMinimumSize(QSize(0, 0));
        goodsID_search_depot_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(goodsID_search_depot_LE);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        goodsClass_search_depot_RBTN = new QRadioButton(groupBox);
        goodsClass_search_depot_RBTN->setObjectName(QString::fromUtf8("goodsClass_search_depot_RBTN"));
        goodsClass_search_depot_RBTN->setMaximumSize(QSize(143, 16777215));

        horizontalLayout_4->addWidget(goodsClass_search_depot_RBTN);

        goodsClass_search_depot_CB = new QComboBox(groupBox);
        goodsClass_search_depot_CB->setObjectName(QString::fromUtf8("goodsClass_search_depot_CB"));
        goodsClass_search_depot_CB->setEnabled(false);

        horizontalLayout_4->addWidget(goodsClass_search_depot_CB);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        goodsCount_search_depot_RBTN = new QRadioButton(groupBox);
        goodsCount_search_depot_RBTN->setObjectName(QString::fromUtf8("goodsCount_search_depot_RBTN"));

        horizontalLayout_6->addWidget(goodsCount_search_depot_RBTN);

        goodsHaveStart_search_depot_LE = new QLineEdit(groupBox);
        goodsHaveStart_search_depot_LE->setObjectName(QString::fromUtf8("goodsHaveStart_search_depot_LE"));
        goodsHaveStart_search_depot_LE->setEnabled(false);
        goodsHaveStart_search_depot_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(goodsHaveStart_search_depot_LE);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        goodsHaveEnd_search_depot_LE = new QLineEdit(groupBox);
        goodsHaveEnd_search_depot_LE->setObjectName(QString::fromUtf8("goodsHaveEnd_search_depot_LE"));
        goodsHaveEnd_search_depot_LE->setEnabled(false);
        goodsHaveEnd_search_depot_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(goodsHaveEnd_search_depot_LE);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        goodsAll_search_depot_RBTN = new QRadioButton(groupBox);
        goodsAll_search_depot_RBTN->setObjectName(QString::fromUtf8("goodsAll_search_depot_RBTN"));

        horizontalLayout_5->addWidget(goodsAll_search_depot_RBTN);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        search_search_depot_BTN = new QPushButton(groupBox);
        search_search_depot_BTN->setObjectName(QString::fromUtf8("search_search_depot_BTN"));

        horizontalLayout_5->addWidget(search_search_depot_BTN);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_11->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DepotClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(12);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        goodsID_modify_depot_LE = new QLineEdit(groupBox_2);
        goodsID_modify_depot_LE->setObjectName(QString::fromUtf8("goodsID_modify_depot_LE"));
        goodsID_modify_depot_LE->setMinimumSize(QSize(0, 0));
        goodsID_modify_depot_LE->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(goodsID_modify_depot_LE);

        goodsSelledCount_modify_depot_LE = new QLineEdit(groupBox_2);
        goodsSelledCount_modify_depot_LE->setObjectName(QString::fromUtf8("goodsSelledCount_modify_depot_LE"));
        goodsSelledCount_modify_depot_LE->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(goodsSelledCount_modify_depot_LE);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        help_modify_depot_LB = new QLabel(groupBox_2);
        help_modify_depot_LB->setObjectName(QString::fromUtf8("help_modify_depot_LB"));
        help_modify_depot_LB->setCursor(QCursor(Qt::PointingHandCursor));
        help_modify_depot_LB->setPixmap(QPixmap(QString::fromUtf8(":/Management/Resources/help.gif")));

        horizontalLayout_3->addWidget(help_modify_depot_LB);

        modify_modify_depot_BTN = new QPushButton(groupBox_2);
        modify_modify_depot_BTN->setObjectName(QString::fromUtf8("modify_modify_depot_BTN"));

        horizontalLayout_3->addWidget(modify_modify_depot_BTN);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_11->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout_11);

        line = new QFrame(DepotClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        goodsInfo_depot_TBW = new QTableWidget(DepotClass);
        if (goodsInfo_depot_TBW->columnCount() < 7)
            goodsInfo_depot_TBW->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        goodsInfo_depot_TBW->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        goodsInfo_depot_TBW->setObjectName(QString::fromUtf8("goodsInfo_depot_TBW"));
        goodsInfo_depot_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        goodsInfo_depot_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        goodsInfo_depot_TBW->horizontalHeader()->setVisible(true);
        goodsInfo_depot_TBW->horizontalHeader()->setStretchLastSection(true);
        goodsInfo_depot_TBW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(goodsInfo_depot_TBW);

        status_depot_LB = new QLabel(DepotClass);
        status_depot_LB->setObjectName(QString::fromUtf8("status_depot_LB"));

        verticalLayout->addWidget(status_depot_LB);


        retranslateUi(DepotClass);

        QMetaObject::connectSlotsByName(DepotClass);
    } // setupUi

    void retranslateUi(QDialog *DepotClass)
    {
        DepotClass->setWindowTitle(QApplication::translate("DepotClass", "\345\272\223\345\255\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("DepotClass", "\346\237\245\350\257\242\345\272\223\345\255\230", 0, QApplication::UnicodeUTF8));
        goodsID_search_depot_RBTN->setText(QApplication::translate("DepotClass", "\346\214\211\345\272\223\345\255\230\345\225\206\345\223\201\347\274\226\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsClass_search_depot_RBTN->setText(QApplication::translate("DepotClass", "\346\214\211\345\272\223\345\255\230\345\225\206\345\223\201\347\261\273\345\210\253\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsCount_search_depot_RBTN->setText(QApplication::translate("DepotClass", "\346\214\211\345\272\223\345\255\230\346\225\260\351\207\217\350\214\203\345\233\264\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DepotClass", "----", 0, QApplication::UnicodeUTF8));
        goodsAll_search_depot_RBTN->setText(QApplication::translate("DepotClass", "\346\211\200\346\234\211\345\225\206\345\223\201\345\272\223\345\255\230\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        search_search_depot_BTN->setText(QApplication::translate("DepotClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DepotClass", "\344\277\256\346\224\271\345\272\223\345\255\230", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DepotClass", "\345\225\206\345\223\201\347\274\226\345\217\267/\346\235\241\345\275\242\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DepotClass", "\345\267\262\351\224\200\345\224\256\346\227\240\345\272\223\345\255\230\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        help_modify_depot_LB->setText(QString());
        modify_modify_depot_BTN->setText(QApplication::translate("DepotClass", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = goodsInfo_depot_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DepotClass", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = goodsInfo_depot_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DepotClass", "\345\225\206\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = goodsInfo_depot_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DepotClass", "\345\225\206\345\223\201\345\215\225\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = goodsInfo_depot_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DepotClass", "\345\225\206\345\223\201\347\261\273\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = goodsInfo_depot_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DepotClass", "\345\225\206\345\223\201\350\247\204\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = goodsInfo_depot_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DepotClass", "\345\272\223\345\255\230\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = goodsInfo_depot_TBW->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DepotClass", "\345\267\262\351\224\200\345\224\256\346\227\240\345\272\223\345\255\230\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        goodsInfo_depot_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        goodsInfo_depot_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        goodsInfo_depot_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_depot_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DepotClass: public Ui_DepotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOT_H
