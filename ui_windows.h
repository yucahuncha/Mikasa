/********************************************************************************
** Form generated from reading UI file 'windows.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWS_H
#define UI_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Windows
{
public:
    QWidget *widget;
    QPushButton *ok;
    QPushButton *no;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *password;
    QLineEdit *host;
    QLineEdit *hostname;
    QWidget *widget_2;
    QLabel *label_5;

    void setupUi(QDialog *Windows)
    {
        if (Windows->objectName().isEmpty())
            Windows->setObjectName("Windows");
        Windows->resize(1031, 531);
        Windows->setMinimumSize(QSize(1031, 531));
        Windows->setMaximumSize(QSize(1031, 531));
        widget = new QWidget(Windows);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(730, 460, 291, 61));
        ok = new QPushButton(widget);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(10, 10, 131, 41));
        no = new QPushButton(widget);
        no->setObjectName("no");
        no->setGeometry(QRect(150, 10, 131, 41));
        label = new QLabel(Windows);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 101, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Windows);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 120, 101, 41));
        label_2->setFont(font);
        label_3 = new QLabel(Windows);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 170, 101, 41));
        label_3->setFont(font);
        label_4 = new QLabel(Windows);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 220, 101, 41));
        label_4->setFont(font);
        name = new QLineEdit(Windows);
        name->setObjectName("name");
        name->setGeometry(QRect(150, 170, 351, 41));
        password = new QLineEdit(Windows);
        password->setObjectName("password");
        password->setGeometry(QRect(150, 220, 351, 41));
        host = new QLineEdit(Windows);
        host->setObjectName("host");
        host->setGeometry(QRect(150, 120, 351, 41));
        hostname = new QLineEdit(Windows);
        hostname->setObjectName("hostname");
        hostname->setGeometry(QRect(150, 60, 351, 41));
        widget_2 = new QWidget(Windows);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(20, 270, 691, 251));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/img/RDO.png);"));
        label_5 = new QLabel(Windows);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 131, 31));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);

        retranslateUi(Windows);

        QMetaObject::connectSlotsByName(Windows);
    } // setupUi

    void retranslateUi(QDialog *Windows)
    {
        Windows->setWindowTitle(QCoreApplication::translate("Windows", "Dialog", nullptr));
        ok->setText(QCoreApplication::translate("Windows", "\344\277\235\345\255\230", nullptr));
        no->setText(QCoreApplication::translate("Windows", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("Windows", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Windows", "\344\270\273\346\234\272\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Windows", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Windows", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Windows", "Windows", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Windows: public Ui_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWS_H
