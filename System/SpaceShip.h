
#ifndef SPACESHIP_H
#define SPACESHIP_H
#include "ISS.h"
#include <iostream>
#include <string>
#include "payload.h"
#include "Rocket.h"
#include "State.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"




using namespace std;





//! SpaceShip class
/*!
* Is the subject participant in the Observer Design Pattern.
*/
class SpaceShip
{
public:
  SpaceShip(int payloadType, int rocketType);
  ~SpaceShip();

//! attach method
/*!
* Attaches a pointer to an ISS observer to the Observer variable.
*/
    void attach(ISS* observer);

//! detach method
/*!
* Detaches the current Observer by setting it to NULL.
*/
    void detach();
    
//! notify method
/*!
* A pure virtual method that will be implemented by the concrete subject class ShipLaunched.
*/
    
    

    //
    /**
         used to change between states
    */
    void changeState();
    /**
     returns current state as a string
    */
    string getState();
    /**
     sets current state 
    */
    void setState(State* state);
    /**
     notifies the observer of a state change
    */
    void notify();
    /**
      used to modify the attributes of the class by calling relavent operations from the design patterns
    */
    void modify();
    /**
     Starts the static fire test by calling the rocket's operation
    */
    void start();
    /**
     checks whether there is enough fuel to proceed and returns the result
    */
    bool enoughFuel();
    /**
      calls the payload's functionality
      to be used in state3
    */
    void inOrbit();

protected:
    ISS* Observer; //!< A pointer to an object of type ISS.
    payload* _payload; //!< A pointer to an object of type Payload.
    Rocket* rocket; //!< A pointer to an object of type Rocket.

    Memento* m;

    //
private:
     
    State* state = new State1();
};

#endif /* SPACESHIP_H */
