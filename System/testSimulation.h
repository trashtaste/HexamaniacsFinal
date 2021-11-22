#pragma once
#ifndef TESTSIMULATION_H
#define TESTSIMULATION_H

#include "simulation.h"
class testSimulation : public simulation
{
public:
	//! run method
	/*!
	* implementation of the run function. This function will allow the user to modify the simulation at set intervals.
	*/
	void run();

	//! testSimulation method
	/*!
	* default constructor
	*/
	testSimulation();
};

#endif