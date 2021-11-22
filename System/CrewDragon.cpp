#include "CrewDragon.h"

using namespace std;

CrewDragon::CrewDragon() : Dragon()
{
  // cout<<"The Crew Dragon: Sending Cargo and Crew Members to the International Space Station"<<endl;
  crew_weight = 0.0;
}

CrewDragon::CrewDragon(int w) : Dragon()
{
  // cout<<"The Crew Dragon: Sending Cargo and Crew Members to the International Space Station"<<endl;
  crew_weight = w;
}

CrewDragon::~CrewDragon()
{
  crew_weight = 0.0;
}

double CrewDragon::getWeight()
{
  return crew_weight;
}

void CrewDragon::setWeight(double w)
{
  crew_weight = w;
}


void CrewDragon::execute()
{
	cout << endl << " The crewDragon has delivered its crew and cargo to the ISS" << endl;
}
