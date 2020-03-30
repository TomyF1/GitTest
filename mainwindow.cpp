#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Text_clicked()
{
   // QApplication::quit();

    ui->Anzeige->setPlainText("Ella");
}

void MainWindow::on_Aus_clicked()
{
     QApplication::quit();
}
