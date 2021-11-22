#pragma once
#ifndef SIMULATION_H
#define SIMULATION_H

#include "SpaceShip.h"
#include "ISSObservationRoom.h"
#include <iostream>
//! simulation class
/*!
* Is the strategy interface of the Strategy Design Pattern.
*/
class simulation
{
public:
	//! run method
	/*!
	* pure virtual function to be implemented in concrete classes
	*/
	virtual void run()= 0;

	//! createShip method
	/*!
	* method used to initialize the ship member
	*/
	void createShip();
protected:
	SpaceShip* ship; //!< The spaceship involved in the simulation.
};

#endif