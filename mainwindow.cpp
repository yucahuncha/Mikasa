#include "mainwindow.h"

#include "./ui_mainwindow.h"


enum eStackedWidgetID{eForm1 = 0,eForm2,eForm3,eForm4};  // 页码编号


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{



    ui->setupUi(this);

    QWidget *From1 = new Form1(this);                   //页面别名
    QWidget *From4 = new Form4(this);

    setWindowIcon(QIcon(":/new/logo/img/logo2.ico"));

    ui->stackedWidget->insertWidget(eForm1,From1);      //添加页面
    ui->stackedWidget->insertWidget(eForm4,From4);

    ui->stackedWidget->setCurrentIndex(eForm1);         //默认显示

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(eForm1);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(eForm4);
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "信息", "该功能还在实现中");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "信息", "该功能还在实现中");
}

