#include "State1.h"
#include "State2.h"
#include "SpaceShip.h"

State1::State1() : State("The first stage has been dropped.") {
    
}

void State1::handleChange(SpaceShip* ship){
    ship->setState(new State2());
}

string State1::getState(){
    return state;
}

