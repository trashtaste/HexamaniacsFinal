#include "State2.h"
#include "State3.h"
#include "SpaceShip.h"

State2::State2() : State("The second stage has been dropped.") {
    
}

void State2::handleChange(SpaceShip* ship){
    ship->setState(new State3());
}

string State2::getState(){
    return state;
}

