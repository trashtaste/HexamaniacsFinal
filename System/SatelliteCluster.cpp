#include<iostream>
#include "SatelliteCluster.h"
#include<vector>

using namespace std;

SatelliteCluster::SatelliteCluster() : payloadItems()
{
	cluster_weight = 0.0;
	satellites = NULL;
	Receiver = new Ground();
	Sender = new Ground();
}

SatelliteCluster::SatelliteCluster(int w) : payloadItems()
{
	cluster_weight = w;
	satellites = NULL;
}

void SatelliteCluster::add(StarlinkSatellite* s)
{
	if (satellites == NULL)
	{
		satellites = s;
	}
	else
	{
		satellites->add(s);
		cluster_weight += s->getWeight();
	}
}




SatelliteCluster::~SatelliteCluster()
{
	
}

double SatelliteCluster::getWeight()
{

	return cluster_weight;
}


void SatelliteCluster::setComunication()
{
	if (satellites != NULL)
	{
		Sender->addTarget(new laserMessage(satellites));
		Satellite* temp = satellites;
		while (temp->getNext() != NULL)
		{
			temp->addComm(new laserMessage(temp->getNext()));
			temp = temp->getNext();
		}
		temp->addComm(new radioMessage(Receiver));
	}
}


void SatelliteCluster::execute()
{
	cout << "Satellites deployed" << endl;
	Sender->Send();
}
