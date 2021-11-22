#ifndef STATE1_H
#define STATE1_H

#include "State.h"

/**
ConcreteState participant
*/
class State1 : public State {
    public:
        /**
        Constructor of state1 class
        */
        State1();
        /**
        changed from state1 to state2
        */
        virtual void handleChange(SpaceShip * ship);
        /**
        returns a string to represemt the current state
        */        
        virtual string getState();
        

};

#endif //STATE_H