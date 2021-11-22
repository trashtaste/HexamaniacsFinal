#ifndef CREWDRAGON_H
#define CREWDRAGON_H
#include<iostream>
#include "Dragon.h"

using namespace std;

//! CrewDragon Class
/*!
 The CrewDragon Class describes a payload that will hold passengers
 @author Tshegofatsho Motlatle
*/
class CrewDragon : public Dragon
{
private:
  //!passenger_count variable
  /*!
    Indicates the amount of passengers in the spaceship
  */
  int passenger_count;

  //!crew_weight variable
  /*!
    Indicates the weight of this payload including the passengers on board
  */
  double crew_weight;
public:
    //!Constructor
  /*!
    Instantiates a CrewDragon object
  */
  CrewDragon();

  //!Constructor
  /*!
  Instantiates a DragonSpaceCraft object
  \param w sets the weight of the DragonSpaceCraft
  */
  CrewDragon(int w);

  //!Destructor
  /*!
    Destroys a CrewDragon object
  */
  ~CrewDragon();


	//!Function to get the passenger_count
	/*!
	\return passenger_count of the CrewDragon
	*/
	int getPassengerCount();
	//!Function to set the passenger_count
	/*!
	 sets passenger_count of the CrewDragon
	*/

	void setPassengerCount(int p);

	//!Function to get the weight
	/*!
		\return cargo_weight of the CrewDragon
	*/
	virtual double getWeight();


	//!Function to set the weight
	/*!
	 sets the cargo_weight of the CrewDragon
	*/
	virtual void setWeight(double w);

	//!implementation of the execute function
	/*!
	 provides additional functionality to the class holding it
	*/
	void execute();

};
#endif
