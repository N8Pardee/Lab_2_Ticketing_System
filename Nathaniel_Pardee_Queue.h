#pragma once
#include<iostream>
#include<vector>

using std::cout;

template <class T>
class Node
{
public:
	T data; //data based on type
	Node* next; //pointer for next node
	Node* previous;

	Node()
	{		
		next = previous = nullptr;
	}

};


template<class T>
class Queue
{
protected:

	Node<T>* front;
	Node<T>* back;
	Node<T>* temp;

public:

	Queue() { front = back = nullptr; }
	
	//adds items to the queue
	void enqueue(T item)
	{
		if (back == nullptr)
		{
			back = new Node<T>;
			back->next = nullptr;
			back->data = item;
			front = back;

		}
		else
		{
			temp = new Node<T>;
			back->next = temp;
			temp->data = item;
			temp->next = nullptr;
			back = temp;
		}
	}

	//takes the front node out of the queue
	bool dequeue(T& item)
	{
		if (front == nullptr)
		{
			return NULL;

		}

		
		else
		{
			temp = item->front;
			item->front = item->front->next;

			if (item->front == nullptr)
			{
				item->rear = nullptr;
				return temp;
			}

		}

	}

	//checks the size of the queue by iterating through the queue until it hits null pointer
	int getSize()
	{
		int size = 0;

		Node<T>* current = front;

		while (current != nullptr)
		{
			size++;
			current = current->next;
		}

		return size;

	}


	//checks if the queue is empty by seeing if the front and back node are == to null pointer
	bool isEmpty()
	{
		bool empty = true;

		if (front == nullptr && back == nullptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//peeks at the node in the front of the queue
	void peek()
	{
		cout << this->front;
	}
};



