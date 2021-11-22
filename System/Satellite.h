#include<iostream>
#ifndef Satellite_H
#define Satellite_H
using namespace std;

#include "Communicate.h"

/**
  Base class for StarlinkSatellite
 */
class Satellite
{
	public:
		//! Constructor

		/* Instantiates a Satellite Object */
		Satellite(double w); 
		/**
		 Used to add a next satellite
		*/
		virtual void add(Satellite* n);
		//! destructor

		/* destroys the object */
		virtual ~Satellite();
		/**
 		 Used to add a communicate object for the command pattern
 		*/	
		virtual void addComm(Communicate*) = 0;
		/**
		 returns the weight of the satellite
		*/
		double getWeight();
		/**
			returns the next satellite
		*/
		Satellite* getNext();
		/**
		 used to receive a laser message 
		*/
		virtual void lmessage() = 0;
		protected:
			
			double weight;
			Satellite(const Satellite&);
	Satellite* next;
};

#endif
