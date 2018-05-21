#ifndef LONGTHROW_H
#define LONGTHROW_H
#include "../ant.h"
#include "../colony.h"
class Long_Thrower:public Ant{
    public:
        Long_Thrower();
        virtual int action(bool, Colony&);
    private:
};
#endif
