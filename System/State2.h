#ifndef STATE2_H
#define STATE2_H

#include "State.h"

/**
ConcreteState participant
*/
class State2 : public State {
    public:
        /**
        Constructor for state2  class
        */
        State2();
        /**
        changed from state2 to state3
        */
        virtual void handleChange(SpaceShip* ship);
        /**
        returns a string to represemt the current state
        */
        virtual string getState();
        
};

#endif //STATE2_H