/********************************************************************************
** Form generated from reading UI file 'hostlist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTLIST_H
#define UI_HOSTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hostlist
{
public:

    void setupUi(QWidget *hostlist)
    {
        if (hostlist->objectName().isEmpty())
            hostlist->setObjectName("hostlist");
        hostlist->resize(1251, 881);

        retranslateUi(hostlist);

        QMetaObject::connectSlotsByName(hostlist);
    } // setupUi

    void retranslateUi(QWidget *hostlist)
    {
        hostlist->setWindowTitle(QCoreApplication::translate("hostlist", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hostlist: public Ui_hostlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTLIST_H
