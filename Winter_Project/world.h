#ifndef WORLD_H
#define WORLD_H


#include <vector>

#include "Timer.h"


class World
{
private:

//instantiation of the world
World(){


}

vector<Ship*> SpaceShips;

public:

static World* getInstance(){
      if(instance == NULL){
          instance = new World;
      }
      return instance;
  }


    void updateWorld();


};

#endif // WORLD_H
