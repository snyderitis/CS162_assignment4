#include "useful_functions.h"
#include "./ant_types/harvester.h"
#include "./ant_types/thrower.h"
#include "./ant_types/fire.h"
#include "./ant_types/short_thrower.h"
#include "./ant_types/long_thrower.h"
#include "./ant_types/wall.h"
#include "./ant_types/ninja.h"
#include "./ant_types/bodyguard.h"
#include "colony.h"
#include <iostream>
using namespace std;
int main(){

    Harvester h;
    Thrower t;
    Ant** arr = new Ant*[2];
    arr[0] = &h;
    arr[1] = &t;
    Colony c;

    cout << arr[0]->get_id() << "\n";
    cout << arr[1]->get_id() << "\n";
    cout << arr[1]->action(false,c) << "\n";
    delete[] arr;
}
