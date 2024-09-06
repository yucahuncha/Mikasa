#include "mainwindow.h"

#include "./ui_mainwindow.h"



enum eStackedWidgetID{eForm1 = 0,eForm2,eForm3,eForm4,eForm5};  // 页码编号


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{



    ui->setupUi(this);
    this->setCentralWidget(ui->centralwidget);

    QWidget *From1 = new Form1(this);                   //页面别名
    QWidget *From2 = new hostlist(this);
    QWidget *From4 = new Form4(this);
    QWidget *From3 = new setting(this);


    setWindowIcon(QIcon(":/new/logo/img/logo2.ico"));

    ui->stackedWidget->insertWidget(eForm1,From1);      //添加页面
    ui->stackedWidget->insertWidget(eForm2,From2);
    ui->stackedWidget->insertWidget(eForm3,From3);
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
    ui->stackedWidget->setCurrentIndex(eForm3);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(eForm2);
}

