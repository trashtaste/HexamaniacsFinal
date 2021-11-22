#include<iostream>
#include "laserMessage.h"
#include "StarlinkSatellite.h" 

using namespace std; 

laserMessage::laserMessage(Satellite* s)
{
	mySat=s; 


}

void laserMessage::execute()
{

	mySat->lmessage(); 

}
