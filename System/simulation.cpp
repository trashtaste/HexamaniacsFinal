#include "simulation.h"

void simulation::createShip( )
{
	int i, j;
	cout << "Select payload type: CrewDragon (1), DragonSpaceCraft(2), Satellites(3)" << endl;
	cin >> i;

	cout << "Select rocket type: falconHeavy(1), falcon9Rocket(2)" << endl;
	cin >> j;
	ship = new SpaceShip(i,j);
}