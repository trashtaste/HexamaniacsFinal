#include<iostream>
#include "Communicate.h" 
#include "Ground.h" 
#ifndef radioMessage_H
#define radioMessage_H
//! radioMessage Class
/*
	Binds ground and Starlink Satellite Receivers to operations for execution
	@author Rebecca Pillay
*/
class radioMessage: public Communicate{

public:
	//! Constructor 
	/*
	 Instatiates radioMessage object
	*/
	radioMessage(Ground* g);
	//! Message Transmission Operation to execute 
	void execute(); 
	
private:
	
	Ground* myRad; 


}; 

#endif 
