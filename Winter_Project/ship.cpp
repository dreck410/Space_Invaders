#include "ship.h"


//-----------Constructors-----------------//
Ship::Ship()
{
    speed = 1;
}

Good_Guy::Good_Guy():Ship()
{

}

Baddie::Baddie():Ship()
{

}

//----------------Methods-------------//

//Ship

void Ship::Move(){}

void Ship::setX(int newX){
    if(newX < 0){
        // too far to the left
        x = 0;
    }else{
        if(newX + Width > World::getInstance()->getWidth()){
            //too far to the right
            x = World::getInstance()->getWidth() - Width;
        }
    }
}//SetX

void Ship::setY(int newY){}


//Good_Guy

//Baddie:
void Baddie::Move(){

    //if this is true they are at the end.
if(setX(x + speed)){
    //they are at the end. negate speed...
    speed *= -1;
    //and increase Y getting them closer
    if(setY(y + 10)){
        //end of Game
        }
    }
}//Baddie::Move();

//sets the newX for the badguys. also returns true or false if they are
//at the extremes.
bool Baddie::setX(int newX){
    x = newX;
    if(x < 0){
        // too far to the left
        x = 0;
        return true;
    }else{
        if(x + Width > World::getInstance()->getWidth()){
            //too far to the right
            x = World::getInstance()->getWidth() - Width;
            return true;
        }
    return false;
    }
}//baddie::setX

bool Baddie::setY(int newY){
    y = newY;
    if(y > World::getInstance()->getHeight() - (2 * Height)){
        //game is over
        return true;
    }
    return false;
}
