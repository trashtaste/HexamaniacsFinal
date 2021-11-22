#include<iostream>
#ifndef Communicate_H
#define Communicate_H
//! Communicate Class
/*
	Declared an interface for the executing the "execute" operation
	@author Rebecca Pillay
*/
class Communicate{

	public:
		//! Execute Function
		/*
			Executes the message transmission commands for ground and Starlink Satellites
		*/
		virtual void execute(); 
		
};

#endif 

