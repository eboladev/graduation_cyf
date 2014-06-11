/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created: Sun Jan 23 12:07:35 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientClass
{
public:
    QAction *dealWithNet_MU;
    QAction *dealWithoutNet_MU;
    QAction *action_3;
    QAction *action_4;
    QAction *about_MU;
    QAction *quit_MU;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *goodsID_LE;
    QLabel *label_2;
    QLineEdit *goodsCount_LE;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertList_BTN;
    QTableWidget *goodsList_TBW;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *associatorID_LE;
    QLabel *assStatus_LB;
    QSpacerItem *horizontalSpacer;
    QPushButton *modifyList_BTN;
    QPushButton *delGoods_BTN;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *goodsTotleMoney_LB;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *shouldReceiveMoney_LB;
    QHBoxLayout *horizontalLayout_4;
    QLabel *goodsTotleMoney_2;
    QLineEdit *receiveMoney_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *goodsTotleMoney_3;
    QLabel *shouldBackMoney_LB;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QCommandLinkButton *calMoney_CLBTN;
    QLabel *label_7;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientClass)
    {
        if (ClientClass->objectName().isEmpty())
            ClientClass->setObjectName(QString::fromUtf8("ClientClass"));
        ClientClass->resize(980, 653);
        ClientClass->setMinimumSize(QSize(1, 1));
        ClientClass->setMaximumSize(QSize(16777215, 700));
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
        ClientClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ClientClass->setWindowIcon(icon);
        dealWithNet_MU = new QAction(ClientClass);
        dealWithNet_MU->setObjectName(QString::fromUtf8("dealWithNet_MU"));
        dealWithNet_MU->setCheckable(true);
        dealWithNet_MU->setChecked(true);
        dealWithoutNet_MU = new QAction(ClientClass);
        dealWithoutNet_MU->setObjectName(QString::fromUtf8("dealWithoutNet_MU"));
        dealWithoutNet_MU->setCheckable(true);
        action_3 = new QAction(ClientClass);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(ClientClass);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        about_MU = new QAction(ClientClass);
        about_MU->setObjectName(QString::fromUtf8("about_MU"));
        quit_MU = new QAction(ClientClass);
        quit_MU->setObjectName(QString::fromUtf8("quit_MU"));
        centralWidget = new QWidget(ClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 90));
        label_8->setMaximumSize(QSize(16777215, 90));
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        goodsID_LE = new QLineEdit(centralWidget);
        goodsID_LE->setObjectName(QString::fromUtf8("goodsID_LE"));
        goodsID_LE->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(goodsID_LE);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        goodsCount_LE = new QLineEdit(centralWidget);
        goodsCount_LE->setObjectName(QString::fromUtf8("goodsCount_LE"));
        goodsCount_LE->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(goodsCount_LE);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        insertList_BTN = new QPushButton(centralWidget);
        insertList_BTN->setObjectName(QString::fromUtf8("insertList_BTN"));
        insertList_BTN->setEnabled(true);

        horizontalLayout->addWidget(insertList_BTN);


        verticalLayout_2->addLayout(horizontalLayout);

        goodsList_TBW = new QTableWidget(centralWidget);
        if (goodsList_TBW->columnCount() < 7)
            goodsList_TBW->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        goodsList_TBW->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        goodsList_TBW->setObjectName(QString::fromUtf8("goodsList_TBW"));
        goodsList_TBW->setMinimumSize(QSize(0, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        goodsList_TBW->setPalette(palette1);
        goodsList_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        goodsList_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        goodsList_TBW->setShowGrid(true);
        goodsList_TBW->setGridStyle(Qt::SolidLine);
        goodsList_TBW->setSortingEnabled(false);
        goodsList_TBW->setColumnCount(7);
        goodsList_TBW->horizontalHeader()->setVisible(true);
        goodsList_TBW->horizontalHeader()->setCascadingSectionResizes(false);
        goodsList_TBW->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(goodsList_TBW);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        associatorID_LE = new QLineEdit(centralWidget);
        associatorID_LE->setObjectName(QString::fromUtf8("associatorID_LE"));
        associatorID_LE->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(associatorID_LE);

        assStatus_LB = new QLabel(centralWidget);
        assStatus_LB->setObjectName(QString::fromUtf8("assStatus_LB"));

        horizontalLayout_2->addWidget(assStatus_LB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        modifyList_BTN = new QPushButton(centralWidget);
        modifyList_BTN->setObjectName(QString::fromUtf8("modifyList_BTN"));

        horizontalLayout_2->addWidget(modifyList_BTN);

        delGoods_BTN = new QPushButton(centralWidget);
        delGoods_BTN->setObjectName(QString::fromUtf8("delGoods_BTN"));
        delGoods_BTN->setEnabled(false);

        horizontalLayout_2->addWidget(delGoods_BTN);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(26);
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        goodsTotleMoney_LB = new QLabel(centralWidget);
        goodsTotleMoney_LB->setObjectName(QString::fromUtf8("goodsTotleMoney_LB"));
        goodsTotleMoney_LB->setMaximumSize(QSize(16777215, 50));
        goodsTotleMoney_LB->setFont(font);

        horizontalLayout_6->addWidget(goodsTotleMoney_LB);

        horizontalSpacer_3 = new QSpacerItem(29, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(96, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        shouldReceiveMoney_LB = new QLabel(centralWidget);
        shouldReceiveMoney_LB->setObjectName(QString::fromUtf8("shouldReceiveMoney_LB"));
        shouldReceiveMoney_LB->setMinimumSize(QSize(120, 0));
        shouldReceiveMoney_LB->setMaximumSize(QSize(16777215, 30));
        shouldReceiveMoney_LB->setFont(font1);

        horizontalLayout_3->addWidget(shouldReceiveMoney_LB);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        goodsTotleMoney_2 = new QLabel(centralWidget);
        goodsTotleMoney_2->setObjectName(QString::fromUtf8("goodsTotleMoney_2"));
        goodsTotleMoney_2->setMaximumSize(QSize(96, 30));
        goodsTotleMoney_2->setFont(font1);

        horizontalLayout_4->addWidget(goodsTotleMoney_2);

        receiveMoney_LE = new QLineEdit(centralWidget);
        receiveMoney_LE->setObjectName(QString::fromUtf8("receiveMoney_LE"));
        receiveMoney_LE->setMinimumSize(QSize(120, 0));
        receiveMoney_LE->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(receiveMoney_LE);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        goodsTotleMoney_3 = new QLabel(centralWidget);
        goodsTotleMoney_3->setObjectName(QString::fromUtf8("goodsTotleMoney_3"));
        goodsTotleMoney_3->setMaximumSize(QSize(96, 30));
        goodsTotleMoney_3->setFont(font1);

        horizontalLayout_5->addWidget(goodsTotleMoney_3);

        shouldBackMoney_LB = new QLabel(centralWidget);
        shouldBackMoney_LB->setObjectName(QString::fromUtf8("shouldBackMoney_LB"));
        shouldBackMoney_LB->setMinimumSize(QSize(120, 0));
        shouldBackMoney_LB->setMaximumSize(QSize(16777215, 30));
        shouldBackMoney_LB->setFont(font1);

        horizontalLayout_5->addWidget(shouldBackMoney_LB);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        calMoney_CLBTN = new QCommandLinkButton(centralWidget);
        calMoney_CLBTN->setObjectName(QString::fromUtf8("calMoney_CLBTN"));
        calMoney_CLBTN->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calMoney_CLBTN->sizePolicy().hasHeightForWidth());
        calMoney_CLBTN->setSizePolicy(sizePolicy);
        calMoney_CLBTN->setMaximumSize(QSize(85, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(14);
        calMoney_CLBTN->setFont(font2);
        calMoney_CLBTN->setCursor(QCursor(Qt::PointingHandCursor));
        calMoney_CLBTN->setContextMenuPolicy(Qt::DefaultContextMenu);
        calMoney_CLBTN->setLayoutDirection(Qt::LeftToRight);
        calMoney_CLBTN->setIconSize(QSize(20, 20));
        calMoney_CLBTN->setCheckable(false);
        calMoney_CLBTN->setAutoRepeat(false);
        calMoney_CLBTN->setAutoExclusive(false);
        calMoney_CLBTN->setAutoDefault(false);
        calMoney_CLBTN->setDefault(false);

        verticalLayout_3->addWidget(calMoney_CLBTN);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_6);

        ClientClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ClientClass->setStatusBar(statusBar);

        retranslateUi(ClientClass);

        QMetaObject::connectSlotsByName(ClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClientClass)
    {
        ClientClass->setWindowTitle(QApplication::translate("ClientClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        dealWithNet_MU->setText(QApplication::translate("ClientClass", "\350\201\224\347\275\221\344\272\244\346\230\223", 0, QApplication::UnicodeUTF8));
        dealWithoutNet_MU->setText(QApplication::translate("ClientClass", "\346\226\255\347\275\221\344\272\244\346\230\223", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("ClientClass", "\345\215\263\346\227\266\344\272\244\346\230\223", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("ClientClass", "\345\272\223\345\255\230\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        about_MU->setText(QApplication::translate("ClientClass", "\345\205\263\344\272\216\346\255\244\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        quit_MU->setText(QApplication::translate("ClientClass", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        label->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\347\274\226\345\217\267/\346\235\241\345\275\242\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ClientClass", "\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsCount_LE->setText(QApplication::translate("ClientClass", "1", 0, QApplication::UnicodeUTF8));
        insertList_BTN->setText(QApplication::translate("ClientClass", "\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = goodsList_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = goodsList_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = goodsList_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = goodsList_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\350\247\204\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = goodsList_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\345\215\225\344\273\267(\345\205\203)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = goodsList_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ClientClass", "\346\212\230\346\211\243(%)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = goodsList_TBW->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ClientClass", "\344\274\232\345\221\230\346\212\230\346\211\243(%)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ClientClass", "\344\274\232\345\221\230\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        assStatus_LB->setText(QApplication::translate("ClientClass", "\344\274\232\345\221\230\345\215\241\347\212\266\346\200\201\357\274\232\346\227\240\346\225\210", 0, QApplication::UnicodeUTF8));
        modifyList_BTN->setText(QApplication::translate("ClientClass", "\344\277\256\346\224\271\346\270\205\345\215\225", 0, QApplication::UnicodeUTF8));
        delGoods_BTN->setText(QApplication::translate("ClientClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ClientClass", "\344\272\244\346\230\223\346\200\273\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        goodsTotleMoney_LB->setText(QApplication::translate("ClientClass", "0.00", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ClientClass", "\345\272\224\346\224\266\351\207\221\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        shouldReceiveMoney_LB->setText(QApplication::translate("ClientClass", "0.00", 0, QApplication::UnicodeUTF8));
        goodsTotleMoney_2->setText(QApplication::translate("ClientClass", "\345\256\236\346\224\266\351\207\221\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        receiveMoney_LE->setText(QString());
        goodsTotleMoney_3->setText(QApplication::translate("ClientClass", "\345\272\224\346\211\276\351\207\221\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        shouldBackMoney_LB->setText(QApplication::translate("ClientClass", "0.00", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        calMoney_CLBTN->setText(QApplication::translate("ClientClass", "\347\273\223\350\264\246", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientClass: public Ui_ClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
