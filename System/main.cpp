
#include "testSimulation.h"
#include "launchSimulation.h"
#include <vector>

using namespace std;

int main()
{
	vector<simulation*> batch;
	simulation* current;
	int i = 0;
	do
	{
		cout << "do you want to simulate in test mode (1)" << endl << "set up launch simulations (2)" << endl << "or exit (3):" << endl;
		cin >> i;
		if (i == 1)
		{
			current = new testSimulation();
			current->createShip();
			current->run();
			delete current;
		}
		else if (i == 2)
		{
			do
			{
				current = new launchSimulation();
				current->createShip();
				batch.push_back(current);
				cout << "do you wish to add another simulation to the batch yes(1), no(2):" << endl;
				cin >> i;

			} while (i == 1);
			for (simulation* j : batch)
			{
				j->run();
				cout << endl;
			}


			i = 2;

			
		}
		cout << endl;
		
	} while (i != 3);

	return 0;
}