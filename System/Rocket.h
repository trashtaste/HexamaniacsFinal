#ifndef ROCKET_H
#define ROCKET_H
#include<vector>
#include "Memento.h"
using namespace std;
/**
	defines interface for rockets and its components.
	defines default behaviours for adding, removing and executing components, 
	the fuctionality of which can be redifined by the subclasses.
	
	@class Rocket
	@brief  Declares the interface for all objects in the composition
	@author Thivessh Jhugroo
*/
class Memento;
class Rocket
{
	private:
		//! fuel variable
		/*!
			indicate amount of fuel the rocket has
		*/
		double fuel;
	public:
		/**
			the Rocket constructor takes no paramaters.
		*/
		Rocket();
		/**
			Virtual destructor defers destruction method to subclasses.
		*/
		virtual~Rocket();
	
		/**
			virtual execute function that does nothing by default ,to be re-defined by the Falcon9Rocket and FalconHeavyRocket classes.
		*/
		virtual void execute();/**
			virtual execute function that does nothing by default ,to be re-defined by the Falcon9Rocket and FalconHeavyRocket classes.
			@param i index to be used by subclasses
		*/
		virtual void execute(int i);
		/**
			virtual remove function that does nothing by default ,to be re-defined by the Falcon9Rocket and FalconHeavyRocket classes.
		*/
		virtual void remove();
		/**
			virtual add function that does nothing by default ,to be re-defined by the Falcon9Rocket and FalconHeavyRocket classes.
			@param rocket The rocket-type attribute to be added.
		*/
		virtual void add(Rocket* rocket);
		
		/**
			set the fuel vairable
	
			@param fuel value to set the fuel attribute to
		*/
		virtual void setFuel(double fuel) = 0;
		/**
			returns the fuel attribute.
		*/
		virtual double getFuel() = 0;
		/**
			returns total weight of all the stages in the stageList
			@return double 
		*/	
		virtual double getWeight()=0;
		/**
			returns sets the weight of componenets stageList
			@return double
		*/
		virtual void setWeight(double w) = 0;


		//! A function to create a backup of the Memento
		  /*!
			Creates backup
		  */
		virtual Memento* dropStage1();
		 //! A function to restore a backup of the Memento
		   /*!
			Restores backup
		//  */
		virtual void restoreStage1(Memento* m);
		/** 
			ID to indicate the stage
		*/
		int stageID;	
		/** 
			_dislodged indicate whether stage1 of the rocket launch sequence is still attached 
		*/
		bool _dislodged;	
	
};

#endif