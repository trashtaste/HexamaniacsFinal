#ifndef STATE_H
#define STATE_H



class SpaceShip;
#include <string>

using namespace std;

/**
State participant
*/
class State {
    public:
        /**
         Constructor of state class
        */
        State(string s);
        /**
        pure virtual funvtion used to change from state to state
        */
        virtual void handleChange(SpaceShip * ship) = 0;
        /**
         returns the state as a string
        */
        virtual string getState() = 0;
        /**
         virtual destructor
        */        
        virtual ~State();
    
    protected :
        string state;
};

#endif //STATE_H