/********************************************************************************
** Form generated from reading UI file 'goodsModify.ui'
**
** Created: Fri Feb 18 20:15:34 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODSMODIFY_H
#define UI_GOODSMODIFY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoodsModifyClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *goodsName_modify_goods_LE;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *goodsClass_modify_goods_CB;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *goodsPrice_modify_goods_LE;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *goodsSpecification_modify_goods_LE;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *goodsDiscount_modify_goods_LE;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *goodsCost_modify_goods_LE;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *goodsID_modify_goods_LE;
    QCommandLinkButton *yes_modif_goods_CLBTN;
    QLabel *label;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *goodsAssDiscount_modify_goods_LE;

    void setupUi(QDialog *GoodsModifyClass)
    {
        if (GoodsModifyClass->objectName().isEmpty())
            GoodsModifyClass->setObjectName(QString::fromUtf8("GoodsModifyClass"));
        GoodsModifyClass->resize(401, 494);
        GoodsModifyClass->setMinimumSize(QSize(401, 494));
        GoodsModifyClass->setMaximumSize(QSize(401, 494));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        GoodsModifyClass->setPalette(palette);
        layoutWidget = new QWidget(GoodsModifyClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 150, 241, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        goodsName_modify_goods_LE = new QLineEdit(layoutWidget);
        goodsName_modify_goods_LE->setObjectName(QString::fromUtf8("goodsName_modify_goods_LE"));
        goodsName_modify_goods_LE->setEnabled(true);

        horizontalLayout_2->addWidget(goodsName_modify_goods_LE);

        layoutWidget_2 = new QWidget(GoodsModifyClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 190, 241, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_4);

        goodsClass_modify_goods_CB = new QComboBox(layoutWidget_2);
        goodsClass_modify_goods_CB->setObjectName(QString::fromUtf8("goodsClass_modify_goods_CB"));
        goodsClass_modify_goods_CB->setEditable(true);

        horizontalLayout_3->addWidget(goodsClass_modify_goods_CB);

        layoutWidget_3 = new QWidget(GoodsModifyClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(80, 230, 241, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        goodsPrice_modify_goods_LE = new QLineEdit(layoutWidget_3);
        goodsPrice_modify_goods_LE->setObjectName(QString::fromUtf8("goodsPrice_modify_goods_LE"));
        goodsPrice_modify_goods_LE->setEnabled(true);

        horizontalLayout_4->addWidget(goodsPrice_modify_goods_LE);

        layoutWidget_4 = new QWidget(GoodsModifyClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(80, 270, 241, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        goodsSpecification_modify_goods_LE = new QLineEdit(layoutWidget_4);
        goodsSpecification_modify_goods_LE->setObjectName(QString::fromUtf8("goodsSpecification_modify_goods_LE"));
        goodsSpecification_modify_goods_LE->setEnabled(true);

        horizontalLayout_5->addWidget(goodsSpecification_modify_goods_LE);

        layoutWidget_5 = new QWidget(GoodsModifyClass);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(80, 310, 241, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        goodsDiscount_modify_goods_LE = new QLineEdit(layoutWidget_5);
        goodsDiscount_modify_goods_LE->setObjectName(QString::fromUtf8("goodsDiscount_modify_goods_LE"));
        goodsDiscount_modify_goods_LE->setEnabled(true);

        horizontalLayout_6->addWidget(goodsDiscount_modify_goods_LE);

        layoutWidget_6 = new QWidget(GoodsModifyClass);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(80, 350, 241, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        goodsCost_modify_goods_LE = new QLineEdit(layoutWidget_6);
        goodsCost_modify_goods_LE->setObjectName(QString::fromUtf8("goodsCost_modify_goods_LE"));
        goodsCost_modify_goods_LE->setEnabled(true);

        horizontalLayout_7->addWidget(goodsCost_modify_goods_LE);

        layoutWidget1 = new QWidget(GoodsModifyClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 110, 241, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        goodsID_modify_goods_LE = new QLineEdit(layoutWidget1);
        goodsID_modify_goods_LE->setObjectName(QString::fromUtf8("goodsID_modify_goods_LE"));
        goodsID_modify_goods_LE->setEnabled(false);

        horizontalLayout->addWidget(goodsID_modify_goods_LE);

        yes_modif_goods_CLBTN = new QCommandLinkButton(GoodsModifyClass);
        yes_modif_goods_CLBTN->setObjectName(QString::fromUtf8("yes_modif_goods_CLBTN"));
        yes_modif_goods_CLBTN->setGeometry(QRect(150, 430, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(14);
        yes_modif_goods_CLBTN->setFont(font);
        yes_modif_goods_CLBTN->setCheckable(false);
        yes_modif_goods_CLBTN->setAutoRepeat(false);
        yes_modif_goods_CLBTN->setAutoExclusive(false);
        yes_modif_goods_CLBTN->setAutoDefault(false);
        label = new QLabel(GoodsModifyClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 90));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Management/Resources/goods modify backgroud image.jpg);"));
        layoutWidget_7 = new QWidget(GoodsModifyClass);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(80, 390, 241, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        goodsAssDiscount_modify_goods_LE = new QLineEdit(layoutWidget_7);
        goodsAssDiscount_modify_goods_LE->setObjectName(QString::fromUtf8("goodsAssDiscount_modify_goods_LE"));
        goodsAssDiscount_modify_goods_LE->setEnabled(true);

        horizontalLayout_8->addWidget(goodsAssDiscount_modify_goods_LE);


        retranslateUi(GoodsModifyClass);

        QMetaObject::connectSlotsByName(GoodsModifyClass);
    } // setupUi

    void retranslateUi(QDialog *GoodsModifyClass)
    {
        GoodsModifyClass->setWindowTitle(QApplication::translate("GoodsModifyClass", "\344\277\256\346\224\271/\345\242\236\345\212\240\345\225\206\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GoodsModifyClass", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GoodsModifyClass", "\345\225\206\345\223\201\347\261\273\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GoodsModifyClass", "\351\224\200\345\224\256\344\273\267\346\240\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GoodsModifyClass", "\345\225\206\345\223\201\350\247\204\346\240\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GoodsModifyClass", "\345\225\206\345\223\201\346\212\230\346\211\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GoodsModifyClass", "\345\225\206\345\223\201\346\210\220\346\234\254\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GoodsModifyClass", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        yes_modif_goods_CLBTN->setText(QApplication::translate("GoodsModifyClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_9->setText(QApplication::translate("GoodsModifyClass", "\344\274\232\345\221\230\346\212\230\346\211\243\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GoodsModifyClass: public Ui_GoodsModifyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODSMODIFY_H
