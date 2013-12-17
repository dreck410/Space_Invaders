#include "ingame.h"
#include "ui_ingame.h"

inGame::inGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inGame)
{
    ui->setupUi(this);


    connect(Timer::getInstance()->getTimer(), &QTimer::timeout,this,&InGame::Animate);

}

inGame::~inGame()
{
    delete ui;
}


void inGame::Animate(){


}
