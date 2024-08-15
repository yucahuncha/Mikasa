#include "hostlist.h"
#include "ui_hostlist.h"

hostlist::hostlist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hostlist)
{
    ui->setupUi(this);
}

hostlist::~hostlist()
{
    delete ui;
}
