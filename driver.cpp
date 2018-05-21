#include "game.h"

int main()
{
    Game g;
    Colony c;
    bool playing = true;
    while(playing)
        playing = g.turn(c);
    return 0;
}
