#ifndef DRAGONFACTORY_H
#define DRAGONFACTORY_H
#include "Dragon.h"
#include "payload.h"

using namespace std;

//! DragonFactory Class
/*!
  The DragonFactory Class will provide an interface for the creation of Dragon Factories.
  CrewDragonFactory and DragonSpaceCraftFactory both inherit and implment it.
*/
class DragonFactory
{
private:
public:
    //!Constructor
  /*!
    Instantiates a DragonFactory object
  */
  DragonFactory();

  //!Destructor
  /*!
    Destroys a DragonFactory object
  */
  virtual ~DragonFactory();


  //! A Function to create a new Dragon
  /*!
    \return a new instance of either CrewDragon or DragonSpaceCraft
  */
  virtual payload * createDragon() = 0;

};
#endif
