#include "windows.h"
#include "ui_windows.h"

Windows::Windows(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Windows)
{
    ui->setupUi(this);
}

Windows::~Windows()
{
    delete ui;
}

void Windows::on_ok_clicked()
{
    QString text1 = ui->hostname->text();
    QString text2 = ui->host->text();
    QString text3 = ui->name->text();
    QString text4 = ui->password->text();

    if (!text1.isEmpty() && !text2.isEmpty() && !text3.isEmpty() && !text4.isEmpty())
    {
        if(openfileWindows(text1,text2,text3,text4)==0)
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


void Windows::on_no_clicked()
{
    ui->hostname->clear();
    ui->host->clear();
    ui->name->clear();
    ui->password->clear();
}

