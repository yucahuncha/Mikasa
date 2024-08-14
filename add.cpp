#include "add.h"
#include "ui_add.h"


enum ewidthID{kform1 = 0, kform2};

add::add(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add)
{
    ui->setupUi(this);

    QWidget *Windows = new class Windows(this);
    QWidget *Linux = new class Linux(this);

    ui->stackedWidget->insertWidget(kform1,Windows);
    ui->stackedWidget->insertWidget(kform2,Linux);

    ui->stackedWidget->setCurrentIndex(kform1);

}

add::~add()
{
    delete ui;
}

//void add::on_no_clicked()
//{
//    close();
//}
//
//
//void add::on_ok_clicked()
//{
//    QString text1 = ui->ming->text();
//    QString text2 = ui->name->text();
//    QString text3 = ui->zhuji->text();
//    QString text4 = ui->password->text();
//
////    QString text = text1+text2+text3+text4;
////    QMessageBox::information(nullptr, "Information", text);
//    if(openfile(text1,text3,text2,text4)==0)
//    {
//        QMessageBox::information(nullptr, "信息", "保存成功");
//    }
//    else{
//        QMessageBox::information(nullptr, "信息", "保存失败");
//    }
//    close();
//}





void add::on_Windows_clicked()
{
    ui->stackedWidget->setCurrentIndex(kform1);
}


void add::on_Linux_clicked()
{
    ui->stackedWidget->setCurrentIndex(kform2);
}

