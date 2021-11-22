#include<iostream>
#include "payload.h"
#include<vector>
#ifndef rocketPayload_H
#define rocketPayload_H
//! rocketPayload Class 

/* Rocket Payload Objects to be decorated with Payload Items
   @author Rebecca Pillay

*/
class rocketPayload: public payload

{
	public:
		//! Constructor 
		/*
			Instantiates a rocketPayload object
		*/
		rocketPayload() {};
		//!Function to add Payload Objects to the Rocket Payload
		virtual void add(payload*);
		//!Function to get weight of rocket payload objects
		virtual double getWeight();
		
		//! Destructor

	/*Destroys the rocketPayload Object*/
		virtual ~rocketPayload(){};


		std::vector<payload*>next;

		//!implementation of the execute function
		/*!
		 implementation of the execute function, additional functionality is added by its decorator
		*/
		void execute();
};

#endif
