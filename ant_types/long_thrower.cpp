#include "long_thrower.h"

Long_Thrower::Long_Thrower():Ant()
{
    damage = 1;
    range = 4;
    armor = 1;
    cost = 3;
    id = 2;
    name = "Long Thrower";
}


int Long_Thrower::action(bool attack, Colony&c)
{
    if(attack)
    {
        return damage;
    }
    else
        return 0;
}
