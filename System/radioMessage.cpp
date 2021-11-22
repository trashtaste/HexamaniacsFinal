#include<iostream>
#include "radioMessage.h"

using namespace std; 

radioMessage::radioMessage(Ground* g)
{
	myRad=g; 


}

void radioMessage::execute()
{

	myRad->rmessage(); 

}
