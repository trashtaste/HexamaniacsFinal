#include"Stage.h"
#include<iostream>
Stage::Stage(int stageID):Rocket()
{
	this->stageID=stageID;
}
Stage::~Stage()
{
	while(_rocketComponents.empty()!=true)
	{
		Rocket* temp =_rocketComponents[_rocketComponents.size()-1];
		_rocketComponents.pop_back();
		delete temp;
	}
}
void Stage::execute()
{
	for(int i=0;i<_rocketComponents.size();i++)
	{
		_rocketComponents[i]->execute();
	}
}
void Stage::remove()
{
	if(_rocketComponents.empty()!=true)
	{
		_rocketComponents.pop_back();
	}
	else
	{
		cout<<"stage component list is empty. cannot perform remove\n";
	}
}
void Stage::add(Rocket* rocket)
{
	_rocketComponents.push_back(rocket);
}
	
double Stage::getWeight()
{
	double total=0;
	
	for(int i=0;i<_rocketComponents.size();i++)
	{
		total=total+_rocketComponents[i]->getWeight();

	}
	return total;
}

double Stage::getFuel()
{
	double total = 0;

	for (int i = 0; i < _rocketComponents.size(); i++)
	{
		total = total + _rocketComponents[i]->getFuel();

	}
	return total;
}
void Stage::setWeight(double w)
{

	for (int i = 0; i < _rocketComponents.size(); i++)
	{
		_rocketComponents[i]->setWeight(w);

	}

}
void Stage::setFuel(double fuel)
{

	for (int i = 0; i < _rocketComponents.size(); i++)
	{
		_rocketComponents[i]->setFuel(fuel);

	}

}













