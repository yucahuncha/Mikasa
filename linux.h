#ifndef LINUX_H
#define LINUX_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include "form1.h"
#include "Qloadsql.h"

namespace Ui {
class Linux;
}

class Linux : public QDialog
{
    Q_OBJECT

public:
    explicit Linux(QWidget *parent = nullptr);
    ~Linux();

private slots:
    void on_ok_clicked();

    void on_no_clicked();

private:
    Ui::Linux *ui;
};

#endif // LINUX_H
