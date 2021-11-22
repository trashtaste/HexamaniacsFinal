#include"FalconHeavyRocket.h"
#include<iostream>
FalconHeavyRocket::FalconHeavyRocket():Rocket()
{
	_dislodged=false;
	cout<<"FalconHeavyRocket created\n";
}
FalconHeavyRocket::~FalconHeavyRocket()
{
	while(_stageList.empty()!=true)
	{
		Rocket* temp =_stageList[_stageList.size()-1];
		_stageList.pop_back();
		delete temp;
	}
}
void FalconHeavyRocket::execute()
{
	for(int i=0;i<_stageList.size();i++)
	{
		cout<<"EXECUTING STAGE "<<_stageList[i]->stageID<<endl;
		_stageList[i]->execute();
		cout<<"~STAGE "<<_stageList[i]->stageID<<" is complete~\n\n";
	}
}
void FalconHeavyRocket::execute(int i)
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
void FalconHeavyRocket::remove()
{
	if(_stageList.empty()!=true)
	{
		_stageList.pop_back();
	}
	else
	{
		cout<<"FalconHeavyRocket stage list is empty. cannot perform remove\n";
	}
}
void FalconHeavyRocket::add(Rocket* rocket)
{
	_stageList.push_back(rocket);
}
	
double FalconHeavyRocket::getWeight()
{
	double total=0;
	
	for(int i=0;i<_stageList.size();i++)
	{
		total=total+_stageList[i]->getWeight();

	}
	return total;
}
double FalconHeavyRocket::getFuel()
{
	double total = 0;

	for (int i = 0; i < _stageList.size(); i++)
	{
		total = total + _stageList[i]->getFuel();

	}
	return total;
}
void FalconHeavyRocket::setWeight(double w)
{
	
	for (int i = 0; i < _stageList.size(); i++)
	{
		 _stageList[i]->setWeight(w);

	}
	
}
void FalconHeavyRocket::setFuel(double fuel)
{

	for (int i = 0; i < _stageList.size(); i++)
	{
		_stageList[i]->setFuel(fuel);

	}

}



Memento* FalconHeavyRocket::dropStage1()
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
void FalconHeavyRocket::restoreStage1(Memento* m)
{
	cout << "Stage 1, with a weight of " << m->getRocketStage()->getWeight() << "kg was retrieved and restored." << endl;
	_stageList.insert(_stageList.begin(),m->getRocketStage());
}







