#include "linux.h"
#include "ui_linux.h"


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


    QString text1 = NULL;
    QString text2 = NULL;
    QString text3 = NULL;
    QString text4 = NULL;
    QString text5 = "Linux";

    text1 = ui->hostname->text();
    text2 = ui->host->text();
    text3 = ui->name->text();
    text4 = ui->password->text();



    if (!text1.isEmpty() && !text2.isEmpty() && !text3.isEmpty() && !text4.isEmpty())
    {
        if(Qloadsql::insertData(text1,text5,text2,text3,text4))
        {
            QMessageBox::information(nullptr, "信息", "保存成功");
        }
        else{
            QMessageBox::information(nullptr, "信息", "保存失败");
        }
    }
    else
    {
        QMessageBox::information(nullptr, "信息", "输入有空白");
    }





    ui->hostname->clear();
    ui->host->clear();
    ui->name->clear();
    ui->password->clear();

}


void Linux::on_no_clicked()
{

    ui->hostname->clear();
    ui->host->clear();
    ui->name->clear();
    ui->password->clear();
}

