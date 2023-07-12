#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<another.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
signals:
    void signal(QString);

private:
    Ui::MainWindow *ui;
    Another *ant;
};
#endif // MAINWINDOW_H
