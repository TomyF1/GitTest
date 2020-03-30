#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "zweitesfenster.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    //connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));

    delete ui;

}


void MainWindow::on_Text_clicked()
{
   // QApplication::quit();

    ui->Anzeige->setPlainText("Version1");
}

void MainWindow::on_Aus_clicked()
{
     QApplication::quit();
}


void MainWindow::on_KlickMe_pressed()
{
    ui->Anzeige->setPlainText("Spielkind");

}

void MainWindow::on_pushButton_clicked()
{
   ZweitesFenster okklicked;
   okklicked.setModal(true);
   okklicked.exec();
}
