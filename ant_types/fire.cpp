#include "fire.h"



Fire::Fire():Ant()
{
    cost = 4;
    damage = 3;
    armor = 1;
    id = -1;
    name = "Fire";
}


int Fire::action(bool attacking, Colony& c)
{
    if(!attacking)
    {
       if(this->armor <= 0)
          return this->damage; 
    }
    else
        return 0;
}
