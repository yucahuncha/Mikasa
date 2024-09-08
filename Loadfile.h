//
// Created by 橘子酱 on 2024/8/13.
//

#ifndef MIKASA_LOADFILE_H
#define MIKASA_LOADFILE_H

#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <QString>
#include <string>

using  namespace std;

int openfile(QString text1,QString text2,QString text3,QString text4);

int openfileWindows(QString text1,QString text2,QString text3,QString text4);

int openfileLinux(QString text1,QString text2,QString text3,QString text4);

int Getrows();

QString xinxi();



#endif //MIKASA_LOADFILE_H
