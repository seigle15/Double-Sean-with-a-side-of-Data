#ifndef CHANGEPRICE_H
#define CHANGEPRICE_H

#include <QDialog>

namespace Ui {
class changePrice;
}

class changePrice : public QDialog
{
    Q_OBJECT

public:
    explicit changePrice(QWidget *parent = 0);
    ~changePrice();

private slots:
    void on_pushButton_Price_clicked();

private:
    Ui::changePrice *ui;
};

#endif // CHANGEPRICE_H
