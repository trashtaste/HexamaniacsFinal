#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

//! Caretaker Class
/*!
 Defines the interface for Caretaker
*/
class Caretaker
{
    public:
    	 //!Constructor
  /*!
    Instantiates a Caretaker object
  */
        Caretaker();

 //! A Function to get an instance of Memento
  /*!
    \return an instance of Memento
  */
        Memento* getMemento();

//! A Function to set an instance of Memento
  /*!
    \sets the Memento
  */

        void setMemento(Memento*);
    private:
        /**
            Variable to hold the memento.
        */
        Memento* memento;
};
#endif
