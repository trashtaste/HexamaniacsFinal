#include<iostream>
#include "Communicate.h" 
#ifndef StarlinkSatellite_H
#define StarlinkSatellite_H
#include "Satellite.h"

/**
  Starlink Satellites, inherits from Satellite
*/
class StarlinkSatellite : public Satellite {

public:
	//!Constructor
	/*!
	 instantiates the class's attributes
	*/
	StarlinkSatellite(double w); 
	//!Function to send a message to a ground target
	void groundMessage();
	//!Function to send a message to a satellite target
	void satelliteMessage(); 
	//!Function to receive a message
	void lmessage(); 
	//!Destructor
	/*!
	 destroys the object
	*/
	virtual ~StarlinkSatellite(); 
	
	

	Communicate* smessage;
	

	//!Constructor
	/*!
	 instantiates the class's attributes
	*/
	StarlinkSatellite(int w);
	//!Function to return a copy of this object using a copy constructor
	virtual StarlinkSatellite* clone();
	//!adds a communicate object 
	void addComm(Communicate*);


	//!implementation of the execute function
	/*!
	 provides additional functionality to the class holding it
	*/
	void execute();
protected:
	//!copy constructor
	/*!
	 instantiates the attributes of the class using attributes from the parsed in object
	*/
    StarlinkSatellite(const StarlinkSatellite&);

}; 




#endif 
