#ifndef WORLD_H
#define WORLD_H


#include <vector>

#include "Timer.h"
//#include "ship.h"


using namespace std;

class Ship;

class World
{
private:

//instantiation of the world
World();
static World* instance;



vector<Ship*> SpaceShips;
int WidthOfWorld,HeightOfWorld;

public:

static World* getInstance(){
      if(instance == NULL){
          instance = new World;
      }
      return instance;
  }


    void updateWorld();

    void setWorldSize(int width, int height);

    //getters
    int getHeight(){return HeightOfWorld;}
    int getWidth() {return WidthOfWorld;}


};

#endif // WORLD_H
