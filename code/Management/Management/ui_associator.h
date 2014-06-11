/********************************************************************************
** Form generated from reading UI file 'associator.ui'
**
** Created: Fri Feb 18 20:15:40 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSOCIATOR_H
#define UI_ASSOCIATOR_H

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

class Ui_AssociatorClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_68;
    QHBoxLayout *horizontalLayout_92;
    QRadioButton *associatorID_search_associator_RBTN;
    QLineEdit *associatorID_search_associator_LE;
    QHBoxLayout *horizontalLayout_93;
    QRadioButton *associatorName_search_associator_RBTN;
    QLineEdit *associatorName_search_associator_LE;
    QHBoxLayout *horizontalLayout_94;
    QRadioButton *associatorAll_search_associator_RBTN;
    QSpacerItem *horizontalSpacer_34;
    QPushButton *search_search_associator_BTN;
    QGroupBox *groupBox_27;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_54;
    QLineEdit *associatorID_modify_associator_LE;
    QPushButton *modify_modify_associator_BTN;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_55;
    QLineEdit *associatorID_del_associator_LE;
    QPushButton *del_modify_associator_BTN;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_modify_associator_BTN;
    QFrame *line_12;
    QTableWidget *associatorInfo_associator_TBW;
    QLabel *status_associator_LB;

    void setupUi(QDialog *AssociatorClass)
    {
        if (AssociatorClass->objectName().isEmpty())
            AssociatorClass->setObjectName(QString::fromUtf8("AssociatorClass"));
        AssociatorClass->resize(800, 602);
        AssociatorClass->setMinimumSize(QSize(800, 602));
        AssociatorClass->setMaximumSize(QSize(800, 602));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        AssociatorClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AssociatorClass->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(AssociatorClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(AssociatorClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout_2->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox_26 = new QGroupBox(AssociatorClass);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        groupBox_26->setMinimumSize(QSize(0, 0));
        groupBox_26->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_68 = new QVBoxLayout(groupBox_26);
        verticalLayout_68->setObjectName(QString::fromUtf8("verticalLayout_68"));
        horizontalLayout_92 = new QHBoxLayout();
        horizontalLayout_92->setObjectName(QString::fromUtf8("horizontalLayout_92"));
        associatorID_search_associator_RBTN = new QRadioButton(groupBox_26);
        associatorID_search_associator_RBTN->setObjectName(QString::fromUtf8("associatorID_search_associator_RBTN"));
        associatorID_search_associator_RBTN->setChecked(true);

        horizontalLayout_92->addWidget(associatorID_search_associator_RBTN);

        associatorID_search_associator_LE = new QLineEdit(groupBox_26);
        associatorID_search_associator_LE->setObjectName(QString::fromUtf8("associatorID_search_associator_LE"));

        horizontalLayout_92->addWidget(associatorID_search_associator_LE);


        verticalLayout_68->addLayout(horizontalLayout_92);

        horizontalLayout_93 = new QHBoxLayout();
        horizontalLayout_93->setObjectName(QString::fromUtf8("horizontalLayout_93"));
        associatorName_search_associator_RBTN = new QRadioButton(groupBox_26);
        associatorName_search_associator_RBTN->setObjectName(QString::fromUtf8("associatorName_search_associator_RBTN"));
        associatorName_search_associator_RBTN->setMaximumSize(QSize(119, 16777215));

        horizontalLayout_93->addWidget(associatorName_search_associator_RBTN);

        associatorName_search_associator_LE = new QLineEdit(groupBox_26);
        associatorName_search_associator_LE->setObjectName(QString::fromUtf8("associatorName_search_associator_LE"));
        associatorName_search_associator_LE->setEnabled(false);

        horizontalLayout_93->addWidget(associatorName_search_associator_LE);


        verticalLayout_68->addLayout(horizontalLayout_93);

        horizontalLayout_94 = new QHBoxLayout();
        horizontalLayout_94->setObjectName(QString::fromUtf8("horizontalLayout_94"));
        associatorAll_search_associator_RBTN = new QRadioButton(groupBox_26);
        associatorAll_search_associator_RBTN->setObjectName(QString::fromUtf8("associatorAll_search_associator_RBTN"));

        horizontalLayout_94->addWidget(associatorAll_search_associator_RBTN);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_94->addItem(horizontalSpacer_34);

        search_search_associator_BTN = new QPushButton(groupBox_26);
        search_search_associator_BTN->setObjectName(QString::fromUtf8("search_search_associator_BTN"));

        horizontalLayout_94->addWidget(search_search_associator_BTN);


        verticalLayout_68->addLayout(horizontalLayout_94);


        horizontalLayout_4->addWidget(groupBox_26);

        groupBox_27 = new QGroupBox(AssociatorClass);
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

        associatorID_modify_associator_LE = new QLineEdit(groupBox_27);
        associatorID_modify_associator_LE->setObjectName(QString::fromUtf8("associatorID_modify_associator_LE"));
        associatorID_modify_associator_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(associatorID_modify_associator_LE);

        modify_modify_associator_BTN = new QPushButton(groupBox_27);
        modify_modify_associator_BTN->setObjectName(QString::fromUtf8("modify_modify_associator_BTN"));

        horizontalLayout->addWidget(modify_modify_associator_BTN);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_55 = new QLabel(groupBox_27);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(label_55);

        associatorID_del_associator_LE = new QLineEdit(groupBox_27);
        associatorID_del_associator_LE->setObjectName(QString::fromUtf8("associatorID_del_associator_LE"));
        associatorID_del_associator_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(associatorID_del_associator_LE);

        del_modify_associator_BTN = new QPushButton(groupBox_27);
        del_modify_associator_BTN->setObjectName(QString::fromUtf8("del_modify_associator_BTN"));

        horizontalLayout_2->addWidget(del_modify_associator_BTN);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        add_modify_associator_BTN = new QPushButton(groupBox_27);
        add_modify_associator_BTN->setObjectName(QString::fromUtf8("add_modify_associator_BTN"));

        horizontalLayout_3->addWidget(add_modify_associator_BTN);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(groupBox_27);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_12 = new QFrame(AssociatorClass);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShadow(QFrame::Sunken);
        line_12->setLineWidth(1);
        line_12->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line_12);

        associatorInfo_associator_TBW = new QTableWidget(AssociatorClass);
        if (associatorInfo_associator_TBW->columnCount() < 4)
            associatorInfo_associator_TBW->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        associatorInfo_associator_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        associatorInfo_associator_TBW->setObjectName(QString::fromUtf8("associatorInfo_associator_TBW"));
        associatorInfo_associator_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        associatorInfo_associator_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        associatorInfo_associator_TBW->horizontalHeader()->setStretchLastSection(true);
        associatorInfo_associator_TBW->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(associatorInfo_associator_TBW);

        status_associator_LB = new QLabel(AssociatorClass);
        status_associator_LB->setObjectName(QString::fromUtf8("status_associator_LB"));

        verticalLayout_2->addWidget(status_associator_LB);


        retranslateUi(AssociatorClass);

        QMetaObject::connectSlotsByName(AssociatorClass);
    } // setupUi

    void retranslateUi(QDialog *AssociatorClass)
    {
        AssociatorClass->setWindowTitle(QApplication::translate("AssociatorClass", "\344\274\232\345\221\230\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox_26->setTitle(QApplication::translate("AssociatorClass", "\346\237\245\347\234\213\344\274\232\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        associatorID_search_associator_RBTN->setText(QApplication::translate("AssociatorClass", "\346\214\211\344\274\232\345\221\230\345\215\241\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        associatorName_search_associator_RBTN->setText(QApplication::translate("AssociatorClass", "\346\214\211\344\274\232\345\221\230\345\247\223\345\220\215\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        associatorAll_search_associator_RBTN->setText(QApplication::translate("AssociatorClass", "\346\237\245\350\257\242\346\211\200\346\234\211\344\274\232\345\221\230", 0, QApplication::UnicodeUTF8));
        search_search_associator_BTN->setText(QApplication::translate("AssociatorClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_27->setTitle(QApplication::translate("AssociatorClass", "\344\277\256\346\224\271\344\274\232\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("AssociatorClass", "\344\274\232\345\221\230\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        modify_modify_associator_BTN->setText(QApplication::translate("AssociatorClass", "\344\277\256\346\224\271\344\274\232\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("AssociatorClass", "\344\274\232\345\221\230\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        del_modify_associator_BTN->setText(QApplication::translate("AssociatorClass", "\345\210\240\351\231\244\344\274\232\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        add_modify_associator_BTN->setText(QApplication::translate("AssociatorClass", "\345\242\236\345\212\240\344\274\232\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = associatorInfo_associator_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AssociatorClass", "\344\274\232\345\221\230\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = associatorInfo_associator_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AssociatorClass", "\344\274\232\345\221\230\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = associatorInfo_associator_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AssociatorClass", "\346\263\250\345\206\214\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = associatorInfo_associator_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AssociatorClass", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        associatorInfo_associator_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        associatorInfo_associator_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        associatorInfo_associator_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        status_associator_LB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AssociatorClass: public Ui_AssociatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSOCIATOR_H
