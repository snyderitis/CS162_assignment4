#ifndef BEE_H
#define BEE_H
#include <iostream>
using namespace std;
class Bee{
    private:
        int armor;
        bool action;

    public:
        Bee();
        void take_damage(int);
        void set_armor(int);
        void action_done();
        void reset_action();
        int get_armor() const;
        bool action_spent()const;
};

#endif
