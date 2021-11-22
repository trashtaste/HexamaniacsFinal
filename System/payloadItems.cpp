#include<iostream>
#include "payload.h"
#include "payloadItems.h" 

using namespace std;

void payloadItems::add(payload* p)
{ 
	
	
	if(item==0)
	{
		item=p;
	}
	
	else {item->add(p);} 
	

}



payloadItems::~payloadItems() 
{
  

} 
