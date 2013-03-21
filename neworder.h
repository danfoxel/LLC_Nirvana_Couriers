#ifndef NEWORDER_H
#define NEWORDER_H

#include <QDialog>

namespace Ui {
class NewOrder;
}

class NewOrder : public QDialog
{
    Q_OBJECT
    
public:
    explicit NewOrder(QWidget *parent = 0);
    ~NewOrder();
    
private slots:
    void on_okButton_clicked();

private:
    Ui::NewOrder *ui;
};

#endif // NEWORDER_H
