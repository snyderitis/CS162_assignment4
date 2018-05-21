#ifndef SPACE_H
#define SPACE_H
#include <vector>
#include <iostream>
#include <string>
#include "ant_types/harvester.h"
#include "ant_types/thrower.h"
#include "ant_types/fire.h"
#include "ant_types/long_thrower.h"
#include "ant_types/short_thrower.h"
#include "ant_types/wall.h"
#include "ant_types/ninja.h"
#include "ant_types/bodyguard.h"
#include "bee.h"
#include "colony.h"
using namespace std;

class Space{
    private:
        vector<Ant*> ants;
        vector<Bee*> bees;
    public:
        Space();
        void list_bugs() const;
        void add(Ant*);
        void add(Bee*);
        Ant* get_ant(int);
        Bee* get_bee(int);
        bool remove_ant(int);
        bool remove_bee(int);
        vector<Ant*>& get_ants();
        vector<Bee*>& get_bees();
        bool is_clear()const;
        void clean_dead();
        ~Space();
};

#endif
