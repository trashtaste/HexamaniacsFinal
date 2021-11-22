
#ifndef MEMENTO_H
#define MEMENTO_H

#include"Rocket.h"

//! Memento Class
/*!
 Defines the interface for Memento
*/
class Rocket;
class Memento
{
    public: 
    //! A function to get the Stage of the Rocket
/*!
 Returns Rocket Stage
*/       
        Rocket* getRocketStage();

      //! A function to set the Stage of the Rocket
/*!
 Sets Rocket Stage
*/ 
        void setRocketStage(Rocket* rocketStage);
    private:    
        Rocket* rocketStage;
};
#endif