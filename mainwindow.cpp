#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString str = "hello";
    qDebug() << str;
    str.prepend("haha");
    qDebug() << str;
    str.append("yaya");
    qDebug() << str;

    QString str2 = "momo ";
    QString str3 = str2+str;
    qDebug() << str3.size() << str3;
}

MainWindow::~MainWindow()
{
    delete ui;
}
