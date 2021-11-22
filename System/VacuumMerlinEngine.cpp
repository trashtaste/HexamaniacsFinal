#include "VacuumMerlinEngine.h"
#include<iostream>
VacuumMerlinEngine::VacuumMerlinEngine():Engine()
{
}

VacuumMerlinEngine::VacuumMerlinEngine(double mass, double fuel) : Engine(mass, fuel)
{

}

VacuumMerlinEngine::~VacuumMerlinEngine()
{
}

void VacuumMerlinEngine::execute()
{
	cout<<"\tVacuum engine fired up\n";
}
