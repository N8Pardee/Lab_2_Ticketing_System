#include "Nathaniel_Pardee_Queue.h"
#include "Nathaniel_Pardee_Ticket.h"
#include "Nathaniel_Pardee_TicketSimulator.h"
#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int userChoice = 0;

	while (userChoice != 3)
	{
		cout << "1. Enter Ticket\n" << "2. View next ticket\n" << "3. Exit " << std::endl;
		cin >> userChoice; 

		if (userChoice == 1)
		{
			string name;
			string reason; 
			TicketSimulator obj1;


			cout << "Name: " << std::endl;
			cin >> name;
			cout << "Reason: " << std::endl;
			cin >> reason;

			obj1.add_ticket(name, reason);
		}

		if (userChoice == 2)
		{
			TicketSimulator next_ticket;

			//next_ticket.get_next();
		}

	}




}