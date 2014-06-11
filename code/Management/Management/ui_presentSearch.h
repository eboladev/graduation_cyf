/********************************************************************************
** Form generated from reading UI file 'presentSearch.ui'
**
** Created: Tue Feb 15 14:15:40 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTSEARCH_H
#define UI_PRESENTSEARCH_H

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

class Ui_PresentSearchClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *presentID_search_presentSearch_RBTN;
    QLineEdit *presentID_search_presentSearch_LE;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *presentAll_search_presentSearch_RBTN;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_search_presentSearch_BTN;
    QFrame *line;
    QTableWidget *presentInfo_present_TBW;

    void setupUi(QDialog *PresentSearchClass)
    {
        if (PresentSearchClass->objectName().isEmpty())
            PresentSearchClass->setObjectName(QString::fromUtf8("PresentSearchClass"));
        PresentSearchClass->resize(455, 522);
        PresentSearchClass->setMinimumSize(QSize(455, 522));
        PresentSearchClass->setMaximumSize(QSize(455, 522));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        PresentSearchClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PresentSearchClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(PresentSearchClass);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(PresentSearchClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 90));

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(PresentSearchClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setSizeIncrement(QSize(0, 0));
        groupBox->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        presentID_search_presentSearch_RBTN = new QRadioButton(groupBox);
        presentID_search_presentSearch_RBTN->setObjectName(QString::fromUtf8("presentID_search_presentSearch_RBTN"));
        presentID_search_presentSearch_RBTN->setMaximumSize(QSize(120, 16777215));
        presentID_search_presentSearch_RBTN->setChecked(true);

        horizontalLayout->addWidget(presentID_search_presentSearch_RBTN);

        presentID_search_presentSearch_LE = new QLineEdit(groupBox);
        presentID_search_presentSearch_LE->setObjectName(QString::fromUtf8("presentID_search_presentSearch_LE"));
        presentID_search_presentSearch_LE->setMinimumSize(QSize(0, 0));
        presentID_search_presentSearch_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(presentID_search_presentSearch_LE);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        presentAll_search_presentSearch_RBTN = new QRadioButton(groupBox);
        presentAll_search_presentSearch_RBTN->setObjectName(QString::fromUtf8("presentAll_search_presentSearch_RBTN"));

        horizontalLayout_5->addWidget(presentAll_search_presentSearch_RBTN);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        search_search_presentSearch_BTN = new QPushButton(groupBox);
        search_search_presentSearch_BTN->setObjectName(QString::fromUtf8("search_search_presentSearch_BTN"));

        horizontalLayout_5->addWidget(search_search_presentSearch_BTN);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(groupBox);

        line = new QFrame(PresentSearchClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        presentInfo_present_TBW = new QTableWidget(PresentSearchClass);
        if (presentInfo_present_TBW->columnCount() < 6)
            presentInfo_present_TBW->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        presentInfo_present_TBW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        presentInfo_present_TBW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        presentInfo_present_TBW->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        presentInfo_present_TBW->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        presentInfo_present_TBW->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        presentInfo_present_TBW->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        presentInfo_present_TBW->setObjectName(QString::fromUtf8("presentInfo_present_TBW"));
        presentInfo_present_TBW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        presentInfo_present_TBW->setSelectionBehavior(QAbstractItemView::SelectRows);
        presentInfo_present_TBW->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(presentInfo_present_TBW);


        retranslateUi(PresentSearchClass);

        QMetaObject::connectSlotsByName(PresentSearchClass);
    } // setupUi

    void retranslateUi(QDialog *PresentSearchClass)
    {
        PresentSearchClass->setWindowTitle(QApplication::translate("PresentSearchClass", "\346\237\245\347\234\213\345\225\206\345\223\201\350\265\240\351\200\201\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("PresentSearchClass", "\346\237\245\350\257\242\350\265\240\351\200\201\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        presentID_search_presentSearch_RBTN->setText(QApplication::translate("PresentSearchClass", "\346\214\211\344\272\244\346\230\223\345\217\267\346\237\245\350\257\242\357\274\232", 0, QApplication::UnicodeUTF8));
        presentAll_search_presentSearch_RBTN->setText(QApplication::translate("PresentSearchClass", "\346\211\200\346\234\211\350\265\240\351\200\201\350\256\260\345\275\225\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        search_search_presentSearch_BTN->setText(QApplication::translate("PresentSearchClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = presentInfo_present_TBW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PresentSearchClass", "\344\272\244\346\230\223\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = presentInfo_present_TBW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PresentSearchClass", "\344\272\244\346\230\223\346\200\273\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = presentInfo_present_TBW->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PresentSearchClass", "\350\265\240\351\200\201\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = presentInfo_present_TBW->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PresentSearchClass", "\350\265\240\351\200\201\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = presentInfo_present_TBW->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PresentSearchClass", "\345\225\206\345\223\201\350\247\204\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = presentInfo_present_TBW->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PresentSearchClass", "\344\272\244\346\230\223\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        presentInfo_present_TBW->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        presentInfo_present_TBW->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        presentInfo_present_TBW->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class PresentSearchClass: public Ui_PresentSearchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTSEARCH_H
