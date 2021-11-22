#ifndef ENGINE_H
#define ENGINE_H
#include "Rocket.h"
/**
	Abstract class that extends Rocket class and defines interface for Engines.
	Defines primitive operations that inherited classes need to implement.

	@class Engine
	@brief  defines engine interface and acts as the abstract/leaf participant
	@author Thivessh Jhugroo
	@author Tshegofatsho Motlatle
*/
class Engine: public Rocket
{
private:
	//! mass variable
	/*!
	Detailed explination of fuel variable
	*/
	double weight;

	//! _on variable
	/*!
		This variable indicates whether the engine is switched on and idling or not
	*/
	bool _on;

	//! max_power variable
	/*!
		Indicates the maximum power output that can be produced by the engine
	*/
	double fuel; 

	public:
		/**
			Engine constructor. it taks no parameters
		*/
		Engine();
			//!Constructor
		/*!
			Instantiates a Engine object
			\param mass is a double that represents the mass of the engine excluding fuel
		*/
		Engine(double weight, double fuel);
		/**
			virtual destructor calls destructor of subclasses.
		*/
		virtual ~Engine();
		/**
			pure virtual function to be defined by sub-concrete classes
		*/
		virtual void execute()=0;
	

		//! A Function to get the mass
		/*!
		\return mass of Engine
		*/
		virtual double getWeight();

		
		/**
			sets the weight of componenets stageList
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



		//! A Function to check whether the engine is on or not
		/*!
		\return boolean true when engine is on and false when engine is off
		*/
		virtual bool isOn();

		//! A Function to switch the engine on
		/*!
			This function will turn the engine on, if the engine is already turned on,
			it will ignore the request and display an appropriate message
			\return void
		*/
		virtual void switchOn();

		//! A Function to switch the engine off
		/*!
			This function will turn the engine off, if the engine is already turned off,
			it will ignore the request and display an appropriate message
			\return void
		*/
		virtual void switchOff();
		//! A Function to return the Fuel amount
		/*!
			This function return the Fuel
			\return double
		*/
		


};
#endif
