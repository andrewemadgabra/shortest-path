#pragma once
#ifndef nod
#define nod
#include "includes.h"

using namespace std;
class node {
 public:
	node();	 // Default constructor without	arguments
	~node();	// This is the destructor: declaration
	// node();

	node(char name, node* pParent, node* pNext, float cost, bool explored);
	/*int x;
	node(x=0); //defined default constructor	*/
	char getname();	// constructor that sets 5 private class members

	float getcost();	// constructor that sets 5 private class members

	bool getexplored();	// constructor that sets 5 private class members

	node* getparent();

	node* getpnext();
	void setpNext(node* pNext);
	bool isQualified(list* pFrontier);

	/*void setname(char name) //constructor that sets 5 private class members
	{
					this->name = name;
	}
	void setcost(float cost) //constructor that sets 5 private class members
	{
					this->cost;
	}
	void setexplored(bool explored) //constructor that sets 5 private class
	members
	{
					this->explored = explored;
	}
	void setpParent(node *pParent)
	{
					*this-> pParent = *pParent;
	}
	void setpNext(node *pNext)
	{
					*this-> pNext = *pNext;
	}*/
	node& operator=(const node& right);	// a = operator

	bool isGoal(char goalCity);

	void expand(vector<link>& links, list* pFrontier);
	void pushNodeToList(list* pFrontier);
	void setExplored(bool explored);

 private:
	char name;
	node* pParent;
	node* pNext;
	float cost;
	bool explored;
};
#endif /*nod*/