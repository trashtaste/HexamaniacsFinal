#include<iostream>
#include<vector>
#include "rocketPayload.h"

using namespace std;

void rocketPayload::add(payload* p)
{
	next.push_back(p);
}

double rocketPayload::getWeight()
{
	std::vector<payload*>::iterator it;
	double total = 0.0;
	// int temp = 0;
	for(it=next.begin(); it!=next.end(); ++it)
	{
		// cout<<++temp<<endl;
			total += (*it)->getWeight();
	}
return total;
}

void rocketPayload::execute()
{
	next[0]->execute();
		
}


/*void rocketPayload::remove()
{

	std::vector<payload*>::iterator it;

	for(it=next.begin(); it!=next.end(); ++it)
		delete *it;


}*/
