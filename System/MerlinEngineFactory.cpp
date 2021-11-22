#include "MerlinEngineFactory.h"
#include "MerlinEngine.h"

using namespace std;

MerlinEngineFactory::MerlinEngineFactory()
{

}

MerlinEngineFactory::~MerlinEngineFactory()
{

}

Engine * MerlinEngineFactory::createEngine(double weight, double fuel)
{
  return new MerlinEngine(weight, fuel);
}
