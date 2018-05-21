#include "thrower.h"

Thrower::Thrower():Ant()
{
    armor = 1;
    cost = 4;
    id = 0;
    damage = 1;
    name = "Thrower";
    

}


int Thrower::action(bool attack, Colony& c)
{
    if(attack)
    {
        return damage;
    }
    return 0;
}
