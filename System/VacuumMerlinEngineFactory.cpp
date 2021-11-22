#include "VacuumMerlinEngineFactory.h"
#include "VacuumMerlinEngine.h"

using namespace std;

VacuumMerlinEngineFactory::VacuumMerlinEngineFactory()
{

}

VacuumMerlinEngineFactory::~VacuumMerlinEngineFactory()
{

}

Engine * VacuumMerlinEngineFactory::createEngine(double weight, double fuel)
{
  return new VacuumMerlinEngine(weight, fuel);
}
