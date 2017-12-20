#pragma once
#include "LinkedListIterator.h"
#include <cassert>
template<class Type>
class LinkedListType
{
protected:
	int count; //variable to store the number of elements in the list
	NodeType<Type> *first; //pointer to the first node of the list
	NodeType<Type> *last; //pointer to the last node of the list
public:
	//Overloads assignment operator
	const LinkListType<Type>& operator=(const LinkedListType<Type>&);
	//Initilializes the list to an empty state
	//first = NULL , last = NULL, count = 0
	void InitializeList()
	{
		DestroyList();
	}
	//Function to determine wheter the list is empty
	//Returns true if the list empty otherwise it returns false
	bool IsEmptyList()
	{
		if (first == NULL || first == 0)
			return true;
		return false;
	}
	//Prints values inside each node to the console
	void Print() const
	{
		LinkedListType *temp = new LinkedListType();
		temp->first = first;
		for(int i = 0;i<count;i++)
		{
			std::cout << temp->first->info << std::endl;
			temp->first = temp->first->link;
		}
		delete temp;
	}
	//Returns the number of nodes in the list
	int Length()
	{
		return count;
	}
	//Function to delete all the nodes from the list
	//first = NULL, last = NULL, count = 0
	void DestroyList()
	{
		NodeType<Type> *temp;
		while (first != NULL)
		{
			temp = first;
			first = first->link;
			delete temp;
		}
		last = NULL;
		count = 0;
	}
	//Function to return the first element of the list
	//The list must exist and must not empty
	//If the list is empty, the program terminates; otherwise, the first element of the list is returned
	Type Front()
	{
		assert(first != NULL || first != 0);
		return first;
	}
	//Function to return the last element of the list
	//THe list must exist and must not be empty
	//If the list is empty, the program terminatesl otherwise the last element fo this is returned
	Type Back()
	{
		assert(last != NULL || last != 0);
		return last;
	}
	//Function to return whether searchItem is in the list
	//Returns true if searchItem is in the list, otherwise the value false is reutned
	bool Search(const Type&) const;
	//Function to insert newItem at the beginning of the list
	//First point tho the new listl, newItem is inserted at the beginning of the list
	//last points to the last node in the list, and count is incremented by 1
	void InsertFirst(const Type&);
	//Function to insert newItem at the end of the list
	//Furst oiubt to the new list, newItem is inserted at the end of the list, last
	//points to the last node in the list and count is incremented by 1
	void InsertLast(const Type&);
	//Deletes deleteItem from the list
	//If found, the node containing deleteItem is deleted from the list.
	//First point to the first node, list points to the last node of the updated list, and counts is decremented by 1
	void DeleteNode(const Type&);
	//Returns an iterator at the beginning of the linked list
	//Reutns an iterator such that current is set to first
	LinkedListIterator<Type> Begin()
	{
		LinkedListIterator *temp = new LinkedListIterator();
		temp->
	}
	//Returns an iterator at the end of the linked list
	//Returns an iterator such that current is set to NUll
	LinkedListIterator<Type> End()
	{

	}
	//Default constructor
	LinkedListType()
	{
		first = NULL;
		last = NULL;
		count = 0;
	}
	//copy constructor
	LinkedListType(const LinkedListType<Type>&);
	//destructor
	//Dletes all the nodes from the list
	//the list object is destroyed
	~LinkedListType();
private:
	//Function to make a copy of otherlost
	//A copy of otherList is created and assigned to this list
	void CopyList(const LinkedListType<Type>&);
};
