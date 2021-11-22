#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include "Engine.h"
/**
	Concrete class that extends Engine class.
	implement primitive functions defined by the Engine class.
	the execute method performs the merlin engines function.

	@class MerlinEngine
	@brief  implements engine interface and acts as the concrete/leaf participant
	@author Thivessh Jhugroo
	@author Tshegofatsho Motlatle
*/
class MerlinEngine : public Engine
{
	public:
		/**
			MerlinEngine constructor. it taks no parameters
		*/
		MerlinEngine();
		//!Constructor
		/*!
		Instantiates a MerlinEngine object
		*/
		MerlinEngine(double mass, double max);
		/**
			Destroys leaf in hierarchy.
			@post leaf 'node' removed from hierarchy.
		*/
		~MerlinEngine();
		/**
			performs the MerlinEngine function.
		*/
		void execute();
};
#endif
