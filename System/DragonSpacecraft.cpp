#include "DragonSpacecraft.h"

using namespace std;

DragonSpaceCraft::DragonSpaceCraft() : Dragon()
{
  // cout<<"Dragon Spacecraft: Sending Cargo to the International Space Station"<<endl;
  cargo_weight = 0.0;
}

DragonSpaceCraft::DragonSpaceCraft(int w) : Dragon()
{
  // cout<<"Dragon Spacecraft: Sending Cargo to the International Space Station"<<endl;
  cargo_weight = w;
}

DragonSpaceCraft::~DragonSpaceCraft()
{
  cargo_weight = 0.0;
}

double DragonSpaceCraft::getWeight()
{
  return cargo_weight;
}

void DragonSpaceCraft::setWeight(double w)
{
  cargo_weight = w;
}

void DragonSpaceCraft::execute()
{
	cout << endl << " The DragonSpaceCraft has delivered its cargo to the ISS" << endl;
}