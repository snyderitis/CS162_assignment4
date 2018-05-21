#include "bodyguard.h"

Bodyguard::Bodyguard():Ant()
{
    this->armor = 2;
    this->damage = 0;
    this->cost = 4;
    can_share = true;
    this->id = 4;
    this->name = "Bodyguard";
}


int Bodyguard::action(bool attacking, Colony& c)
{
    return this->damage;
}
