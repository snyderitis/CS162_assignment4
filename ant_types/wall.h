#ifndef WALL_H
#define WALL_H
#include "../ant.h"
#include "../colony.h"
class Wall:public Ant{
    private:

    public:
        Wall();
        virtual int action(bool, Colony&);
};
#endif
