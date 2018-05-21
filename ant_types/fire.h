#ifndef FIRE_H
#define FIRE_H
#include "../ant.h"
#include "../colony.h"
class Fire:public Ant{
    private:

    public:
        Fire();
        virtual int action(bool, Colony&);
};
#endif
