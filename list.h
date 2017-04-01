#pragma once
#ifndef lis
#define lis
#include "includes.h"

class list {
 public:
	list();	 // constructor
	~list();	// destructor
	list(node* pFirstNode, node* pLastNode);
	node* getpFirstNode();
	node* getpLastNode();
	list& operator=(const list& right);

	void printList(void);
	void setpFirstNode(node* pFirstNode);
	// void setpLastNode(node* pLastNode);
	void setpLastNode(node* pLastNode);
	void printResult(void);

	/*	list::node getpfirst(){
									return *pFirstNode ;
					}
					list::node getplast()
					{
									return *pLastNode ;
					}	*/
	/*void printlist(void)
					{
									list *pFirstNode;
									list *temp = pFirstNode;
									while (temp != nullptr)
									{
													cout << temp->getpfirst;
													temp = temp->getplast;
									}
					} */

 private:
	node* pFirstNode;
	node* pLastNode;
};

/*list::list()
{
}

list::~list()
{
}
*/
#endif	//! lis
