#ifndef VACUUMMERLINENGINEFACTORY_H
#define VACUUMMERLINENGINEFACTORY_H
#include "EngineFactory.h"

using namespace std;

//! VacuumMerlinEngineFactory Class
/*!
The VacuumMerlinEngineFactory Class will handle the creation of VacuumMerlinEngine objects
*/
class VacuumMerlinEngineFactory : public EngineFactory
{
public:
    //!Constructor
  /*!
    Instantiates a VacuumMerlinEngine object
  */
  VacuumMerlinEngineFactory();

  //!Destructor
  /*!
    Destroys a VacuumMerlinEngine object
  */
  virtual ~VacuumMerlinEngineFactory();

  //! A Function to create a new Engine
  /*!
    \return a new instance of VacuumMerlinEngine
  */
  virtual Engine * createEngine(double weight, double fuel);

};
#endif
