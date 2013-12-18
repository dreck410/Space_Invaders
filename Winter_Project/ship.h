#ifndef SHIP_H
#define SHIP_H


#include "world.h"

class World;

class Ship{

protected:

    int Width;
    int Height;
    int x;
    int y;
    int speed;

public:
    Ship();
    void Move();

    //-----------------Setters-----------------------//
    void setX(int newX);


    void setY(int newY);

    void setSize(int newWidth, int newHeight){
        Width = newWidth;
        Height = newHeight;
    }

//------------------Getters-----------------------------------------
    int getX(){return x;}
    int getY(){return y;}
};


class Good_Guy : public Ship
{
public:
    Good_Guy();
};

class Baddie : public Ship
{
private:
public:
    Baddie();
    virtual void Move();
    virtual bool setX(int newX);
    virtual bool setY(int newY);



};

#endif // SHIP_H
