#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H
#include<iostream>
#include "Dragon.h"

using namespace std;

//! DragonSpaceCraft Class
/*!
 The CrewDragon Class describes a payload that will hold cargo
	@author Tshegofatsho Motlatle
*/
class DragonSpaceCraft : public Dragon
{
private:
  //!cargo_weight variable
  /*!
    Indicates the amount of passengers in the spaceship
  */

  int cargo_weight;
public:
    //!Constructor
  /*!
    Instantiates a DragonSpaceCraft object
  */
  DragonSpaceCraft();

    //!Constructor
  /*!
    Instantiates a DragonSpaceCraft object
    \param w sets the weight of the DragonSpaceCraft
  */
  DragonSpaceCraft(int w);

  //!Destructor
  /*!
    Destroys a DragonSpaceCraft object
  */
  ~DragonSpaceCraft();

	//!Function to get the weight
	/*!
		\return cargo_weight of the DragonSpaceCraft
	*/
	virtual double getWeight();


	//!Function to set the weight
	/*!
	 \param w sets the cargo_weight of the DragonSpaceCraft
	*/
	virtual void setWeight(double w);
	//!implementation of the execute function
	/*!
	 provides additional functionality to the class holding it
	*/
	void execute();
};
#endif
