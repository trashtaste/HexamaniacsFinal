#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H
#include "Rocket.h"
#include <iostream>

using namespace std;

//! RocketFactory Class
/*!
@author Tshegofatsho Motlatle
The RocketFactory Class will provide an interface for the creation of Rocket Factories.
Falcon9Rocket or FalconHeavyRocket both inherit and implment this class.
*/
class RocketFactory
{
public:
    //!Constructor
  /*!
    Instantiates a RocketFactory object
  */
  RocketFactory();

  //!Destructor
  /*!
    Destroys a RocketFactory object
  */
  virtual ~RocketFactory();

  //! A Function to create a new Rocket
  /*!
    \return a new instance of either Falcon9Rocket or FalconHeavyRocket
  */
  virtual Rocket * createRocket() = 0;

};
#endif
