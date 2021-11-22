#ifndef CORE_H
#define CORE_H
#include "Rocket.h"
#include<vector>
/**
	inherit extends Rocket class.
	It has a single engineList member which is a vector that holds pointers to the leaf engines.
	Overides the adding, removing and executing methods defined by Rocket.
	
	@class Core
	@brief  implements rocket interface and acts as a composite participant
	@author Thivessh Jhugroo
*/
class Core:public Rocket
{
	private:
		/** 
			_engineList holds the leaf components i.e engines.
		*/
		vector<Rocket*> _engineList;
	public:
		/**
			Core constructor. it taks no parameters
		*/
		Core();
		/**
			Destroys leaf in hierarchy.
			@post leaf 'node' removed from hierarchy.
		*/
		~Core();
		/**
			performs the execute on ALL coreMerlinEngine function.
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
			returns total weight of all the engines in the enginelist
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