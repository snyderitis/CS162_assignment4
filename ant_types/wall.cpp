#include "wall.h"

Wall::Wall():Ant()
{
    id = -1;
    armor = 4;
    cost = 4;
    damage = 0;
    name = "Wall";
}


int Wall::action(bool arrack, Colony& c)
{
    return damage;
}
