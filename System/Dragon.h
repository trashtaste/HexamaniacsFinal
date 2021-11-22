#include<iostream>
#include "payloadItems.h"
#ifndef Dragon_H
#define Dragon_H
//! Dragon Class
/*!
 Defines the interface for CrewDragon amd DragonSpaceCraft which inherit and implement this class
 @author Tshegofatsho Motlatle
*/
class Dragon : public payloadItems
{
private:
public:
    //!Constructor
  /*!
    Instantiates a Dragon object
  */
  Dragon();

  //!Destructor
  /*!
    Destroys a Dragon object
  */
  virtual ~Dragon();

		//! Abstract Function to get the weight
		/*!
			\return cargo_weight of the CrewDragon or Spacecraft
		*/
		virtual double getWeight() = 0;


		//! Abstract Function to set the weight
		/*!
		 sets the cargo_weight of the CrewDragon or Spacecraft
		*/
		virtual void setWeight(double w) = 0;

};
#endif
