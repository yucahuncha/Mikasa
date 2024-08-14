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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QLabel *label;
    QPushButton *Windows;
    QPushButton *Linux;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *widget;

    void setupUi(QDialog *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName("add");
        add->resize(1039, 664);
        add->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label = new QLabel(add);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 121, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        Windows = new QPushButton(add);
        Windows->setObjectName("Windows");
        Windows->setGeometry(QRect(40, 80, 131, 41));
        QFont font1;
        font1.setPointSize(14);
        Windows->setFont(font1);
        Windows->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	border: 2px solid black;\n"
"	border-radius: 10px;\n"
"	color: rgb(73, 136, 253);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(219, 222, 224);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	\n"
"}\n"
""));
        Linux = new QPushButton(add);
        Linux->setObjectName("Linux");
        Linux->setGeometry(QRect(200, 80, 111, 41));
        Linux->setFont(font1);
        Linux->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 2px solid black;\n"
"	border-radius: 10px;\n"
"	color: rgb(73, 136, 253);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(219, 222, 224);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(add);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 130, 1031, 531));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        widget = new QWidget(add);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 61, 61));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/new/logo/img/add.png);"));

        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QDialog *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "\346\267\273\345\212\240\344\270\273\346\234\272", nullptr));
        label->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240\344\270\273\346\234\272", nullptr));
        Windows->setText(QCoreApplication::translate("add", "Windows", nullptr));
        Linux->setText(QCoreApplication::translate("add", "Linux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
