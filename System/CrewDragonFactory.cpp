#include "CrewDragonFactory.h"
#include "CrewDragon.h"
#include "rocketPayload.h"

using namespace std;

CrewDragonFactory::CrewDragonFactory() : DragonFactory()
{

}

CrewDragonFactory::~CrewDragonFactory()
{

}

payload * CrewDragonFactory::createDragon()
{
  payload * crew = new rocketPayload();
  cout << "enter weight for CrewDragon: ";
  double i;
  cin >> i;
	crew->add(new CrewDragon(i));  //WEIGHT to be decided according to payload specification
  return crew;
}
