#include "Core.h"
#include<iostream>

Core::Core():Rocket()
{
}

Core::~Core()
{
	while(_engineList.empty()!=true)
	{
		Rocket* temp =_engineList[_engineList.size()-1];
		_engineList.pop_back();
		delete temp;
	}
}
void Core::execute()
{
	cout<<"*Using a core\n";
	for(int i=0;i<_engineList.size();i++)
	{
		cout<<"\t#"<<i+1<<" ";
		_engineList[i]->execute();
	}
}

void Core::remove()
{
	if(_engineList.empty()!=true)
	{
		_engineList.pop_back();
	}
	else
	{
		cout<<"engine list is empty. cannot perform remove\n";
	}
}
void Core::add(Rocket* rocket)
{
	_engineList.push_back(rocket);
}
	


double Core::getWeight()
{
	double total=0;
	
	for(int i=0;i<_engineList.size();i++)
	{
		total=total+_engineList[i]->getWeight();

	}
	return total;
}


double Core::getFuel()
{
	double total = 0;

	for (int i = 0; i < _engineList.size(); i++)
	{
		total = total + _engineList[i]->getFuel();

	}
	return total;
}
void Core::setWeight(double w)
{

	for (int i = 0; i < _engineList.size(); i++)
	{
		_engineList[i]->setWeight(w);

	}

}
void Core::setFuel(double fuel)
{

	for (int i = 0; i < _engineList.size(); i++)
	{
		_engineList[i]->setFuel(fuel);

	}

}