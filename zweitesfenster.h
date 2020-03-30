#ifndef ZWEITESFENSTER_H
#define ZWEITESFENSTER_H

#include <QDialog>

namespace Ui {
class ZweitesFenster;
}

class ZweitesFenster : public QDialog
{
    Q_OBJECT

public:
    explicit ZweitesFenster(QWidget *parent = nullptr);
    ~ZweitesFenster();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ZweitesFenster *ui;
};

#endif // ZWEITESFENSTER_H
