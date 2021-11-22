#include "SpaceShip.h"
#include "DragonSpaceCraftFactory.h"
#include "CrewDragonFactory.h"
#include "DragonFactory.h"
#include "RocketFactory.h"
#include "Falcon9RocketFactory.h"
#include "FalconHeavyRocketFactory.h"
#include "SatelliteCluster.h"
#include "MerlinEngineFactory.h"
#include "VacuumMerlinEngineFactory.h"

using namespace std;

SpaceShip::SpaceShip(int payloadType, int rocketType)
{
    Observer = NULL;
    
    switch (payloadType)
    {
      case 1:{
        DragonFactory * crewFactory = new CrewDragonFactory();
        _payload = crewFactory->createDragon();
        delete crewFactory;
        break;
      }
      case 2:{
        DragonFactory * dragonSpacecraftFactory = new DragonSpaceCraftFactory();
        _payload = dragonSpacecraftFactory->createDragon();
        delete dragonSpacecraftFactory;
        break;
        

      }
      default:{
        int size_satellites = 1;
        payload * satellites = new rocketPayload();
      	SatelliteCluster * cluster = new SatelliteCluster();
        cout<<"How many satelites must be added to the Payload: ";
        cin>>size_satellites;
        
        double j;
        cout << "What is the weight of an individual satellite: ";
        cin >> j;
        StarlinkSatellite* s =new StarlinkSatellite(j);
        

      	for (size_t i = 0; i < size_satellites; i++) {
      		cluster->add(s->clone()); //Weight of satelite to be decided
      	}
        cluster->setComunication();
      	satellites->add(cluster);
        _payload = satellites;
      }
        


      
    };
    switch (rocketType)
    {
    case 1: {
        RocketFactory* falconHeavyFactory = new FalconHeavyRocketFactory();
        rocket = falconHeavyFactory->createRocket();
        delete falconHeavyFactory;
        break;
    }
    case 2: {

        RocketFactory* falcon9RocketFactory = new Falcon9RocketFactory();
        rocket = falcon9RocketFactory->createRocket();
        delete falcon9RocketFactory;
        break;
    }
    };
    state = NULL;
}

SpaceShip::~SpaceShip()
{
  delete _payload;
  delete rocket;
}

void SpaceShip::attach(ISS* observer)
{
    cout << "the ship is being observed by the ISS and is ready to launch..." << endl;
    Observer = observer;
}

void SpaceShip::detach()
{
    Observer = NULL;
}


//

void SpaceShip::setState(State* state_) {
    delete state;
    state = state_;
}

void SpaceShip::changeState() {
    if (state == NULL)
    {
        state = new State1;

        int needed = rocket->getWeight()/3.4;
        int lost = rocket->getFuel();

        m = rocket->dropStage1();

        lost = lost - rocket->getFuel();

        if (lost > needed)
        {
            cout << lost - needed << " litres of fuel was wasted" << endl;
        }

    }
    else
    {
        state->handleChange(this);
    }
   
    notify();
}

string SpaceShip::getState() {
    return state->getState();
}

//
void SpaceShip::notify()
{
    

    cout << "The ship has changed state! Notifying ISS Observation room..." << endl;
    Observer->update();
    cout << endl;
}

void SpaceShip::start()
{
    rocket->execute();
}


bool SpaceShip::enoughFuel()
{
    cout << "Total available fuel: " << rocket->getFuel()<<" litres" << endl;
    cout << "Total remaining weight: " << rocket->getWeight() + _payload->getWeight()<<"kg" << endl;
    cout << endl;

    if (rocket->getFuel()*3.4 > rocket->getWeight() + _payload->getWeight())
    {
        cout << "there was enough fuel to get to next stage!" << endl;
        
        
        return true;
    }
    else
    {
        cout << "there was not enough fuel to get to next stage!" << endl;
        return false;
    }

    

    
}

void SpaceShip::inOrbit()
{
    
    _payload->execute();

    rocket->restoreStage1(m);
}

void SpaceShip::modify()
{
    cout <<endl<< "current total weight is: " << rocket->getWeight() + _payload->getWeight() << endl<<"MODIFY? yes(1), no(2)"<<endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter new total weight: " << endl;
        double weight;
        cin >> weight;
        rocket->setWeight(weight - _payload->getWeight());
    }


    cout <<endl<< "current remaining fuel is: " << rocket->getFuel() << endl << "MODIFY? yes(1), no(2)" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter new fuel amount: " << endl;
        double fuel;
        cin >> fuel;
        rocket->setFuel(fuel);
    }
}