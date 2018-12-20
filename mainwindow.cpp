#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QUrl url("file:/C:/Users/pc/Desktop/qt_baidumapAPI/myweb.html");
    ui->webView->setUrl(url);
}

MainWindow::~MainWindow()
{
    delete ui;
}
