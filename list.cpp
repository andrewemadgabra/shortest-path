
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
	cout << "Name" << "\t" << "ParentName" << "\t" << "Cost" << endl;
	node* pCurrentName = this->getpFirstNode()->getpnext();
	
	while (pCurrentName != NULL) 
	{
		cout << pCurrentName->getname() << "\t " << pCurrentName->getparent()->getname() << "\t " <<"\t"<< pCurrentName->getcost() << endl;
		pCurrentName = pCurrentName->getpnext();
	}
}
void list::printResult(void) {
	node* previous;
	int counter = 0;
	node*pCurrentNode = this->getpFirstNode();
	previous = pCurrentNode;
	while (pCurrentNode !=NULL)
	{
		if (pCurrentNode->getexplored())
		{
			cout << pCurrentNode->getname()<<endl;
			if (previous->getparent() != pCurrentNode->getparent())
			{
				counter++;
			}
		}
		previous = pCurrentNode;
		pCurrentNode = pCurrentNode->getpnext();
	}
	cout << "number of Expanded" << endl;
	cout << counter << endl;
}
