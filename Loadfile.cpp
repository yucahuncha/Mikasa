#include "Loadfile.h"

int openfile(QString text1,QString text2,QString text3,QString text4)
{
    std::ofstream MyFile("example.txt",std::ios::app);
    if (MyFile.is_open()) {

        // 向文件写入内容

        MyFile << "hostname: "+text1.toStdString()+"\n";
        MyFile << "type: Windows\n";
        MyFile << "host: "+text2.toStdString()+"\n";
        MyFile << "account name: "+text3.toStdString()+"\n";
        MyFile << "password: "+text4.toStdString()+"\n\n";

        // 关闭文件
        MyFile.close();
    } else {
        return 1;
    }

    return 0;
}


int openfileWindows(QString text1,QString text2,QString text3,QString text4){
    std::ofstream MyFile("config.Mikasa",std::ios::app);
    if (MyFile.is_open()) {

        // 向文件写入内容

        MyFile << "hostname: "+text1.toStdString()+"\n";
        MyFile << "type: Windows\n";
        MyFile << "host: "+text2.toStdString()+"\n";
        MyFile << "account name: "+text3.toStdString()+"\n";
        MyFile << "password: "+text4.toStdString()+"\n\n";

        // 关闭文件
        MyFile.close();
    } else {
        return 1;
    }

    return 0;
}

int openfileLinux(QString text1,QString text2,QString text3,QString text4){
    std::ofstream MyFile("config.Mikasa",std::ios::app);
    if (MyFile.is_open()) {

        // 向文件写入内容

        MyFile << "hostname: "+text1.toStdString()+"\n";
        MyFile << "type: Linux\n";
        MyFile << "host: "+text2.toStdString()+"\n";
        MyFile << "account name: "+text3.toStdString()+"\n";
        MyFile << "password: "+text4.toStdString()+"\n\n";

        // 关闭文件
        MyFile.close();
    } else {
        return 1;
    }

    return 0;
}

int Getrows()
{
    std::ifstream file("config.Mikasa");
    if (!file.is_open())
    {
        return 0;
    }

    std::string line;
    int lineCount = 0;

    while (std::getline(file, line)) {
        lineCount++;
    }

    file.close();

    lineCount = lineCount/6;

    return lineCount;
}


