#ifndef BODYGUARD_H
#define BODYGUARD_H
#include "../ant.h"
#include "../colony.h"
class Bodyguard:public Ant{
    private:

    public:
        Bodyguard();
        virtual int action(bool, Colony&);
};
#endif
