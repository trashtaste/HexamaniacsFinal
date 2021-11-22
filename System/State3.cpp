#include "State3.h"
#include "State1.h"

State3::State3() : State("The Ship has docked at the Space station."){

}

void State3::handleChange(SpaceShip* ship){
    throw "Already at end State";
}

string State3::getState(){
    return state;
}