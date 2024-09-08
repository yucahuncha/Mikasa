#ifndef HOSTLIST_H
#define HOSTLIST_H

#include <QWidget>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QLabel>
#include <QResizeEvent>
#include <QLabel>
#include <QGridLayout>
#include <QScrollArea>
#include "Loadfile.h"



namespace Ui {
class hostlist;
}

class hostlist : public QWidget
{
    Q_OBJECT

public:
    explicit hostlist(QWidget *parent = nullptr);
    ~hostlist();

    void refreshHostList();
    void showEvent(QShowEvent *event);

private:


    QScrollArea *scrollArea;   // 成员变量 scrollArea
    QWidget *container;        // 容器 widget
       // 刷新组件的函数
    Ui::hostlist *ui;


};

#endif // HOSTLIST_H
