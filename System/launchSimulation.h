#pragma once
#ifndef LAUNCHSIMULATION_H
#define LAUNCHSIMULATION_H

#include "simulation.h"

//! launchSimulation class
/*!
* Is a Concrete strategy of the Strategy Design Pattern.
*/
class launchSimulation : public simulation
{
public:
	//! run method
	/*!
	* implementation of the run function. This function will run the simlation as though it were a real launch
	*/
	void run();

	//! launchSimulation method
	/*!
	* default constructor
	*/
	launchSimulation();
};

#endif