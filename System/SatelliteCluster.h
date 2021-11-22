#include<iostream>
#include "payloadItems.h"
#include<vector>
#ifndef SatelliteCluster_H
#define SatelliteCluster_H
#include "StarlinkSatellite.h"
#include "Ground.h"
#include "laserMessage.h"
#include "radioMessage.h"
//! SatelliteCluster Class 

/* Acts as a Concrete Decorator, to hold Satellite Objects and Decorate the PayloadItems Class
   @author Rebecca Pillay

*/
class SatelliteCluster: public payloadItems
{

private:
		int cluster_weight;
		StarlinkSatellite* satellites;
	public:
		//! Constructor

		/* Instantiates a SatelliteCluster Object */
		SatelliteCluster();
		//! Constructor

		/* Instantiates a SatelliteCluster Object */
		SatelliteCluster(int w);
		//!Function to add satellites to the cluser
		void add(StarlinkSatellite*);
		//! Destructor

		/* destroys the object */
		virtual ~SatelliteCluster();
		//!Function to setup the satellites' communication chain
		void setComunication();
		//!returns the weight
		virtual double getWeight();

		//!implementation of the execute function
		/*!
		 provides additional functionality to the class holding it
		*/
		void execute();


		Ground* Sender;
		Ground* Receiver;
};
#endif
