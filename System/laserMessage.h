#include<iostream>
#include "StarlinkSatellite.h" 
#include "Communicate.h" 
#ifndef laserMessage_H
#define laserMessage_H
//! laserMessage Class
/*
	Binds ground and Starlink Satellite Receivers to operations for execution
	@author Rebecca Pillay
*/

class laserMessage:public Communicate{

public:
	//! Constructor 
	/*
	 Instatiates laserMessage object
	*/
	laserMessage(Satellite* s);
	//! Message Transmission Operation to execute 
	void execute(); 
	
private:

	Satellite* mySat; 


}; 

#endif 
