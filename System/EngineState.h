#ifndef ENGINESTATE_H
#define ENGINESTATE_H

#include <iostream>

using namespace std;

//! EngineState Class
/*!
 Defines the interface for EngineState
*/
class EngineState
{
    public:
    	 //!Constructor
  /*!
    Instantiates an EngineState object
  */
        EngineState();

//! Copy Constructor
  /*!
    Copies an EngineState object
  */

        EngineState(const EngineState& s);   // copy constructor

//! A function to set the changed variable
  /*!
    Sets changed
  */
        void setChanged();

//! A function to show the state of the engine
  /*!
    Shows engine state
  */
   void showEngineState();
       
    private:
        bool changed;
        
};
#endif
