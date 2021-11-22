#include"Falcon9Rocket.h"
#include<iostream>
Falcon9Rocket::Falcon9Rocket():Rocket()
{
	_dislodged=false;
	cout<<"Falcon9Rocket created\n";
}
Falcon9Rocket::~Falcon9Rocket()
{
	while(_stageList.empty()!=true)
	{
		Rocket* temp =_stageList[_stageList.size()-1];
		_stageList.pop_back();
		delete temp;
	}
}
void Falcon9Rocket::execute()
{
	for(int i=0;i<_stageList.size();i++)
	{
		cout<<"EXECUTING STAGE "<<_stageList[i]->stageID<<endl;
		_stageList[i]->execute();
		cout<<"~STAGE "<<_stageList[i]->stageID<<" is complete~\n\n";
	}
}
void Falcon9Rocket::execute(int i)
{
	bool bflag=false;
	for(int j=0;j<_stageList.size();j++)
	{
		if(_stageList[j]->stageID==i)
		{
			cout<<"EXECUTING STAGE "<<_stageList[j]->stageID<<endl;
			_stageList[j]->execute();
			cout<<"~STAGE "<<_stageList[j]->stageID<<" is complete~\n\n";
			bflag=true;
		}
	}
	if(!bflag)
	{
		cout<<"error: Stage "<<i<<" is not on the rocket\n";
	}
}
void Falcon9Rocket::remove()
{
	if(_stageList.empty()!=true)
	{
		_stageList.pop_back();
	}
	else
	{
		cout<<"Falcon9Rocket stage list is empty. cannot perform remove\n";
	}
}
void Falcon9Rocket::add(Rocket* rocket)
{
	_stageList.push_back(rocket);
}


double Falcon9Rocket::getWeight()
{
	double total=0;
	
	for(int i=0;i<_stageList.size();i++)
	{
		total=total+_stageList[i]->getWeight();

	}
	return total;
}
double Falcon9Rocket::getFuel()
{
	double total = 0;

	for (int i = 0; i < _stageList.size(); i++)
	{
		total = total + _stageList[i]->getFuel();

	}
	return total;
}
void Falcon9Rocket::setWeight(double w)
{

	for (int i = 0; i < _stageList.size(); i++)
	{
		_stageList[i]->setWeight(w);

	}

}
void Falcon9Rocket::setFuel(double fuel)
{

	for (int i = 0; i < _stageList.size(); i++)
	{
		_stageList[i]->setFuel(fuel);

	}

}

Memento* Falcon9Rocket::dropStage1()
{
	Memento* m=new Memento();
	if(_dislodged)
	{
		cout<<"Stage 1 has already been dropped\n";
	}
	else
	{
		cout<<"Dislodging Stage 1 of the rocket\n";
		Rocket* stage1=_stageList[0];
		Rocket* stage2=_stageList[1];
		_stageList.pop_back();
		_stageList[0]=stage2;
		
		m->setRocketStage(stage1);
		cout<<"stage 1 dropping back to Earth's surface\n";
		_dislodged=true;
	}
	return m;
}
void Falcon9Rocket::restoreStage1(Memento* m)
{
	cout << "Stage 1, with a weight of " << m->getRocketStage()->getWeight()<<"kg was retrieved and restored." << endl;
	_stageList.insert(_stageList.begin(),m->getRocketStage());
}













