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
		load_names();
		//load_reasons();

		
	}

	//populates the queue with set of randomized tickets. the number of randomly generated
	//tickets is based on num_entries. default sample size is 20
	void populate_queue(int num_entries)
	{
		srand(num_entries);
		sampleSize = num_entries;		
		string randName;
		string randReason;

		//sets default sample size
		if (sampleSize <= 0)
		{
			sampleSize = 20;
		}
		
		for (int i = 0; i < sampleSize; i++)
		{
						
			int j = rand();
			randName = sample_names[j];
			randReason = sample_reasons[j];

			Ticket<string> ticket(randName, randReason);
			Queue::enqueue(ticket.toString());
			

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

		//Queue::dequeue(nextTicket.toString());


		//cout << Queue::getSize();

		//return nextTicket;
		//

	}

private:

	//opens the names.txt file and reads the names into sample_names
	void load_names()
	{
		std::ifstream input;
		string name;
		int i = 0; //keeps count of each line

		input.open("names.txt");

		if (!input.is_open())
		{
			cout << "names.txt is not open" << std::endl;
						
		}
		else
		{
			while (!input.eof())
			{
				getline(input, name);
				sample_names.push_back(name);
				cout << i++;
			}
		}

		
	
	}

	//opens the reasons.txt file and reads names into sample_reasons
	void load_reasons()
	{
		std::ifstream input;
		string reason;
		

		input.open("reasons.txt");

		if (!input.is_open())
		{
			cout << "reasons.txt not open" << std::endl;

		}


		while (!input.eof())
		{
			cout << "open";
			getline(input, reason);

		}
	}


};





