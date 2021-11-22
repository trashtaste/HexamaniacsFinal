#include "ISSObservationRoom.h"
#include "SpaceShip.h"

ISSObservationRoom::ISSObservationRoom(SpaceShip* s)
{
    ship = s;
}

void ISSObservationRoom::update()
{
    roomState = ship->getState();
    cout << "the ISS confirms the ship state: "<<roomState << endl;
}

ISSObservationRoom::~ISSObservationRoom()
{
    cout << endl << "The ISS is no longer observing the ship... " << endl;
}
