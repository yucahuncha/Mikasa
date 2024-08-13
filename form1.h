#ifndef FORM1_H
#define FORM1_H

#include <QWidget>
#include "add.h"

namespace Ui {
class Form1;
}



class Form1 : public QWidget
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();


private slots:
    void on_pushButton_clicked();


private:
    Ui::Form1 *ui;
};

#endif // FORM1_H
