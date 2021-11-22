#include<iostream>
#include<vector>
#ifndef payload_H
#define payload_H
//! payload Class

/* Serves as an interface for decorating various rocket payload items
   @author Rebecca Pillay

*/
class payload
{
	public:
		//! Constructor

		/* Instantiates a payload Object */
		payload();

		/* Function to add new payload obejcts */
		virtual void add(payload*)=0;

		//!Destructor
	  /*!
			Destroys a payload object
	  */
		virtual ~payload();
		/* Function to use the payloads functionality in orbit */
		virtual void execute();
		/* Function to get weight of payload obejcts */
		virtual double getWeight() = 0;

};

#endif
