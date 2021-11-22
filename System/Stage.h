#ifndef STAGE_H
#define STAGE_H
#include "Rocket.h"
#include<vector>
/**
	Inherits from the Rocket class.
	It has a single rocketCores member which is a vector that holds pointers to the Composite cores.
	Overides the adding, removing and executing methods defined by Rocket.
	
	@class Stage
	@brief  implements functionality and acts as the compoiste participant
	@author Thivessh Jhugroo
*/
class Stage: public Rocket
{
	private:
		/** 
			rocketCores holds the composite cores and leaf engines.
		*/
		vector<Rocket*> _rocketComponents;
		
	public:
		/**
			Stage constructor. it takes no parameters
		*/
		Stage(int stageID);
		/**
			Destructor calls the destructor of all the leaf components on the list.
		*/
		~Stage();
		/**
			executes all the leaf components for the stage.
		*/
		void execute();
		/**
			removes the last added component.
			
			@post removes components from list.
		*/
		void remove();
		/**
			adds component to the list.
	
			@param rocket The component pointer to be added.
			@post adds a component to list.
		*/
		void add(Rocket* rocket);
		/**
			returns total weight of all the components in the rocketComponents list
			@return double 
		*/	
		/**
			set the fuel vairable

			@param fuel value to set the fuel attribute to
		*/
		void setFuel(double fuel);
		/**
			returns the fuel attribute.
		*/
		double getFuel();
		/**
			returns total weight of all the stages in the stageList
			@return double
		*/
		double getWeight();
		/**
			returns sets the weight of componenets stageList
			@return double
		*/
		void setWeight(double w);
	
};


#endif