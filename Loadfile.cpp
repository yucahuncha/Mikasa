#include "Loadfile.h"

int openfile(QString text1,QString text2,QString text3,QString text4)
{
    std::ofstream MyFile("example.txt");
    if (MyFile.is_open()) {

        // 向文件写入内容

        MyFile << text1.toStdString()+"\n";
        MyFile << text2.toStdString()+"\n";
        MyFile << text3.toStdString()+"\n";
        MyFile << text4.toStdString()+"\n";

        // 关闭文件
        MyFile.close();
    } else {
        return 1;
    }

    return 0;
}