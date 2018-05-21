#ifndef SHORTTHROW_H
#define SHORTTHROW_H
#include "../ant.h"
#include "../colony.h"
class Short_Throw:public Ant{
    private:

    public:
        Short_Throw();
        virtual int action(bool, Colony&);
};
#endif
