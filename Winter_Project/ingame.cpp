#include "ingame.h"
#include "ui_ingame.h"
#include "World.h"

inGame::inGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inGame)
{
    ui->setupUi(this);
//insantiation of the Game GUI

    World::getInstance()->setWorldSize(this->width(),this->height());

    connect(Timer::getInstance()->getTimer(), &QTimer::timeout,this,&inGame::Animate);

}

inGame::~inGame()
{
    delete ui;
}


void inGame::Animate(){


}
