#ifndef ANOTHER_H
#define ANOTHER_H

#include <QMainWindow>
#include "QString"
namespace Ui {
class Another;
}

class Another : public QMainWindow
{
    Q_OBJECT

     QString number1Str;

public:
    explicit Another(QWidget *parent = nullptr);
    ~Another();

private slots:
    void on_pushButton3_clicked();


    void on_pushButton4_clicked();

private:
    Ui::Another *ui;


public slots:
    void slot(QString a);

};

#endif // ANOTHER_H
