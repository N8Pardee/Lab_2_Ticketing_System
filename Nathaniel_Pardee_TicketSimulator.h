#include "Nathaniel_Pardee_Queue.h"
#include "Nathaniel_Pardee_Ticket.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <ctime>

using std::cout;
using std::cin;
using std::vector;
using std::string;

class TicketSimulator : public Queue <string>
{

private:

	Queue <string> queue;
	 int sampleSize = 0;
	 vector <string> sample_names;
	vector <string> sample_reasons;

public:

	//calls load_names and load_reasons from text files into samples and sample reasons
	TicketSimulator() 
	{
			
	}

	//populates the queue with set of randomized tickets. the number of randomly generated
	//tickets is based on num_entries. default sample size is 20
	void populate_queue(int num_entries)
	{
		srand(num_entries);
		sampleSize = num_entries;

		
		string randName;
		string randReason;

		cout << "Enter how many tickets needed\n";
		cin >> sampleSize;

		//sets default sample size
		if (sampleSize <= 0)
		{
			sampleSize = 20;
		}
		
		for (int i = 0; i < sampleSize; i++)
		{
			Ticket<string> ticket();
		

		}
		
	}

	//takes in tenants name and reason and generates a new tickets. the ticket is added to the queue
	void add_ticket(string name, string reason)
	{
		Ticket<string> newTicket(name, reason);		

		Queue::enqueue(newTicket.toString());


	}

	//gets the next ticket and converts it to string. Returns generated string. If no more tickets in the system 
	//return empty string. *uses tickets toString method
	string get_next()
	{
		Ticket<string> nextTicket;






	}

private:

	//opens the names.txt file and reads the names into sample_names
	void load_names()
	{
		std::ifstream input;
		string name;

		input.open("names.txt");

		if (!input.is_open())
		{
			cout << "names.txt not open" << std::endl;
			
		}

		
		while (getline(input, name))
		{
			
			for (int i = 0; i != input.eof(); i++)
			{
				sample_names[i] = name;
			}

		}
	}

	//opens the reasons.txt file and reads names into sample_reasons
	void load_reasons()
	{
		std::ifstream input;
		string reason;
		

		input.open("names.txt");

		if (!input.is_open())
		{
			cout << "names.txt not open" << std::endl;

		}


		while (getline(input, reason))
		{

			for (int i = 0; i < input.eof(); i++)
			{
				sample_reasons[i] = reason;
			}

		}
	}


};





