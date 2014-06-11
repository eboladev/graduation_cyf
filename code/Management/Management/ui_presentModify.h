/********************************************************************************
** Form generated from reading UI file 'presentModify.ui'
**
** Created: Fri Feb 18 20:15:32 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTMODIFY_H
#define UI_PRESENTMODIFY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PresentModifyClass
{
public:
    QCommandLinkButton *yes_modify_associator_BTN;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_54;
    QLineEdit *presentID_modify_present_LE;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_55;
    QLineEdit *presentMoneyStart_modify_present_LE;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_56;
    QLineEdit *presentMoneyEnd_modify_present_LE;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_57;
    QLineEdit *presentGoodsID_modify_present_LE;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_59;
    QLineEdit *presentGoodsCount_modify_present_LE;
    QLabel *label;

    void setupUi(QDialog *PresentModifyClass)
    {
        if (PresentModifyClass->objectName().isEmpty())
            PresentModifyClass->setObjectName(QString::fromUtf8("PresentModifyClass"));
        PresentModifyClass->resize(401, 368);
        PresentModifyClass->setMinimumSize(QSize(401, 368));
        PresentModifyClass->setMaximumSize(QSize(401, 368));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        PresentModifyClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PresentModifyClass->setWindowIcon(icon);
        yes_modify_associator_BTN = new QCommandLinkButton(PresentModifyClass);
        yes_modify_associator_BTN->setObjectName(QString::fromUtf8("yes_modify_associator_BTN"));
        yes_modify_associator_BTN->setGeometry(QRect(150, 310, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(14);
        yes_modify_associator_BTN->setFont(font);
        yes_modify_associator_BTN->setAutoDefault(false);
        layoutWidget = new QWidget(PresentModifyClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 110, 241, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(layoutWidget);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setMinimumSize(QSize(84, 0));
        label_54->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label_54);

        presentID_modify_present_LE = new QLineEdit(layoutWidget);
        presentID_modify_present_LE->setObjectName(QString::fromUtf8("presentID_modify_present_LE"));
        presentID_modify_present_LE->setEnabled(false);
        presentID_modify_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(presentID_modify_present_LE);

        layoutWidget_2 = new QWidget(PresentModifyClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 190, 241, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_55 = new QLabel(layoutWidget_2);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(label_55);

        presentMoneyStart_modify_present_LE = new QLineEdit(layoutWidget_2);
        presentMoneyStart_modify_present_LE->setObjectName(QString::fromUtf8("presentMoneyStart_modify_present_LE"));
        presentMoneyStart_modify_present_LE->setEnabled(true);
        presentMoneyStart_modify_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(presentMoneyStart_modify_present_LE);

        layoutWidget_3 = new QWidget(PresentModifyClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(80, 150, 241, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_56 = new QLabel(layoutWidget_3);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_3->addWidget(label_56);

        presentMoneyEnd_modify_present_LE = new QLineEdit(layoutWidget_3);
        presentMoneyEnd_modify_present_LE->setObjectName(QString::fromUtf8("presentMoneyEnd_modify_present_LE"));
        presentMoneyEnd_modify_present_LE->setEnabled(true);
        presentMoneyEnd_modify_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_3->addWidget(presentMoneyEnd_modify_present_LE);

        layoutWidget_4 = new QWidget(PresentModifyClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 230, 241, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(layoutWidget_4);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_4->addWidget(label_57);

        presentGoodsID_modify_present_LE = new QLineEdit(layoutWidget_4);
        presentGoodsID_modify_present_LE->setObjectName(QString::fromUtf8("presentGoodsID_modify_present_LE"));
        presentGoodsID_modify_present_LE->setEnabled(true);
        presentGoodsID_modify_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_4->addWidget(presentGoodsID_modify_present_LE);

        layoutWidget_6 = new QWidget(PresentModifyClass);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(80, 270, 241, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_59 = new QLabel(layoutWidget_6);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_6->addWidget(label_59);

        presentGoodsCount_modify_present_LE = new QLineEdit(layoutWidget_6);
        presentGoodsCount_modify_present_LE->setObjectName(QString::fromUtf8("presentGoodsCount_modify_present_LE"));
        presentGoodsCount_modify_present_LE->setEnabled(true);
        presentGoodsCount_modify_present_LE->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_6->addWidget(presentGoodsCount_modify_present_LE);

        label = new QLabel(PresentModifyClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 90));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Management/Resources/pres modify backgroud image.jpg);"));
        QWidget::setTabOrder(presentID_modify_present_LE, presentMoneyEnd_modify_present_LE);
        QWidget::setTabOrder(presentMoneyEnd_modify_present_LE, presentMoneyStart_modify_present_LE);
        QWidget::setTabOrder(presentMoneyStart_modify_present_LE, presentGoodsID_modify_present_LE);
        QWidget::setTabOrder(presentGoodsID_modify_present_LE, presentGoodsCount_modify_present_LE);
        QWidget::setTabOrder(presentGoodsCount_modify_present_LE, yes_modify_associator_BTN);

        retranslateUi(PresentModifyClass);

        QMetaObject::connectSlotsByName(PresentModifyClass);
    } // setupUi

    void retranslateUi(QDialog *PresentModifyClass)
    {
        PresentModifyClass->setWindowTitle(QApplication::translate("PresentModifyClass", "\344\277\256\346\224\271/\345\242\236\345\212\240\344\274\230\346\203\240\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        yes_modify_associator_BTN->setText(QApplication::translate("PresentModifyClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("PresentModifyClass", "\344\274\230\346\203\240\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("PresentModifyClass", "\344\272\244\346\230\223\351\207\221\351\242\235\344\270\213\351\231\220\357\274\232", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("PresentModifyClass", "\344\272\244\346\230\223\351\207\221\351\242\235\344\270\212\351\231\220\357\274\232", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("PresentModifyClass", "\350\265\240\351\200\201\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("PresentModifyClass", "\350\265\240\351\200\201\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PresentModifyClass: public Ui_PresentModifyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTMODIFY_H
