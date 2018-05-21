#include "space.h"

//constructor
Space::Space(){}


//mutators
void Space::add(Ant* ant){ants.push_back(ant);}
void Space::add(Bee* bee){bees.push_back(bee);}
bool Space::remove_bee(int index)
{
    if(index < bees.size() && index >= 0)
    {
        bees.erase(bees.begin() + index);
        return true;
    }
    else
        return false;
}
bool Space::remove_ant(int index)
{
    if(index < ants.size() && index >= 0)
    {
        ants.erase(ants.begin() + index);
        return true;
    }
    else
        return false;
}


//accessors
Ant* Space::get_ant(int index)
{
    if(index < ants.size() && index >= 0)
        return ants.at(index);
    return NULL;
}
Bee* Space::get_bee(int index)
{
    if(index < bees.size() && index >= 0)
        return bees.at(index);
    return NULL;
}
vector<Ant*>& Space::get_ants(){return ants;}
vector<Bee*>& Space::get_bees(){return bees;}

/*
 *  Function: is clear
 *  Description: checks if the space has any visible ants
 *  Parameters: none
 *  Pre-condintion: none
 *  Post-conditions: return true if ninja or nothing is on space, else false
 */
bool Space::is_clear()const
{
    if(ants.empty())
        return true;
    for(int i = 0; i < ants.size(); i++)
        if(ants.at(i)->is_visible())
            return false;
    return true;
}


/*
 *  Function: clean dead
 *  Description: if any ant or bee has zero armor, get it off
 *  Parameters: none
 *  Pre-conditions: none
 *  Post-conditions: any insect below zero armor removed
 */
void Space::clean_dead()
{
    int ants_dead=0,bees_dead=0;
    for(int i = 0; i < ants.size(); i++)
        if(ants.at(i)->get_armor() <= 0)
        {
            ants.erase(ants.begin()+i);
            ants_dead++;
        }
    for(int i = 0; i < bees.size(); i++)
        if(bees.at(i)->get_armor() <= 0)
        {
            bees.erase(bees.begin() + i);
            bees_dead++;
        }

    cout << ants_dead << " of your ants died.\n";
    cout << "You stopped " << bees_dead << " bees.\n";
}


/*
 *  Function: list bugs
 *  Description: list all the bees and ants on the space
 *  Parameters: none
 *  Pre-conditions: none
 *  Post-conditions: all bug names listed to screen
 */
void Space::list_bugs()const
{
    cout << "\033[96mAnts\033[0m\n";
    for(int i = 0; i < ants.size(); i++)
    {
        cout<< "    " << this->ants.at(i)->get_name();
        cout << "   Armor: " << this->ants.at(i)->get_armor()<< "\n";
    }    
    cout << "\033[93mBees\033[0m\n";
    for(int i = 0; i < bees.size(); i++)
    {
       cout << "    " << "Bee"; 
       cout << "   Armor: " << this->bees.at(i)->get_armor()<< "\n";
    }
}


Space::~Space()
{
    for(int i = 0; i < ants.size(); i++)
    {
        delete[] ants.at(i);
    }
    for(int i = 0; i < bees.size(); i++)
    {
        delete[] bees.at(i);
    }
}
