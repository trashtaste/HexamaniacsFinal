#include "MerlinEngine.h"
#include<iostream>
MerlinEngine::MerlinEngine():Engine()
{
	
}

MerlinEngine::MerlinEngine(double mass, double max) : Engine(mass, max)
{

}

MerlinEngine::~MerlinEngine()
{
}

void MerlinEngine::execute()
{
	cout<<"Merlin engine fired up\n";
}
