#include<iostream>
#include "Ground.h"

using namespace std; 

void Ground::rmessage()
{
	std::cout<<"Sending Radio Transmission to Ground"<<std::endl; 
	cout << "received message" << endl;

}
void Ground::addTarget(Communicate* t)
{
	target = t;
}


void Ground::Send()
{
	cout << "testing satellite chain" << endl;
	target->execute();
}