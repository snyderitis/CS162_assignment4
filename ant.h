#ifndef ANT_H
#define ANT_H
#include <iostream>
#include <string>
#include "colony.h"
using namespace std;
class Ant{
    protected:
        int armor;
        int cost;
        int range;
        int damage;
        bool block;
        bool can_share;
        bool visible;
        int id;
        string name;
    public:
        Ant();
        virtual int action(bool,Colony&) = 0;
        bool is_visible() const;
        bool will_share() const;
        int do_damage() const;
        int get_armor() const;
        int get_range() const;
        int get_cost() const;
        bool is_blocking() const;
        int get_id() const;
        void set_id(int);
        void set_damage(int);
        void set_cost(int);
        void set_range(int);
        void set_armor(int);
        void set_blocking(bool);
        void set_share(bool);
        void set_visible(bool);
        void take_damage(int);
        void set_name(string);
        string get_name()const;
};

#endif
