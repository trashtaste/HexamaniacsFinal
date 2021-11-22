#include "launchSimulation.h"

void launchSimulation::run()
{
	cout << endl;

	//call methods from ship
	ISSObservationRoom* iss = new ISSObservationRoom(ship);
	ship->attach(iss);
	cout << endl;

	cout << "!!STATIC FIRE TEST!!" << endl << "==============================" << endl;
	ship->start();
	cout << "==============================" << endl << "ALL ENGINES STARTED SUCCESSFULLY" << endl;
	cout << "LAUNCHING" << endl << endl;
	if (ship->enoughFuel())
	{
		cout << endl;


		ship->changeState();



		if (ship->enoughFuel())
		{
			ship->changeState();
			ship->changeState();

			cout << endl;

			ship->inOrbit();

			cout << endl << "Simulation Result: SUCCESS" << endl;

			ship->detach();
			delete iss;


		}
		else
		{
			cout << endl << "Simulation Result: FAILURE" << endl;
			delete iss;
		}


	}
	else
	{
		cout << endl << "Simulation Result: FAILURE" << endl;
		delete iss;
	}

}

launchSimulation::launchSimulation()
{
	cout << "launch simulation created. " << endl;
}
