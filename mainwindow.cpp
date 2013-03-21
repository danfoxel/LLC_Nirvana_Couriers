#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "neworder.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    NewOrder *dialog = new NewOrder;
    dialog->show();

}
