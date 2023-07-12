/********************************************************************************
** Form generated from reading UI file 'another.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHER_H
#define UI_ANOTHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Another
{
public:
    QWidget *centralwidget;
    QSplitter *splitter_2;
    QLabel *label2;
    QLineEdit *lineEdit2;
    QSplitter *splitter;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Another)
    {
        if (Another->objectName().isEmpty())
            Another->setObjectName(QString::fromUtf8("Another"));
        Another->resize(173, 262);
        centralwidget = new QWidget(Another);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(10, 30, 160, 67));
        splitter_2->setOrientation(Qt::Vertical);
        label2 = new QLabel(splitter_2);
        label2->setObjectName(QString::fromUtf8("label2"));
        splitter_2->addWidget(label2);
        lineEdit2 = new QLineEdit(splitter_2);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        splitter_2->addWidget(lineEdit2);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton3 = new QPushButton(splitter);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        splitter->addWidget(pushButton3);
        pushButton4 = new QPushButton(splitter);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        splitter->addWidget(pushButton4);
        splitter_2->addWidget(splitter);
        Another->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Another);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 173, 22));
        Another->setMenuBar(menubar);
        statusbar = new QStatusBar(Another);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Another->setStatusBar(statusbar);
        toolBar = new QToolBar(Another);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Another->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Another);

        QMetaObject::connectSlotsByName(Another);
    } // setupUi

    void retranslateUi(QMainWindow *Another)
    {
        Another->setWindowTitle(QApplication::translate("Another", "MainWindow", nullptr));
        label2->setText(QApplication::translate("Another", "Input 2nd term", nullptr));
        pushButton3->setText(QApplication::translate("Another", "OK", nullptr));
        pushButton4->setText(QApplication::translate("Another", "Cancel", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Another", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Another: public Ui_Another {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHER_H
