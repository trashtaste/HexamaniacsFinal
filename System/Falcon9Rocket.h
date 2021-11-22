#ifndef FALCON9ROCKET_H
#define FALCON9ROCKET_H
#include "Rocket.h"
#include<vector>
/**
	Inherits from the Rocket class.
	It has a single stage list member which holds pointers to composite stages.
	Overides the adding, removing and executing methods defined by Rocket.
	
	@class Falcon9Rocket
	@brief  implements functionality and acts as the compoiste participant
	@author Thivessh Jhugroo
*/
class Falcon9Rocket: public Rocket
{
	private:
		/** 
			stage list a vector that holds a list of composite stages, to represent each stage in the rockets launch sequence
		*/
		vector<Rocket*> _stageList;
	public:
		/**
			the Falcon9Rocket constructor takes no paramater.
		*/
		Falcon9Rocket();
		/**
			Destructor calls the destructor of all the stages on the list.
		*/
		~Falcon9Rocket();
		/**
				executes all the stages for this rocket.
		*/
		void execute();
		/**
			performs execute on a specifc stage in the list.
	
			@param i The index of the stage you want to execute
			@post does not change object structure
		*/
		void execute(int i);
		/**
			removes the last added stage.
			
			@post removes stage from list.
		*/
		void remove();
		/**
			adds stage the back of the stage list
	
			@param rocket The stage pointer to be added.
			@post adds a stage to list.
		*/
		void add(Rocket* rocket);
		
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
		/**
			set the fuel vairable

			@param fuel value to set the fuel attribute to
		*/
		void setFuel(double fuel);
		/**
			returns the fuel attribute.
		*/
		double getFuel();

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
	
	
};


#endif