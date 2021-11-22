#ifndef FALCONHEAVYROCKETFACTORY_H
#define FALCONHEAVYROCKETFACTORY_H
#include "Rocket.h"
#include "RocketFactory.h"

using namespace std;

//! FalconHeavyRocketFactory Class
/*!
@author Tshegofatsho Motlatle
The FalconHeavyRocketFactory Class will handle the creation of FalconHeavyRocket objects
*/
class FalconHeavyRocketFactory : public RocketFactory
{
public:
    //!Constructor
  /*!
    Instantiates a FalconHeavyRocketFactory object
  */
  FalconHeavyRocketFactory();

  //!Destructor
  /*!
    Destroys a FalconHeavyRocketFactory object
  */
  ~FalconHeavyRocketFactory();

  //! A Function to create a new FalconHeavyRocket
  /*!
    \return a new instance of FalconHeavyRocket
  */
  virtual Rocket * createRocket();

};
#endif
