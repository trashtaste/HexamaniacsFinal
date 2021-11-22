#ifndef STATE3_H
#define STATE3_H

#include "State.h"

/**
ConcreteState participant
*/
class State3 : public State {
    public:
        /**
        Constructor for state3 class
        */
        State3();
        /**
        throw exception since it is already at end stage
        */
        virtual void handleChange(SpaceShip* ship);
        /**
        returns a string to represemt the current state
        */
        virtual string getState();
        
};

#endif //STATE3_H