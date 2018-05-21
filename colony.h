#ifndef COLONY_H
#define COLONY_H

class Colony{
    private:
        int food;
    public:
        int get_food() const;
        void set_food(int);
        void subtract_food(int);
        Colony();

};

#endif
