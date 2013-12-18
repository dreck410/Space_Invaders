#ifndef GAMELABEL_H
#define GAMELABEL_H

#include <QLabel>
#include <QWidget>
#include <QString>

#include "ship.h"


class GameLabel: public QLabel
{
private:
    QWidget* win;
    Ship* ShipObj;
    int i;

public:
   explicit GameLabel(QWidget* parent, QString ShipType):QLabel(parent), win(parent){
        InitializeShip(ShipType);
    }
};

    void InitializeShip(QString ShipType);
    Ship* getShip(){
        return ShipObj;
    }
    void updatePosition();

#endif // GAMELABEL_H
