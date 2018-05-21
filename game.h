#ifndef GAME_H
#define GAME_H
#include "./ant_types/harvester.h"
#include "./ant_types/thrower.h"
#include "./ant_types/fire.h"
#include "./ant_types/short_thrower.h"
#include "./ant_types/long_thrower.h"
#include "./ant_types/wall.h"
#include "./ant_types/ninja.h"
#include "./ant_types/bodyguard.h"
#include "space.h"
#include "bee.h"
#include "colony.h"
#include <iostream>
#include <string>
#include "useful_functions.h"
using namespace std;

class Game{
    private:
        Space spaces[10];
    public:
        void do_attacks(Colony&);
        bool valid_place(int, Ant*);
        void ants_attack();
        void bees_attack(Colony&);
        void movement();
        bool turn(Colony&);
        bool prompt_user(Colony&);
        void print_options();
        bool create_place(Colony&, int);
        bool place(Ant*, Colony&);
        void print_board();

};

#endif
