#include "harvester.h"

Harvester::Harvester():Ant()
{
    armor = 1;
    cost = 2;
    damage = 0;
    id = -1;
    name = "Harvester";
    visible = true;

}

int Harvester::action(bool attack, Colony& c)
{
    if(!attack)
        c.set_food(c.get_food()+1);
    return damage;
}
