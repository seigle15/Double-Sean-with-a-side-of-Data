#ifndef ADDMENUITEM_H
#define ADDMENUITEM_H

#include <QDialog>

namespace Ui {
class addMenuItem;
}

class addMenuItem : public QDialog
{
    Q_OBJECT

public:
    explicit addMenuItem(QWidget *parent = 0);
    ~addMenuItem();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addMenuItem *ui;
};

#endif // ADDMENUITEM_H
