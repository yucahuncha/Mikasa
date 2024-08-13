/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Loadfile.h"
QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QLabel *label;
    QPushButton *no;
    QPushButton *ok;
    QLineEdit *ming;
    QLabel *label_2;
    QLineEdit *zhuji;
    QLabel *label_3;
    QLineEdit *name;
    QLabel *label_5;
    QLineEdit *password;
    QLabel *label_4;
    QWidget *widget;

    void setupUi(QDialog *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName("add");
        add->resize(915, 514);
        add->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label = new QLabel(add);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 221, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        no = new QPushButton(add);
        no->setObjectName("no");
        no->setGeometry(QRect(800, 470, 93, 28));
        ok = new QPushButton(add);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(690, 470, 93, 28));
        ming = new QLineEdit(add);
        ming->setObjectName("ming");
        ming->setGeometry(QRect(80, 100, 269, 20));
        label_2 = new QLabel(add);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 48, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        zhuji = new QLineEdit(add);
        zhuji->setObjectName("zhuji");
        zhuji->setGeometry(QRect(80, 130, 269, 20));
        label_3 = new QLabel(add);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 128, 48, 21));
        label_3->setFont(font1);
        name = new QLineEdit(add);
        name->setObjectName("name");
        name->setGeometry(QRect(80, 160, 269, 20));
        label_5 = new QLabel(add);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 160, 48, 20));
        label_5->setFont(font1);
        password = new QLineEdit(add);
        password->setObjectName("password");
        password->setGeometry(QRect(84, 190, 261, 20));
        label_4 = new QLabel(add);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 190, 41, 21));
        label_4->setFont(font1);
        widget = new QWidget(add);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 220, 661, 281));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/img/RDO.png);"));
        widget->raise();
        label->raise();
        no->raise();
        ok->raise();
        ming->raise();
        label_2->raise();
        zhuji->raise();
        label_3->raise();
        name->raise();
        label_5->raise();
        password->raise();
        label_4->raise();

        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QDialog *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "\346\267\273\345\212\240\344\270\273\346\234\272", nullptr));
        label->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240\344\270\273\346\234\272", nullptr));
        no->setText(QCoreApplication::translate("add", "\345\217\226\346\266\210", nullptr));
        ok->setText(QCoreApplication::translate("add", "\344\277\235\345\255\230", nullptr));
        label_2->setText(QCoreApplication::translate("add", "\345\220\215\347\247\260:", nullptr));
        label_3->setText(QCoreApplication::translate("add", "\344\270\273\346\234\272", nullptr));
        label_5->setText(QCoreApplication::translate("add", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("add", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
