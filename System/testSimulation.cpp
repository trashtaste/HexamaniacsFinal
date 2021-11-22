#include "testSimulation.h"

void testSimulation::run()
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

		//stop and allow user to change
		cout << endl << "Do you wish to change attributes of remaining parts: yes (1), no (0)" << endl;

		int choice;
		cin >> choice;
		if (choice == 1)
		{
			ship->modify();
		}
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
		cout <<endl<< "Simulation Result: FAILURE" << endl;
		delete iss;
	}

	
}

testSimulation::testSimulation()
{
	cout << "test simulation created. " << endl;
}


