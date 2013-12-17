#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Start();
}


void MainWindow::Start()
{
    inGame* Game = new inGame();
    timer.getInstance()->getTimer()->setInterval(35);

    timer.getInstance()->getTimer()->start();
    Game->show();
    this->hide();

}
