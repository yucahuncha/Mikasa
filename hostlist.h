#ifndef HOSTLIST_H
#define HOSTLIST_H

#include <QWidget>

namespace Ui {
class hostlist;
}

class hostlist : public QWidget
{
    Q_OBJECT

public:
    explicit hostlist(QWidget *parent = nullptr);
    ~hostlist();

private:
    Ui::hostlist *ui;
};

#endif // HOSTLIST_H
