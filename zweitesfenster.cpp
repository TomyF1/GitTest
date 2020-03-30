#include "zweitesfenster.h"
#include "ui_zweitesfenster.h"


ZweitesFenster::ZweitesFenster(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZweitesFenster)
{
    ui->setupUi(this);
}

ZweitesFenster::~ZweitesFenster()
{
    delete ui;
}

void ZweitesFenster::on_pushButton_clicked()
{
    close();
}
