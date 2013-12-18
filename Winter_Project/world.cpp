#include "world.h"


World* World::instance=NULL;


World::World()
{


}

void World::updateWorld(){
    //updates the world on teh clocktick


}

void World::setWorldSize(int width,int height){
    WidthOfWorld = width;
    HeightOfWorld = height;

}
