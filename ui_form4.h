/********************************************************************************
** Form generated from reading UI file 'form4.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM4_H
#define UI_FORM4_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form4
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Form4)
    {
        if (Form4->objectName().isEmpty())
            Form4->setObjectName("Form4");
        Form4->resize(1251, 881);
        Form4->setMinimumSize(QSize(1251, 881));
        gridLayout = new QGridLayout(Form4);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(Form4);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(1211, 431));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/img/piingpai.png);"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        label = new QLabel(Form4);
        label->setObjectName("label");
        label->setMinimumSize(QSize(1201, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(Form4);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(1241, 20));
        label_2->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        retranslateUi(Form4);

        QMetaObject::connectSlotsByName(Form4);
    } // setupUi

    void retranslateUi(QWidget *Form4)
    {
        Form4->setWindowTitle(QCoreApplication::translate("Form4", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form4", "\347\247\213\345\244\251\346\230\257\345\200\222\346\224\276\347\232\204\346\230\245\345\244\251", nullptr));
        label_2->setText(QCoreApplication::translate("Form4", "\347\211\210\346\235\203\346\211\200\346\234\211 2024 heyushixiang,\345\275\223\345\211\215\347\211\210\346\234\2541.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form4: public Ui_Form4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM4_H
