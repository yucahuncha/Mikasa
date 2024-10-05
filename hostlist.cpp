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
//    int totalItems = Qloadsql::number();
     // 从配置文件读取每个组件的标题或数据
    int itemsPerRow = 4;  // 每行的widget数量

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Mikasa.db");

    // 打开数据库连接
    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();

    }

    QSqlQuery query;
    query.prepare("SELECT hostname, type, host, account_name, password FROM Mikasaconfig;");

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        db.close();

    }

    int i = -1;

    // 循环创建QWidget并添加到网格布局中
    while (query.next()){

        i++;

        QString hostname = query.value(0).toString();
        QString type = query.value(1).toString();
        QString host = query.value(2).toString();
        QString accountName = query.value(3).toString();
        QString password = query.value(4).toString();

        // 创建一个QWidget作为列表项
        QWidget *itemWidget = new QWidget(this);
        itemWidget->setStyleSheet("background-color: lightgray; border: 1px solid black;"
                                  "border-radius: 10px;");
        itemWidget->setFixedSize(280, 240);  // 设置每个QWidget的大小

        // 创建水平布局用于放置内容
        QVBoxLayout *itemLayout = new QVBoxLayout(itemWidget);

        // 在每个QWidget中添加一个标签，使用从配置文件中读取的数据
        QLabel *label = new QLabel("主机名:"+hostname, this);
        label->setStyleSheet("font-size: 16px; padding: 10px;");
        itemLayout->addWidget(label);

        QLabel *olabel = new QLabel("类型:"+type, this);
        label->setStyleSheet("font-size: 16px; padding: 10px;");
        itemLayout->addWidget(olabel);

        QLabel *plabel = new QLabel("主机地址:"+host, this);
        label->setStyleSheet("font-size: 16px; padding: 10px;");
        itemLayout->addWidget(plabel);

        QPushButton *button = new QPushButton("连接", this);
        button->setStyleSheet("padding: 5px; font-size: 14px;");
        itemLayout->addWidget(button);

        // 连接按钮点击信号到槽函数
        connect(button, &QPushButton::clicked, this, [=]() {
            // 槽函数，点击按钮后执行的操作
            QMessageBox::information(this, "连接信息", "主机名: " + hostname + "\n类型: " + type + "\n主机地址: " + host);
        });

        itemWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        connect(itemWidget, &QWidget::customContextMenuRequested, this, [=](const QPoint &pos){
            QMenu contextMenu(tr("右键菜单"), this);

            QAction *action1 = new QAction("删除", this);
            QAction *action2 = new QAction("编辑", this);
            QAction *action3 = new QAction("详情", this);

            // 连接信号槽以处理菜单项选择
            connect(action1, &QAction::triggered, this, [=](){

                Qloadsql obj;
                obj.DELETE(hostname);
                itemWidget->update();
                // 删除相关处理逻辑
            });

            connect(action2, &QAction::triggered, this, [](){
                qDebug() << "编辑被点击";
                // 编辑相关处理逻辑
            });

            connect(action3, &QAction::triggered, this, [](){
                qDebug() << "详情被点击";
                // 详情相关处理逻辑
            });

            // 添加动作到菜单
            contextMenu.addAction(action1);
            contextMenu.addAction(action2);
            contextMenu.addAction(action3);

            // 将菜单显示在鼠标点击位置
            contextMenu.exec(itemWidget->mapToGlobal(pos));
        });

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




