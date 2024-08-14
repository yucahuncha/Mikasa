#ifndef WINDOWS_H
#define WINDOWS_H

#include <QDialog>
#include "Loadfile.h"
#include <QString>
#include <QMessageBox>

namespace Ui {
class Windows;
}

class Windows : public QDialog
{
    Q_OBJECT

public:
    explicit Windows(QWidget *parent = nullptr);
    ~Windows();

private slots:
    void on_ok_clicked();

    void on_no_clicked();

private:
    Ui::Windows *ui;
};

#endif // WINDOWS_H
