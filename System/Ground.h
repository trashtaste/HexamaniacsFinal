#include<iostream>
#ifndef Ground_H
#define Ground_H
#include "Communicate.h"
//! Ground Class
/*
	Receiver for the message transmission from the Satellite to ground user
	@author Rebecca Pillay
*/
class Ground{

public:
	//! function to receive communication
	void rmessage(); 
	//! adds the command to communicate with the satellite chain
	void addTarget(Communicate* t);
	//! function to send communication to using the target
	void Send();
private:
	//!command object to have the target receive a message
	Communicate* target;

}; 

#endif 
