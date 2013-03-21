#include "neworder.h"
#include "ui_neworder.h"


NewOrder::NewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewOrder)
{
    ui->setupUi(this);
}

NewOrder::~NewOrder()
{
    delete ui;
}

void NewOrder::on_okButton_clicked()
{

}
