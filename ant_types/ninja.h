#ifndef NINJA_H
#define NINJA_H
#include "../ant.h"
#include "../colony.h"
class Ninja:public Ant{
    public:
        Ninja();
        virtual int action(bool, Colony&);
    private:

};

#endif
