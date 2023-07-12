#include "another.h"
#include "ui_another.h"
#include "QMessageBox"
#include "QInputDialog"
#include "QLineEdit"
#include "QString"
#include "QWidget"
#include "mainwindow.h"
Another::Another(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Another)
{
    ui->setupUi(this);
}

Another::~Another()
{
    delete ui;
}

void Another::on_pushButton3_clicked()
{
    QString number2Str= ui->lineEdit2->text();
        bool ok1;
        double number2 = number2Str.toDouble(&ok1);
        double number1 = number1Str.toDouble(&ok1);

         if (ok1)
         {
        QMessageBox::information(nullptr, "Результат", "Сумма введенных чисел: " +QString::number(number1+number2));
         }
         else {
                        QMessageBox::critical(this, "Ошибка", "Пожалуйста, введите корректные числа");
              }
}



void Another::on_pushButton4_clicked()
{
    QApplication::quit();
}

void Another::slot(QString a)
{
    number1Str= a;
}


