/********************************************************************************
** Form generated from reading UI file 'present.ui'
**
** Created: Fri Feb 18 20:15:32 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENT_H
#define UI_PRESENT_H

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

class Ui_PresentClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *presentID_search_present_RBTN;
    QLineEdit *presentID_search_present_LE;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *presentMoney_search_depot_RBTN;
    QLineEdit *presentMoneyStart_search_depot_LE;
    QLabel *label_2;
    QLineEdit *presentMoneyEnd_search_depot_LE;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *presentAll_search_present_RBTN;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_search_present_RBTN;
    QGroupBox *groupBox_27;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_54;
    QLineEdit *presentID_modify_present_LE;
    QPushButton *modify_modify_present_BTN;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_55;
    QLineEdit *presentID_del_present_LE;
    QPushButton *del_modify_present_BTN;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *add_modify_present_BTN;
    QFrame *line;
    QTableWidget *presentInfo_modify_present_TBW;
    QLabel *status_present_LB;

    void setupUi(QDialog *PresentClass)
    {
        if (PresentClass->objectName().isEmpty())
            PresentClass->setObjectName(QString::fromUtf8("PresentClass"));
        PresentClass->resize(800, 602);
        PresentClass->setMinimumSize(QSize(800, 602));
        PresentClass->setMaximumSize(QSize(800, 602));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        PresentClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PresentClass->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(PresentClass);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(PresentClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout_3->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(PresentClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(360, 16777215));
        groupBox->setSizeIncrement(QSize(0, 0));
        groupBox->setBaseSize(QSize(373, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        presentID_search_present_RBTN = new QRadioButton(groupBox);
        presentID_search_present_RBTN->setObjectName(QString::fromUtf8("presentID_search_present_RBTN"));
        presentID_search_present_RBTN->setMinimumSize(QSize(143, 0));
        presentID_search_present_RBTN->setChecked(true);

        horizontalLayout_7->addWidget(presentID_search_present_RBTN);

        presentID_search_present_LE = new QLineEdit(groupBox);
        presentID_search_present_LE->setObjectName(QString::fromUtf8("presentID_search_present_LE"));
        presentID_search_present_LE->setEnabled(true);
        presentID_search_present_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(presentID_search_present_LE);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        presentMoney_search_depot_RBTN = new QRadioButton(groupBox);
        presentMoney_search_depot_RBTN->setObjectName(QString::fromUtf8("presentMoney_search_depot_RBTN"));

        horizontalLayout_6->addWidget(presentMoney_search_depot_RBTN);

        presentMoneyStart_search_depot_LE = new QLineEdit(groupBox);
        presentMoneyStart_search_depot_LE->setObjectName(QString::fromUtf8("presentMoneyStart_search_depot_LE"));
        presentMoneyStart_search_depot_LE->setEnabled(false);
        presentMoneyStart_search_depot_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(presentMoneyStart_search_depot_LE);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        presentMoneyEnd_search_depot_LE = new QLineEdit(groupBox);
        presentMoneyEnd_search_depot_LE->setObjectName(QString::fromUtf8("presentMoneyEnd_search_depot_LE"));
        presentMoneyEnd_search_depot_LE->setEnabled(false);
        presentMoneyEnd_search_depot_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(presentMoneyEnd_search_depot_LE);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        presentAll_search_present_RBTN = new QRadioButton(groupBox);
        presentAll_search_present_RBTN->setObjectName(QString::fromUtf8("presentAll_search_present_RBTN"));

        horizontalLayout_5->addWidget(presentAll_search_present_RBTN);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        search_search_present_RBTN = new QPushButton(groupBox);
        search_search_present_RBTN->setObjectName(QString::fromUtf8("search_search_present_RBTN"));

        horizontalLayout_5->addWidget(search_search_present_RBTN);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_27 = new QGroupBox(PresentClass);
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

        presentID_modify_present_LE = new QLineEdit(groupBox_27);
        presentID_modify_present_LE->setObjectName(QString::fromUtf8("presentID_modify_present_LE"));
        presentID_modify_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(presentID_modify_present_LE);

        modify_modify_present_BTN = new QPushButton(groupBox_27);
        modify_modify_present_BTN->setObjectName(QString::fromUtf8("modify_modify_present_BTN"));

        horizontalLayout->addWidget(modify_modify_present_BTN);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_55 = new QLabel(groupBox_27);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(label_55);

        presentID_del_present_LE = new QLineEdit(groupBox_27);
        presentID_del_present_LE->setObjectName(QString::fromUtf8("presentID_del_present_LE"));
        presentID_del_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(presentID_del_present_LE);

        del_modify_present_BTN = new QPushButton(groupBox_27);
        del_modify_present_BTN->setObjectName(QString::fromUtf8("del_modify_present_BTN"));

        horizontalLayout_2->addWidget(del_modify_present_BTN);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        add_modify_present_BTN = new QPushButton(groupBox_27);
        add_modify_present_BTN->setObjectName(QString::fromUtf8("add_modify_present_BTN"));

        horizontalLayout_3->addWidget(add_modify_present_BTN);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(groupBox_27);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line = new QFrame(PresentClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line);

        presentInfo_modify_present_TBW = new QTableWidget(PresentClass);
        if (presentInfo_modify_present_TBW->columnCount() < 5)
            presentInfo_modify_present_TBW->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        presentInfo_modify_present_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        presentInfo_modify_present_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        presentInfo_modify_present_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        presentInfo_modify_present_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        presentInfo_modify_present_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        presentInfo_modify_present_TBW->setObjectName(QString::fromUtf8("presentInfo_modify_present_TBW"));
        presentInfo_modify_present_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        presentInfo_modify_present_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        presentInfo_modify_present_TBW->horizontalHeader()->setStretchLastSection(true);
        presentInfo_modify_present_TBW->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(presentInfo_modify_present_TBW);

        status_present_LB = new QLabel(PresentClass);
        status_present_LB->setObjectName(QString::fromUtf8("status_present_LB"));

        verticalLayout_3->addWidget(status_present_LB);


        retranslateUi(PresentClass);

        QMetaObject::connectSlotsByName(PresentClass);
    } // setupUi

    void retranslateUi(QDialog *PresentClass)
    {
        PresentClass->setWindowTitle(QApplication::translate("PresentClass", "\344\274\230\346\203\240\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("PresentClass", "\346\237\245\350\257\242\345\275\223\345\211\215\344\274\230\346\203\240\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        presentID_search_present_RBTN->setText(QApplication::translate("PresentClass", "\346\214\211\344\274\230\346\203\240\347\274\226\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        presentMoney_search_depot_RBTN->setText(QApplication::translate("PresentClass", "\346\214\211\344\272\244\346\230\223\351\207\221\351\242\235\346\237\245\350\257\242(\357\277\245)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PresentClass", "----", 0, QApplication::UnicodeUTF8));
        presentAll_search_present_RBTN->setText(QApplication::translate("PresentClass", "\346\211\200\346\234\211\344\274\230\346\203\240\346\203\205\345\206\265\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        search_search_present_RBTN->setText(QApplication::translate("PresentClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_27->setTitle(QApplication::translate("PresentClass", "\344\277\256\346\224\271\344\274\230\346\203\240\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("PresentClass", "\344\274\230\346\203\240\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        modify_modify_present_BTN->setText(QApplication::translate("PresentClass", "\344\277\256\346\224\271\344\274\230\346\203\240\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("PresentClass", "\344\274\230\346\203\240\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        del_modify_present_BTN->setText(QApplication::translate("PresentClass", "\345\210\240\351\231\244\344\274\230\346\203\240\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        add_modify_present_BTN->setText(QApplication::translate("PresentClass", "\345\242\236\345\212\240\344\274\230\346\203\240\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = presentInfo_modify_present_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PresentClass", "\344\274\230\346\203\240\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = presentInfo_modify_present_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PresentClass", "\344\272\244\346\230\223\351\207\221\351\242\235\344\270\213\351\231\220", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = presentInfo_modify_present_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PresentClass", "\344\272\244\346\230\223\351\207\221\351\242\235\344\270\212\351\231\220", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = presentInfo_modify_present_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PresentClass", "\350\265\240\351\200\201\345\225\206\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = presentInfo_modify_present_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PresentClass", "\350\265\240\351\200\201\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        presentInfo_modify_present_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        presentInfo_modify_present_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        presentInfo_modify_present_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_present_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PresentClass: public Ui_PresentClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENT_H
