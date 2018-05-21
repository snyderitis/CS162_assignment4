#include "ant.h"


//Constructor
Ant::Ant()
{
    armor = 0;
    cost = 0;
    range = 0;
    damage = 0;
    block = false;
    id = -1;
    can_share = false;
    visible = true;
}


//Accessors
string Ant::get_name() const{return this->name;}
bool Ant::is_visible() const{return this->visible;}
bool Ant::will_share() const{return this->can_share;}
int Ant::do_damage() const{return this->damage;}
int Ant::get_armor() const{return this->armor;}
int Ant::get_range() const{return this->armor;}
int Ant::get_cost() const{return this->cost;}
bool Ant::is_blocking() const{return this->block;}
int Ant::get_id() const{return this->id;}

//Mutators
void Ant::set_name(string name){this->name = name;}
void Ant::set_damage(int damage){this->damage = damage;}
void Ant::set_cost(int cost){this->cost = cost;}
void Ant::set_range(int range){this->range = range;}
void Ant::set_armor(int armor){this->armor = armor;}
void Ant::set_blocking(bool block){this->block = block;}
void Ant::set_share(bool share){this->can_share = share;}
void Ant::set_visible(bool visible){this->visible = visible;}
void Ant::set_id(int id){this->id = id;}


/*
 *  Function: take damage
 *  Description: Subtract damage from armor
 *  Parameters: int damage taken
 *  Pre-conditions: none
 *  Post-conditions: damage subtracted from armor
 */
void Ant::take_damage(int d)
{
    this->armor -= d;
}
