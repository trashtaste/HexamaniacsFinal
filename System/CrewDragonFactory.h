#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H
#include "Dragon.h"
#include "DragonFactory.h"
#include "payload.h"

using namespace std;

//! CrewDragonFactory Class
/*!
  The CrewDragonFactory Class will handle the creation of CrewDragon objects
*/
class CrewDragonFactory : public DragonFactory
{
private:
public:
    //!Constructor
  /*!
    Instantiates a CrewDragonFactory object
  */
  CrewDragonFactory();

  //!Destructor
  /*!
    Destroys a CrewDragonFactory object
  */
  ~CrewDragonFactory();


  //! A Function to create a new Dragon
  /*!
    \return a new instance of CrewDragon
  */
  virtual payload * createDragon();

};
#endif
