/********************************************************************************
** Form generated from reading UI file 'linux.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINUX_H
#define UI_LINUX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Linux
{
public:
    QLineEdit *password;
    QLineEdit *host;
    QWidget *widget_2;
    QLineEdit *hostname;
    QWidget *widget;
    QPushButton *ok;
    QPushButton *no;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_5;

    void setupUi(QDialog *Linux)
    {
        if (Linux->objectName().isEmpty())
            Linux->setObjectName("Linux");
        Linux->resize(1031, 531);
        Linux->setMinimumSize(QSize(1031, 531));
        Linux->setMaximumSize(QSize(1031, 531));
        password = new QLineEdit(Linux);
        password->setObjectName("password");
        password->setGeometry(QRect(150, 220, 351, 41));
        host = new QLineEdit(Linux);
        host->setObjectName("host");
        host->setGeometry(QRect(150, 120, 351, 41));
        widget_2 = new QWidget(Linux);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(20, 270, 691, 251));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/img/RDO.png);"));
        hostname = new QLineEdit(Linux);
        hostname->setObjectName("hostname");
        hostname->setGeometry(QRect(150, 60, 351, 41));
        widget = new QWidget(Linux);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(730, 460, 291, 61));
        ok = new QPushButton(widget);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(10, 10, 131, 41));
        no = new QPushButton(widget);
        no->setObjectName("no");
        no->setGeometry(QRect(150, 10, 131, 41));
        label_4 = new QLabel(Linux);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 220, 101, 41));
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);
        label_3 = new QLabel(Linux);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 170, 101, 41));
        label_3->setFont(font);
        label_2 = new QLabel(Linux);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 120, 101, 41));
        label_2->setFont(font);
        label = new QLabel(Linux);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 101, 41));
        label->setFont(font);
        name = new QLineEdit(Linux);
        name->setObjectName("name");
        name->setGeometry(QRect(150, 170, 351, 41));
        label_5 = new QLabel(Linux);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 91, 31));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);

        retranslateUi(Linux);

        QMetaObject::connectSlotsByName(Linux);
    } // setupUi

    void retranslateUi(QDialog *Linux)
    {
        Linux->setWindowTitle(QCoreApplication::translate("Linux", "Dialog", nullptr));
        ok->setText(QCoreApplication::translate("Linux", "\344\277\235\345\255\230", nullptr));
        no->setText(QCoreApplication::translate("Linux", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("Linux", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Linux", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Linux", "\344\270\273\346\234\272\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Linux", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Linux", "Linux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Linux: public Ui_Linux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINUX_H
