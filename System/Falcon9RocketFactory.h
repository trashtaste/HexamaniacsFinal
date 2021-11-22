#ifndef FALCON9ROCKETFACTORY_H
#define FALCON9ROCKETFACTORY_H
#include "Rocket.h"
#include "RocketFactory.h"

using namespace std;

//! Falcon9RocketFactory Class
/*!
@author Tshegofatsho Motlatle
The Falcon9RocketFactory Class will handle the creation of Falcon9Rocket objects
*/
class Falcon9RocketFactory : public RocketFactory
{
public:
    //!Constructor
  /*!
    Instantiates a Falcon9RocketFactory object
  */
  Falcon9RocketFactory();

  //!Destructor
  /*!
    Destroys a Falcon9RocketFactory object
  */
  ~Falcon9RocketFactory();

  //! A Function to create a new Falcon9Rocket
  /*!
    \return a new instance of FalconHeavyFalcon9Rocket
  */
  virtual Rocket * createRocket();

};
#endif
