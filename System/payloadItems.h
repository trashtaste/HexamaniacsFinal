#include<iostream>
#include<vector> 
#include "payload.h" 
#ifndef payloadItems_H
#define payloadItems_H
//! payloadItems Class 

/* Serves as the decorator participant to decorate rocket payload items
   @author Rebecca Pillay

*/
class payloadItems: public payload
{
	
	public: 
		//! Constructor 

		/*
			Instantiates a payloadItems object
			and initializes it to 0

		*/
		payloadItems()		
		{
			item=0; 
		
		}; 
		//!Function to add payloadItem objects of type payload
		virtual void add(payload* payloadItems);  
		//! Destructor 

		/*
			Destroys payloadItem objects

		*/
		virtual ~payloadItems();

	private:
		
		payload* item; 
		
}; 


#endif 
