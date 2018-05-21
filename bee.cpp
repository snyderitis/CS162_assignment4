#include "bee.h"

//constructor
Bee::Bee():armor(3),action(false){};

/*
 *  Function: take damage
 *  Description: take an int and subtract from armor
 *  Parameters: int damage
 *  Pre-conditions: none
 *  Post-conditions: damage subbed from armor
 */
void Bee::take_damage(int damage)
{
    armor = armor - damage;
}

//accessors
int Bee::get_armor()const{return this->armor;}
bool Bee::action_spent()const{return this->action;}


//mutators
void Bee::set_armor(int armor){this->armor = armor;}
void Bee::action_done(){action = true;}
void Bee::reset_action(){action = false;}
