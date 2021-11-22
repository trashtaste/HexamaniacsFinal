#include "DragonSpaceCraftFactory.h"
#include "DragonSpacecraft.h"

using namespace std;

DragonSpaceCraftFactory::DragonSpaceCraftFactory() : DragonFactory()
{

}

DragonSpaceCraftFactory::~DragonSpaceCraftFactory()
{

}

payload * DragonSpaceCraftFactory::createDragon()
{
  payload * dragon = new rocketPayload();
  cout << "enter weight for DragonSpaceCraft: ";
  double i;
  cin >> i;
	dragon->add(new DragonSpaceCraft(i));
  return dragon;
}
