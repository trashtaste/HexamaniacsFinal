#ifndef VACUUMMERLINENGINE_H
#define VACUUMENGINE_H
#include "Engine.h"
/**
	Concrete class that extends Engine class.
	implement primitive defined by the Engine class.
	Execute performs the vacuum engines function.

	@class VacuumMerlinEngine
	@brief  implements engine interface and acts as the concrete/leaf participant
	@author Thivessh Jhugroo
	@author Tshegofatsho Motlatle
*/
class VacuumMerlinEngine:public Engine
{
	public:
		/**
			VacuumMerlinEngine constructor. it taks no parameters
		*/
		VacuumMerlinEngine();
		//!Constructor
	  /*!
	    Instantiates a VacuumMerlinEngine object
	  */
	  VacuumMerlinEngine(double mass, double fuel);
		/**
			Destroys leaf in hierarchy.
			@post leaf 'node' removed from hierarchy.
		*/
		~VacuumMerlinEngine();
		/**
			performs the VaccumMerlinEngine function.
		*/
		void execute();





};
#endif
