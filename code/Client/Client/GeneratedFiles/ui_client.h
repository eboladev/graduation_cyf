/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created: Fri Dec 3 01:07:53 2010
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
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *goodsID;
    QLabel *label_2;
    QLineEdit *goodsCount;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertList;
    QTableWidget *goodsList;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *associatorID;
    QSpacerItem *horizontalSpacer;
    QPushButton *modifyList;
    QPushButton *delGoods;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *goodsTotleMoney;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *shouldReceiveMoney;
    QHBoxLayout *horizontalLayout_4;
    QLabel *goodsTotleMoney_2;
    QLineEdit *ReceiveMoney;
    QHBoxLayout *horizontalLayout_5;
    QLabel *goodsTotleMoney_3;
    QLabel *shouldBackMoney;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QCommandLinkButton *commandLinkButton;
    QLabel *label_7;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientClass)
    {
        if (ClientClass->objectName().isEmpty())
            ClientClass->setObjectName(QString::fromUtf8("ClientClass"));
        ClientClass->resize(899, 622);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Client/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ClientClass->setWindowIcon(icon);
        centralWidget = new QWidget(ClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(true);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_4 = new QVBoxLayout(tab_1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        goodsID = new QLineEdit(tab_1);
        goodsID->setObjectName(QString::fromUtf8("goodsID"));
        goodsID->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(goodsID);

        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        goodsCount = new QLineEdit(tab_1);
        goodsCount->setObjectName(QString::fromUtf8("goodsCount"));
        goodsCount->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(goodsCount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        insertList = new QPushButton(tab_1);
        insertList->setObjectName(QString::fromUtf8("insertList"));
        insertList->setEnabled(false);

        horizontalLayout->addWidget(insertList);


        verticalLayout_4->addLayout(horizontalLayout);

        goodsList = new QTableWidget(tab_1);
        if (goodsList->columnCount() < 5)
            goodsList->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        goodsList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        goodsList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        goodsList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        goodsList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        goodsList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        goodsList->setObjectName(QString::fromUtf8("goodsList"));
        goodsList->setMinimumSize(QSize(0, 0));
        goodsList->setShowGrid(true);
        goodsList->setGridStyle(Qt::SolidLine);
        goodsList->setColumnCount(5);
        goodsList->horizontalHeader()->setVisible(true);
        goodsList->horizontalHeader()->setCascadingSectionResizes(false);
        goodsList->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(goodsList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(tab_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        associatorID = new QLineEdit(tab_1);
        associatorID->setObjectName(QString::fromUtf8("associatorID"));
        associatorID->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(associatorID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        modifyList = new QPushButton(tab_1);
        modifyList->setObjectName(QString::fromUtf8("modifyList"));

        horizontalLayout_2->addWidget(modifyList);

        delGoods = new QPushButton(tab_1);
        delGoods->setObjectName(QString::fromUtf8("delGoods"));
        delGoods->setEnabled(false);

        horizontalLayout_2->addWidget(delGoods);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(tab_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(26);
        label_4->setFont(font);

        horizontalLayout_6->addWidget(label_4);

        goodsTotleMoney = new QLabel(tab_1);
        goodsTotleMoney->setObjectName(QString::fromUtf8("goodsTotleMoney"));
        goodsTotleMoney->setMaximumSize(QSize(16777215, 50));
        goodsTotleMoney->setFont(font);

        horizontalLayout_6->addWidget(goodsTotleMoney);

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
        label_5 = new QLabel(tab_1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(96, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        shouldReceiveMoney = new QLabel(tab_1);
        shouldReceiveMoney->setObjectName(QString::fromUtf8("shouldReceiveMoney"));
        shouldReceiveMoney->setMaximumSize(QSize(16777215, 30));
        shouldReceiveMoney->setFont(font1);

        horizontalLayout_3->addWidget(shouldReceiveMoney);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        goodsTotleMoney_2 = new QLabel(tab_1);
        goodsTotleMoney_2->setObjectName(QString::fromUtf8("goodsTotleMoney_2"));
        goodsTotleMoney_2->setMaximumSize(QSize(96, 30));
        goodsTotleMoney_2->setFont(font1);

        horizontalLayout_4->addWidget(goodsTotleMoney_2);

        ReceiveMoney = new QLineEdit(tab_1);
        ReceiveMoney->setObjectName(QString::fromUtf8("ReceiveMoney"));

        horizontalLayout_4->addWidget(ReceiveMoney);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        goodsTotleMoney_3 = new QLabel(tab_1);
        goodsTotleMoney_3->setObjectName(QString::fromUtf8("goodsTotleMoney_3"));
        goodsTotleMoney_3->setMaximumSize(QSize(96, 30));
        goodsTotleMoney_3->setFont(font1);

        horizontalLayout_5->addWidget(goodsTotleMoney_3);

        shouldBackMoney = new QLabel(tab_1);
        shouldBackMoney->setObjectName(QString::fromUtf8("shouldBackMoney"));
        shouldBackMoney->setMaximumSize(QSize(16777215, 30));
        shouldBackMoney->setFont(font1);

        horizontalLayout_5->addWidget(shouldBackMoney);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(tab_1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        commandLinkButton = new QCommandLinkButton(tab_1);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(commandLinkButton->sizePolicy().hasHeightForWidth());
        commandLinkButton->setSizePolicy(sizePolicy);
        commandLinkButton->setMaximumSize(QSize(85, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(14);
        commandLinkButton->setFont(font2);
        commandLinkButton->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        commandLinkButton->setLayoutDirection(Qt::LeftToRight);
        commandLinkButton->setIconSize(QSize(20, 20));
        commandLinkButton->setCheckable(false);
        commandLinkButton->setAutoRepeat(false);
        commandLinkButton->setAutoExclusive(false);
        commandLinkButton->setAutoDefault(false);
        commandLinkButton->setDefault(false);

        verticalLayout_3->addWidget(commandLinkButton);

        label_7 = new QLabel(tab_1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        ClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ClientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 899, 23));
        ClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ClientClass->setStatusBar(statusBar);

        retranslateUi(ClientClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClientClass)
    {
        ClientClass->setWindowTitle(QApplication::translate("ClientClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\351\224\200\345\224\256\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\347\274\226\345\217\267/\346\235\241\345\275\242\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ClientClass", "\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsCount->setText(QApplication::translate("ClientClass", "1", 0, QApplication::UnicodeUTF8));
        insertList->setText(QApplication::translate("ClientClass", "\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = goodsList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = goodsList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = goodsList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ClientClass", "\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = goodsList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ClientClass", "\345\215\225\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = goodsList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ClientClass", "\346\212\230\346\211\243", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ClientClass", "\344\274\232\345\221\230\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        modifyList->setText(QApplication::translate("ClientClass", "\344\277\256\346\224\271\346\270\205\345\215\225", 0, QApplication::UnicodeUTF8));
        delGoods->setText(QApplication::translate("ClientClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ClientClass", "\344\272\244\346\230\223\346\200\273\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        goodsTotleMoney->setText(QApplication::translate("ClientClass", "\345\225\206\345\223\201\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ClientClass", "\345\272\224\346\224\266\351\207\221\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        shouldReceiveMoney->setText(QApplication::translate("ClientClass", "\345\272\224\346\224\266\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        goodsTotleMoney_2->setText(QApplication::translate("ClientClass", "\345\256\236\346\224\266\351\207\221\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        goodsTotleMoney_3->setText(QApplication::translate("ClientClass", "\345\272\224\346\211\276\351\207\221\351\242\235\357\274\232\357\277\245", 0, QApplication::UnicodeUTF8));
        shouldBackMoney->setText(QApplication::translate("ClientClass", "\345\272\224\346\211\276\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        commandLinkButton->setText(QApplication::translate("ClientClass", "\347\273\223\350\264\246", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("ClientClass", "\345\215\263\346\227\266\344\272\244\346\230\223", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ClientClass", "\346\237\245\350\257\242\345\272\223\345\255\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClientClass: public Ui_ClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
