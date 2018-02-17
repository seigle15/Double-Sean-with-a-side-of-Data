#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    //void on_pushButton_Login_clicked();
    //void openAdminWindow();

private:
    Ui::MainWindow *ui;
    Admin *AdminWindow;
};

#endif // MAINWINDOW_H
