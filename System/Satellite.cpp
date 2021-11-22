#include<iostream>
#include "Satellite.h"
#include<vector>

using namespace std;


Satellite::Satellite(double w)
{
	weight = w;
	next = NULL;
}
void Satellite::add(Satellite* n)
{
	if (next == NULL)
	{
		next = n;
	}
	else
	{
		next->add(n);
	}

}


//
Satellite::~Satellite(){
    
}

Satellite::Satellite(const Satellite& satellite){
	next = satellite.next;
	weight = satellite.weight;
}

double Satellite::getWeight()
{
	return weight;
}
Satellite* Satellite::getNext()
{
	return next;
}