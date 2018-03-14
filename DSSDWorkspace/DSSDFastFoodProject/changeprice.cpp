#include "changeprice.h"
#include "ui_changeprice.h"
#include "restaurant.h"
#include "dbmanager.h"

changePrice::changePrice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePrice)
{
    ui->setupUi(this);
}

changePrice::~changePrice()
{
    delete ui;
}

void changePrice::on_pushButton_Price_clicked()
{

}
