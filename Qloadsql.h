//
// Created by 橘子酱 on 2024/9/9.
//

#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDebug>
#include <QMessageBox>

#ifndef MIKASA_QLOADSQL_H
#define MIKASA_QLOADSQL_H


class Qloadsql {

public:
    Qloadsql();
    ~Qloadsql();
    static bool insertData(const QString& hostname, const QString& type, const QString& host, const QString& accountName, const QString& password);

    static int number();
private:

};


#endif //MIKASA_QLOADSQL_H
