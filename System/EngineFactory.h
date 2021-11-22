#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H
#include "Engine.h"

using namespace std;

//! EngineFactory Class
/*!
The EngineFactory Class will provide an interface for the creation of engine Factories.
MerlinEngineFactory and VacuumMerlinEngineFactory both inherit and implment it.
*/
class EngineFactory
{
public:
    //!Constructor
  /*!
    Instantiates a EngineFactory object
  */
  EngineFactory();

  //!Destructor
  /*!
    Destroys a EngineFactory object
  */
  virtual ~EngineFactory();

  //! A Function to create a new Engine
  /*!
    \return a new instance of either MerlinEngine or VacuumMerlinEngine
  */
  virtual Engine * createEngine(double weight, double fuel) = 0;

};
#endif
