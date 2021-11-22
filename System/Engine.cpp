#include"Engine.h"
#include <iostream>

Engine::Engine() : Rocket()
{

}

Engine::Engine(double weight, double fuel)
{
  this->weight = weight;
  this->fuel = fuel;
  _on = false;
}

Engine::~Engine()
{

}

double Engine::getWeight()
{
  return weight;
}
void Engine::setWeight(double w)
{
    weight = w;
}
double Engine::getFuel()
{
    return fuel;
}
void Engine::setFuel(double fuel)
{
    this->fuel = fuel;
}

bool Engine::isOn()
{
  return _on;
}

void Engine::switchOn()
{
  if (!_on)
    _on = true;
  else
    cout<<"Engine has already been turned on"<<endl;
}

void Engine::switchOff()
{
  if (_on)
    _on = false;
  else
    cout<<"Engine has already been turned off"<<endl;
}
