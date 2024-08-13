#include "add.h"
#include "ui_add.h"

add::add(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add)
{
    ui->setupUi(this);

}

add::~add()
{
    delete ui;
}

void add::on_no_clicked()
{
    close();
}


void add::on_ok_clicked()
{
    QString text1 = ui->ming->text();
    QString text2 = ui->name->text();
    QString text3 = ui->zhuji->text();
    QString text4 = ui->password->text();

//    QString text = text1+text2+text3+text4;
//    QMessageBox::information(nullptr, "Information", text);
    if(openfile(text1,text2,text3,text3)==0)
    {
        QMessageBox::information(nullptr, "信息", "保存成功");
    }
    else{
        QMessageBox::information(nullptr, "信息", "保存失败");
    }
    close();
}




