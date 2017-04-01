
#include "includes.h"
list::list() {}
list::~list() {
	delete pFirstNode;
	delete pLastNode;
}

list::list(node* pFirstNode, node* pLastNode)
		: pFirstNode(pFirstNode), pLastNode(pLastNode) {}

node* list::getpFirstNode() { return this->pFirstNode; }
node* list::getpLastNode() { return this->pLastNode; }
/*list::list(node *pFirstNode, node *pLastNode) :
				pFirstNode(pFirstNode), pLastNode(pLastNode)
{

}	*/
void list::setpFirstNode(node* pFirstNode) { this->pFirstNode = pFirstNode; }
void list::setpLastNode(node* pLastNode) { this->pLastNode = pLastNode; }
list& list::operator=(const list& right) {
	if (this == &right) {
		return *this;
	}
	return *this;
}
void list::printList(void) {
	node* pCNode = this->getpFirstNode();

	while (pCNode != NULL) {
		cout << pCNode->getname() << endl;
		pCNode = pCNode->getpnext();
	}
	// cout << endl;
	/*node *pCNode = this->getpFirstNode();
	while (pCNode != NULL) {
					cout << pLastNode->getname()<< endl;
					pCNode = pCNode->getpnext();
	}	 */
	// pLastNode->
	// std::cout << *pFirstNode << *pLastNode << endl;
	/*if (pFirstNode == NULL)
					{
									pFirstNode = pLastNode ;
					}
					else
					{
									pLastNode = pLastNode->getpnext;
					}

					cout << pFirstNode;	*/
	/*
	list()<string>::const_iterator i;
	for ( i = s.begin(); i < s.end(); i++)
	{

					if (pLastNode == NULL)
					{
									exit(0);
					}
	 } */
}
void list::printResult(void) {}
