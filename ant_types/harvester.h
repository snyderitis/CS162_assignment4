#ifndef HARVESTER_H
#define HARVESTER_H
#include "../ant.h"
#include "../colony.h"
class Harvester:public Ant{
    private:
        
    public:
        Harvester();
        virtual int action(bool, Colony&);
};
#endif
