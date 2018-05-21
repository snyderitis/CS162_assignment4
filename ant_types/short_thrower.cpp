#include "short_thrower.h"

Short_Throw::Short_Throw():Ant()
{
    armor = 1;
    damage = 1;
    name = "Short Thrower";
    range = 2;
    cost = 3;
    id = 1;
}

int Short_Throw::action(bool attack, Colony&c)
{
    if(attack)
        return damage;
    else 
        return 0;
}
