#ifndef DRAGONSPACECRAFTFACTORY_H
#define DRAGONSPACECRAFTFACTORY_H
#include "Dragon.h"
#include "DragonFactory.h"
#include "payload.h"
#include "rocketPayload.h"

using namespace std;

//! DragonSpaceCraftFactory Class
/*!
The DragonSpaceCraftFactory Class will handle the creation of DragonSpaceCraft objects
*/
class DragonSpaceCraftFactory : public DragonFactory
{
private:
public:
    //!Constructor
  /*!
    Instantiates a DragonSpaceCraft object
  */
  DragonSpaceCraftFactory();

  //!Destructor
  /*!
    Destroys a DragonSpaceCraft object
  */
  ~DragonSpaceCraftFactory();


  //! A Function to create a new Dragon
  /*!
    \return a new instance of DragonSpaceCraft
  */
  virtual payload * createDragon();

};
#endif
