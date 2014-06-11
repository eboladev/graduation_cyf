/********************************************************************************
** Form generated from reading UI file 'associatorModify.ui'
**
** Created: Fri Feb 18 20:15:39 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSOCIATORMODIFY_H
#define UI_ASSOCIATORMODIFY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssociatorModifyClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_55;
    QLineEdit *associatorID_modify_associator_LE;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_56;
    QLineEdit *associatorName_modify_associator_LE;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_57;
    QDateTimeEdit *regTime_modify_associator_DTE;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_58;
    QTextEdit *remark_modify_associator_TE;
    QCommandLinkButton *yes_modify_associator_BTN;
    QLabel *label;

    void setupUi(QDialog *AssociatorModifyClass)
    {
        if (AssociatorModifyClass->objectName().isEmpty())
            AssociatorModifyClass->setObjectName(QString::fromUtf8("AssociatorModifyClass"));
        AssociatorModifyClass->resize(421, 398);
        AssociatorModifyClass->setMinimumSize(QSize(421, 398));
        AssociatorModifyClass->setMaximumSize(QSize(421, 398));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        AssociatorModifyClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Management/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AssociatorModifyClass->setWindowIcon(icon);
        layoutWidget = new QWidget(AssociatorModifyClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 110, 241, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_55 = new QLabel(layoutWidget);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label_55);

        associatorID_modify_associator_LE = new QLineEdit(layoutWidget);
        associatorID_modify_associator_LE->setObjectName(QString::fromUtf8("associatorID_modify_associator_LE"));
        associatorID_modify_associator_LE->setEnabled(false);
        associatorID_modify_associator_LE->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(associatorID_modify_associator_LE);

        layoutWidget1 = new QWidget(AssociatorModifyClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 150, 241, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_56 = new QLabel(layoutWidget1);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_2->addWidget(label_56);

        associatorName_modify_associator_LE = new QLineEdit(layoutWidget1);
        associatorName_modify_associator_LE->setObjectName(QString::fromUtf8("associatorName_modify_associator_LE"));
        associatorName_modify_associator_LE->setEnabled(true);

        horizontalLayout_2->addWidget(associatorName_modify_associator_LE);

        layoutWidget2 = new QWidget(AssociatorModifyClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 190, 241, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(layoutWidget2);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setMinimumSize(QSize(0, 0));
        label_57->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_57);

        regTime_modify_associator_DTE = new QDateTimeEdit(layoutWidget2);
        regTime_modify_associator_DTE->setObjectName(QString::fromUtf8("regTime_modify_associator_DTE"));
        regTime_modify_associator_DTE->setEnabled(false);

        horizontalLayout_3->addWidget(regTime_modify_associator_DTE);

        layoutWidget3 = new QWidget(AssociatorModifyClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(90, 230, 241, 81));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_58 = new QLabel(layoutWidget3);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_4->addWidget(label_58);

        remark_modify_associator_TE = new QTextEdit(layoutWidget3);
        remark_modify_associator_TE->setObjectName(QString::fromUtf8("remark_modify_associator_TE"));

        horizontalLayout_4->addWidget(remark_modify_associator_TE);

        yes_modify_associator_BTN = new QCommandLinkButton(AssociatorModifyClass);
        yes_modify_associator_BTN->setObjectName(QString::fromUtf8("yes_modify_associator_BTN"));
        yes_modify_associator_BTN->setGeometry(QRect(170, 330, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(14);
        yes_modify_associator_BTN->setFont(font);
        yes_modify_associator_BTN->setAutoDefault(false);
        label = new QLabel(AssociatorModifyClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 421, 90));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Management/Resources/ass modify backgroud image.jpg);"));

        retranslateUi(AssociatorModifyClass);

        QMetaObject::connectSlotsByName(AssociatorModifyClass);
    } // setupUi

    void retranslateUi(QDialog *AssociatorModifyClass)
    {
        AssociatorModifyClass->setWindowTitle(QApplication::translate("AssociatorModifyClass", "\344\277\256\346\224\271/\345\242\236\345\212\240\344\274\232\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("AssociatorModifyClass", "\344\274\232\345\221\230\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("AssociatorModifyClass", "\344\274\232\345\221\230\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("AssociatorModifyClass", "\346\263\250\345\206\214\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        regTime_modify_associator_DTE->setDisplayFormat(QApplication::translate("AssociatorModifyClass", "yyyy-MM-dd H:mm:ss", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("AssociatorModifyClass", "\344\274\232\345\221\230\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        yes_modify_associator_BTN->setText(QApplication::translate("AssociatorModifyClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AssociatorModifyClass: public Ui_AssociatorModifyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSOCIATORMODIFY_H
