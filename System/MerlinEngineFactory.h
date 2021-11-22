#ifndef MERLINENGINEFACTORY_H
#define MERLINENGINEFACTORY_H
#include "EngineFactory.h"

using namespace std;

//! MerlinEngineFactory Class
/*!
The MerlinEngineFactory Class will handle the creation of MerlinEngine objects
*/
class MerlinEngineFactory : public EngineFactory
{
public:
    //!Constructor
  /*!
    Instantiates a MerlinEngineFactory object
  */
  MerlinEngineFactory();

  //!Destructor
  /*!
    Destroys a MerlinEngineFactory object
  */
  virtual ~MerlinEngineFactory();

  //! A Function to create a new Engine
  /*!
    \return a new instance of MerlinEngine
  */
  virtual Engine * createEngine(double weight, double fuel);

};
#endif
