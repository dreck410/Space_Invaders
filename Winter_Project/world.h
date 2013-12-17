#ifndef WORLD_H
#define WORLD_H


#include "Timer.h"


class World
{
private:
//instantiation of the world
World(){


}

public:

static World* getInstance(){
      if(instance == NULL){
          instance = new World;
      }
      return instance;
  }


};

#endif // WORLD_H
