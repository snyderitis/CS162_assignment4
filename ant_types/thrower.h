#ifndef THROWER_H
#define THROWER_H
#include "../ant.h"
#include "../colony.h"
class Thrower:public Ant{
    private:

    public:
        Thrower();
        virtual int action(bool,Colony&);
};

#endif
