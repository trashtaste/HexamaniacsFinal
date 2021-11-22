#include "FalconHeavyRocketFactory.h"
#include "Core.h"
#include "Stage.h"
#include "VacuumMerlinEngine.h"
#include "MerlinEngine.h"
#include "FalconHeavyRocket.h"
#include "EngineFactory.h"
#include "VacuumMerlinEngineFactory.h"
#include "MerlinEngineFactory.h"
#include <iostream>

using namespace std;

FalconHeavyRocketFactory::FalconHeavyRocketFactory() : RocketFactory()
{
  cout<<"Creating FalconHeavyRocketFactory object"<<endl;
}

FalconHeavyRocketFactory::~FalconHeavyRocketFactory()
{
  cout<<"Destructing FalconHeavyRocketFactory object"<<endl;
}

Rocket * FalconHeavyRocketFactory::createRocket()
{
    //get weight and fuel amounts for constructors
    double wE;
    cout << "what is the weight of a Merlin Engine: ";
    cin >> wE;
    double fE;
    cout << "how much fuel is in a Merlin Engine: ";
    cin >> fE;


  EngineFactory * engineMaker[2];
  engineMaker[0] = new MerlinEngineFactory();
  engineMaker[1] = new VacuumMerlinEngineFactory();
  // Create 1 core for the engines
  Rocket * core[3];
  for (size_t i = 0; i < 3; i++)
  {
    core[i]= new Core();
  }
  for (size_t i = 0; i < 3; i++)
  {
    for (size_t t = 0; t < 9; t++)
    {
      // Allocate 9 engines forcore
      core[i]->add(engineMaker[0]->createEngine(wE,fE));
    }
  }
  Rocket * stage1 = new Stage(1);
  // Initialise 1st stage withcore
  for (size_t i = 0; i < 3; i++)
  {
    stage1->add(core[i]);
  }

  //get weight and fuel
  cout << "what is the weight of a vacuum Merlin Engine: ";
  cin >> wE;
  cout << "how much fuel is in a vacuum Merlin Engine: ";
  cin >> fE;

  // Create Vacum Engine, could be its own core as well to be consistent? i dont know
  Rocket * core_vacuum = new Core();
  core_vacuum->add(engineMaker[1]->createEngine(wE, fE));
  Rocket * stage2 = new Stage(2);
  stage2->add(core_vacuum);
  // Add both stages to rocket
  Rocket * falconHeavy = new FalconHeavyRocket();
  falconHeavy->add(stage1);
  falconHeavy->add(stage2);

  for (size_t i = 0; i < 2; i++)
  {
    delete engineMaker[i];
  }

  return falconHeavy;
}
