#include "Caretaker.h"
#include<iostream>
Caretaker :: Caretaker()
{}
    
Memento* Caretaker::getMemento()
{ 
	return memento; 
}

void Caretaker::setMemento(Memento* m)
{
	cout<<"Caretaker retrieved dropped stage!!\n";
	memento = m;
}
