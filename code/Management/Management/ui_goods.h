/********************************************************************************
** Form generated from reading UI file 'goods.ui'
**
** Created: Fri Feb 18 20:15:34 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_H
#define UI_GOODS_H

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

class Ui_GoodsClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_92;
    QRadioButton *goodsID_search_goods_RBTN;
    QLineEdit *goodsID_search_goods_LE;
    QHBoxLayout *horizontalLayout_93;
    QRadioButton *goodsClass_search_goods_RBTN;
    QComboBox *goodsClass_search_goods_CB;
    QHBoxLayout *horizontalLayout_94;
    QRadioButton *goodsAll_search_goods_RBTN;
    QSpacerItem *horizontalSpacer_34;
    QPushButton *search_search_goods_BTN;
    QGroupBox *groupBox_27;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_54;
    QLineEdit *goodsID_modify_goods_LE;
    QPushButton *modify_modify_goods_BTN;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_55;
    QLineEdit *goodsID_del_goods_LE;
    QPushButton *del_modify_goods_BTN;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_modify_goods_BTN;
    QFrame *line_12;
    QTableWidget *associatorInfo_associator_TBW;
    QLabel *status_goods_LB;

    void setupUi(QDialog *GoodsClass)
    {
        if (GoodsClass->objectName().isEmpty())
            GoodsClass->setObjectName(QString::fromUtf8("GoodsClass"));
        GoodsClass->resize(800, 600);
        GoodsClass->setMinimumSize(QSize(800, 600));
        GoodsClass->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        GoodsClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        GoodsClass->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(GoodsClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(GoodsClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout_2->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_26 = new QGroupBox(GoodsClass);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        groupBox_26->setMinimumSize(QSize(0, 0));
        groupBox_26->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_26);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_92 = new QHBoxLayout();
        horizontalLayout_92->setObjectName(QString::fromUtf8("horizontalLayout_92"));
        goodsID_search_goods_RBTN = new QRadioButton(groupBox_26);
        goodsID_search_goods_RBTN->setObjectName(QString::fromUtf8("goodsID_search_goods_RBTN"));
        goodsID_search_goods_RBTN->setChecked(true);

        horizontalLayout_92->addWidget(goodsID_search_goods_RBTN);

        goodsID_search_goods_LE = new QLineEdit(groupBox_26);
        goodsID_search_goods_LE->setObjectName(QString::fromUtf8("goodsID_search_goods_LE"));

        horizontalLayout_92->addWidget(goodsID_search_goods_LE);


        verticalLayout_3->addLayout(horizontalLayout_92);

        horizontalLayout_93 = new QHBoxLayout();
        horizontalLayout_93->setObjectName(QString::fromUtf8("horizontalLayout_93"));
        goodsClass_search_goods_RBTN = new QRadioButton(groupBox_26);
        goodsClass_search_goods_RBTN->setObjectName(QString::fromUtf8("goodsClass_search_goods_RBTN"));
        goodsClass_search_goods_RBTN->setMaximumSize(QSize(119, 16777215));

        horizontalLayout_93->addWidget(goodsClass_search_goods_RBTN);

        goodsClass_search_goods_CB = new QComboBox(groupBox_26);
        goodsClass_search_goods_CB->setObjectName(QString::fromUtf8("goodsClass_search_goods_CB"));
        goodsClass_search_goods_CB->setEnabled(false);

        horizontalLayout_93->addWidget(goodsClass_search_goods_CB);


        verticalLayout_3->addLayout(horizontalLayout_93);

        horizontalLayout_94 = new QHBoxLayout();
        horizontalLayout_94->setObjectName(QString::fromUtf8("horizontalLayout_94"));
        goodsAll_search_goods_RBTN = new QRadioButton(groupBox_26);
        goodsAll_search_goods_RBTN->setObjectName(QString::fromUtf8("goodsAll_search_goods_RBTN"));

        horizontalLayout_94->addWidget(goodsAll_search_goods_RBTN);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_94->addItem(horizontalSpacer_34);

        search_search_goods_BTN = new QPushButton(groupBox_26);
        search_search_goods_BTN->setObjectName(QString::fromUtf8("search_search_goods_BTN"));

        horizontalLayout_94->addWidget(search_search_goods_BTN);


        verticalLayout_3->addLayout(horizontalLayout_94);


        horizontalLayout_4->addWidget(groupBox_26);

        groupBox_27 = new QGroupBox(GoodsClass);
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

        goodsID_modify_goods_LE = new QLineEdit(groupBox_27);
        goodsID_modify_goods_LE->setObjectName(QString::fromUtf8("goodsID_modify_goods_LE"));
        goodsID_modify_goods_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(goodsID_modify_goods_LE);

        modify_modify_goods_BTN = new QPushButton(groupBox_27);
        modify_modify_goods_BTN->setObjectName(QString::fromUtf8("modify_modify_goods_BTN"));

        horizontalLayout->addWidget(modify_modify_goods_BTN);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_55 = new QLabel(groupBox_27);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(label_55);

        goodsID_del_goods_LE = new QLineEdit(groupBox_27);
        goodsID_del_goods_LE->setObjectName(QString::fromUtf8("goodsID_del_goods_LE"));
        goodsID_del_goods_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(goodsID_del_goods_LE);

        del_modify_goods_BTN = new QPushButton(groupBox_27);
        del_modify_goods_BTN->setObjectName(QString::fromUtf8("del_modify_goods_BTN"));

        horizontalLayout_2->addWidget(del_modify_goods_BTN);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        add_modify_goods_BTN = new QPushButton(groupBox_27);
        add_modify_goods_BTN->setObjectName(QString::fromUtf8("add_modify_goods_BTN"));

        horizontalLayout_3->addWidget(add_modify_goods_BTN);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(groupBox_27);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_12 = new QFrame(GoodsClass);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShadow(QFrame::Sunken);
        line_12->setLineWidth(1);
        line_12->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_12);

        associatorInfo_associator_TBW = new QTableWidget(GoodsClass);
        if (associatorInfo_associator_TBW->columnCount() < 8)
            associatorInfo_associator_TBW->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        associatorInfo_associator_TBW->setObjectName(QString::fromUtf8("associatorInfo_associator_TBW"));
        associatorInfo_associator_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        associatorInfo_associator_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        associatorInfo_associator_TBW->horizontalHeader()->setStretchLastSection(true);
        associatorInfo_associator_TBW->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(associatorInfo_associator_TBW);

        status_goods_LB = new QLabel(GoodsClass);
        status_goods_LB->setObjectName(QString::fromUtf8("status_goods_LB"));

        verticalLayout_2->addWidget(status_goods_LB);


        retranslateUi(GoodsClass);

        QMetaObject::connectSlotsByName(GoodsClass);
    } // setupUi

    void retranslateUi(QDialog *GoodsClass)
    {
        GoodsClass->setWindowTitle(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox_26->setTitle(QApplication::translate("GoodsClass", "\346\237\245\347\234\213\345\225\206\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        goodsID_search_goods_RBTN->setText(QApplication::translate("GoodsClass", "\346\214\211\345\225\206\345\223\201\347\274\226\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsClass_search_goods_RBTN->setText(QApplication::translate("GoodsClass", "\346\214\211\345\225\206\345\223\201\347\261\273\345\210\253\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsAll_search_goods_RBTN->setText(QApplication::translate("GoodsClass", "\346\237\245\350\257\242\346\211\200\346\234\211\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        search_search_goods_BTN->setText(QApplication::translate("GoodsClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_27->setTitle(QApplication::translate("GoodsClass", "\344\277\256\346\224\271\345\225\206\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        modify_modify_goods_BTN->setText(QApplication::translate("GoodsClass", "\344\277\256\346\224\271\345\225\206\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        del_modify_goods_BTN->setText(QApplication::translate("GoodsClass", "\345\210\240\351\231\244\345\225\206\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        add_modify_goods_BTN->setText(QApplication::translate("GoodsClass", "\345\242\236\345\212\240\345\225\206\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = associatorInfo_associator_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = associatorInfo_associator_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = associatorInfo_associator_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GoodsClass", "\351\224\200\345\224\256\344\273\267\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = associatorInfo_associator_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\347\261\273\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = associatorInfo_associator_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GoodsClass", "\345\225\206\345\223\201\350\247\204\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = associatorInfo_associator_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("GoodsClass", "\346\210\220\346\234\254", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = associatorInfo_associator_TBW->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("GoodsClass", "\346\212\230\346\211\243", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = associatorInfo_associator_TBW->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("GoodsClass", "\344\274\232\345\221\230\346\212\230\346\211\243", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        associatorInfo_associator_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        associatorInfo_associator_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        associatorInfo_associator_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_goods_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GoodsClass: public Ui_GoodsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_H
