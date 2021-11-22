#include<iostream>
#include "StarlinkSatellite.h" 

using namespace std; 

StarlinkSatellite::StarlinkSatellite(double w):Satellite(w)
{
	smessage=NULL;
	

}

void StarlinkSatellite::satelliteMessage()
{

	smessage->execute( ); 

}

void StarlinkSatellite::groundMessage()
{

	smessage->execute( ); 

}

void StarlinkSatellite::lmessage()
{

	std::cout<<"Sending Laser Transmission to Starlink Satellites"<<std::endl; 
	smessage->execute();
}

//

StarlinkSatellite::StarlinkSatellite(int w): Satellite(w){
	smessage = NULL;
}

StarlinkSatellite::~StarlinkSatellite(){

}

StarlinkSatellite* StarlinkSatellite::clone(){
    return new StarlinkSatellite(*this);
}

StarlinkSatellite::StarlinkSatellite(const StarlinkSatellite& starlinkSatellite) : Satellite(starlinkSatellite){
	smessage = starlinkSatellite.smessage;
}

//
void StarlinkSatellite::addComm(Communicate* c)
{
	smessage = c;
}

void StarlinkSatellite::execute()
{
	
}