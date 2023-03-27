#pragma once
#include "Nathaniel_Pardee_Queue.h"
#include <string>

using std::string;


template <class T>
class Ticket : public Queue <T>
{

private:

	string tenant_name;
	string tenant_reason;


public:

	Ticket() {};

	//seperate constructor 
	Ticket(string name, string reason)
	{
		tenant_name = name;
		tenant_reason = reason;

	}
	//converts the name and reason into a single string to store in the node
	string toString()
	{		
	
		string nameAndReason = "Name: " + tenant_name + "\nReason: " + tenant_reason;

		return nameAndReason;
		
	}

};




