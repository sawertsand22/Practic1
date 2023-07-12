#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QInputDialog"
#include "QLineEdit"
#include "QString"
#include "QWidget"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ant = new Another;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString number1Str= ui->lineEdit->text();
        bool ok1;
        double number1 = number1Str.toDouble(&ok1);
         if (ok1)
         {
             ant->show();
          connect(this,&MainWindow::signal,ant,&Another::slot);
            emit signal(ui->lineEdit->text());
            this->close();
         }
         else {
                        QMessageBox::critical(this, "Ошибка", "Пожалуйста, введите корректные числа");

              }
}

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}
