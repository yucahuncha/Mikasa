//
// Created by 橘子酱 on 2024/9/9.
//

#include "Qloadsql.h"

Qloadsql::Qloadsql() {


    // 检查数据库文件是否存在


    // 创建数据库连接
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("Mikasa.db");
//
//    if (!db.open()) {
//        QMessageBox::critical(reinterpret_cast<QWidget *>(this), "Error", "This is an error message.");
//
//    }



        // 创建表，如果数据库是新创建的
//    QSqlQuery query;
//    QString createTableQuery = R"(
//        CREATE TABLE IF NOT EXISTS Mikasaconfig (
//            ID INTEGER PRIMARY KEY AUTOINCREMENT,
//            hostname TEXT NOT NULL,
//            type TEXT NOT NULL,
//            host TEXT NOT NULL,
//            account_name TEXT NOT NULL,
//            password TEXT NOT NULL
//        )
//    )";
//    if (!query.exec(createTableQuery)) {
//        qCritical() << "创建表失败:" << query.lastError().text();
//
//    } else {
//        qDebug() << "表创建成功！";
//    }

}

Qloadsql::~Qloadsql() {
//    // 关闭数据库连接
//    if (db.isOpen()) {
//        db.close();
//        qDebug() << "数据库连接已关闭！";
//    }
//
//    // 移除数据库连接
//    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

}

bool Qloadsql::insertData(const QString& hostname, const QString& type, const QString& host, const QString& accountName, const QString& password) {
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Mikasa.db");

    if (!db.open()) {
        return false;  // 如果打开数据库失败，返回 false
    }

    QSqlQuery query;
    query.prepare(R"(INSERT INTO  Mikasaconfig (hostname, type, host, account_name, password ) VALUES  (:hostname, :type, :host, :account_name, :password);)");

    query.bindValue(":hostname", hostname);
    query.bindValue(":type", type);
    query.bindValue(":host", host);
    query.bindValue(":account_name", accountName);
    query.bindValue(":password", password);



    if (!query.exec()) {
        db.close();
        return false;
    } else {
        db.close();
        return true;
    }

}

auto Qloadsql::DELETE(const QString& hostname) -> bool {

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Mikasa.db");

    if (!db.open()) {
        return false;  // 如果打开数据库失败，返回 false
    }

    QSqlQuery query;
    query.prepare(R"(DELETE FROM Mikasaconfig WHERE hostname =  :hostname;)");
    query.bindValue(":hostname", hostname);

    if (!query.exec()) {
        db.close();
        return false;
    } else {
        db.close();
        return true;
    }
}

int number(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Mikasa.db");

    // 打开数据库连接
    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
        return -1;  // 返回错误值或处理错误
    }

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Mikasaconfig;");

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        db.close();
        return -1;  // 返回错误值或处理错误
    }

    // 获取结果


    int rowCount = -1;  // 初始化变量
    if (query.next()) {
        rowCount = query.value(0).toInt();  // 获取行数
    }

    db.close();
    return rowCount;  // 返回错误值或处理错误
}