#include "linux.h"
#include "ui_linux.h"
#include "Loadfile.h"

Linux::Linux(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Linux)
{
    ui->setupUi(this);
}

Linux::~Linux()
{
    delete ui;
}

void Linux::on_ok_clicked()
{
    QString text1 = ui->hostname->text();
    QString text2 = ui->host->text();
    QString text3 = ui->name->text();
    QString text4 = ui->password->text();

    if(openfileLinux(text1,text2,text3,text4)==0)
    {
        QMessageBox::information(nullptr, "信息", "保存成功");
    }
    else{
        QMessageBox::information(nullptr, "信息", "保存失败");
    }


    ui->hostname->clear();
    ui->host->clear();
    ui->name->clear();
    ui->password->clear();

}


void Linux::on_no_clicked()
{


}

