#include "hostlist.h"
#include "ui_hostlist.h"

hostlist::hostlist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hostlist)
{
    ui->setupUi(this);

    // 初始化成员变量的滚动区域
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);  // 自动调整内容大小

    // 初始化成员变量的容器widget
    container = new QWidget(this);
    container->setStyleSheet("background-color: #fff;");

    // 创建一个垂直布局作为主布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);
    setLayout(mainLayout);
}

hostlist::~hostlist()
{
    delete ui;
}

void hostlist::showEvent(QShowEvent *event)
{
    // 每次显示界面时重新刷新内容
    refreshHostList();
}

void hostlist::refreshHostList()
{
    // 清空之前的布局和组件
    if (container->layout()) {
        QLayoutItem *item;
        while ((item = container->layout()->takeAt(0)) != nullptr) {
            delete item->widget();  // 删除旧的widget
            delete item;            // 删除布局项
        }
        delete container->layout();  // 删除布局
    }

    // 创建新的网格布局
    QGridLayout *gridLayout = new QGridLayout(container);

    // 读取配置文件显示的QWidget数量
    int totalItems = Getrows();
     // 从配置文件读取每个组件的标题或数据
    int itemsPerRow = 4;  // 每行的widget数量

    // 循环创建QWidget并添加到网格布局中
    for (int i = 0; i < totalItems; ++i) {
        // 创建一个QWidget作为列表项
        QWidget *itemWidget = new QWidget(this);
        itemWidget->setStyleSheet("background-color: lightgray; border: 1px solid black;"
                                  "border-radius: 10px;");
        itemWidget->setFixedSize(280, 240);  // 设置每个QWidget的大小

        // 创建水平布局用于放置内容
        QVBoxLayout *itemLayout = new QVBoxLayout(itemWidget);

        // 在每个QWidget中添加一个标签，使用从配置文件中读取的数据
        QLabel *label = new QLabel("111", this);
        label->setStyleSheet("font-size: 16px; padding: 10px;");
        itemLayout->addWidget(label);

        QLabel *olabel = new QLabel("222", this);
        label->setStyleSheet("font-size: 16px; padding: 10px;");
        itemLayout->addWidget(olabel);

        QLabel *plabel = new QLabel("222", this);
        label->setStyleSheet("font-size: 16px; padding: 10px;");
        itemLayout->addWidget(plabel);

        // 根据索引计算应该放置的行和列
        int row = i / itemsPerRow;
        int column = i % itemsPerRow;

        // 将itemWidget添加到网格布局中
        gridLayout->addWidget(itemWidget, row, column);
    }

    // 将新的网格布局设置到容器中
    container->setLayout(gridLayout);

    // 将容器widget设置为QScrollArea的内容
    scrollArea->setWidget(container);
}