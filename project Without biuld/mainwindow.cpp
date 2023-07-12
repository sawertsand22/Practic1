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
             //AntW->show(); // Показываем второе окно
             //this->close();

             ant->show();

          connect(this,&MainWindow::signal,ant,&Another::slot);
            //connect(this,&MainWindow::signal,QString,Another::slot);
            emit signal(ui->lineEdit->text());
            this->close();
             //deleteLater();
        //QMessageBox::information(nullptr, "Результат", "Сумма введенных чисел: " +QString::number(number1));
         }
         else {
                        QMessageBox::critical(this, "Ошибка", "Пожалуйста, введите корректные числа");
      //QMessageBox:: critical(this,"LOL","ladno");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}
