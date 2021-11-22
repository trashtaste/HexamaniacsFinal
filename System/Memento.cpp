#include "Memento.h"


Rocket* Memento::getRocketStage(){
	 return rocketStage;
}

void Memento::setRocketStage(Rocket* rocketStage){
	this->rocketStage=rocketStage;
}