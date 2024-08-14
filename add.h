#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QMessageBox>
#include "Loadfile.h"
#include "windows.h"
#include "linux.h"

namespace Ui {
class add;
}



class add : public QDialog
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);
    ~add();


private slots:

    void on_Windows_clicked();

    void on_Linux_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
