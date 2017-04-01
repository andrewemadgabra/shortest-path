#pragma once
#include <iostream>
#include <vector>
#include "includes.h"

using namespace std;

node::node() {
	// creat *pParent;
	// creat *pNext
}
node::~node() {
	// delete *pParent;
	// delete *pNext;
}
node::node(char name, node* pParent, node* pNext, float cost, bool explored)
		: name(name),
			pParent(pParent),
			pNext(pNext),
			cost(cost),
			explored(explored) {}

node& node::operator=(const node& right) {
	if (this == &right) {	// Same object
		return *this;
	}	// return this pointer.
		 // Deallocate, allocate new space, copy values
	return *this;
}

bool node::isGoal(char goalCity) { return this->name == goalCity; }

char node::getname() { return this->name; }
node* node::getparent() { return this->pParent; }
node* node::getpnext() { return this->pNext; }
float node::getcost() { return this->cost; }
void node::setpNext(node* pNext) { *this->pNext = *pNext; }
bool node::getexplored() { return this->explored; }

void node::setExplored(bool explored) { this->explored = explored; }

// dah ynfa3 yb2a node or not
void node::expand(vector<link>& links, list* pFrontier) {
	node* tempNode;
	bool foundnode = false;
	// search to found the node
	for (int i = 0; i < links.size(); i++) {
		foundnode = false;
		tempNode = NULL;	// el fydy kol shwya
		if (this->name == links[i].getC1()) {
			foundnode = true;
			tempNode = new node(links[i].getC2(), this, NULL, 0.0, false);

		} else if (this->name == links[i].getC2()) {
			foundnode = true;
			tempNode = new node(links[i].getC1(), this, NULL, 0.0, false);
		} else {
			/// EMPTY
		}
		// when found the node
		if (foundnode == true) {
			tempNode->pushNodeToList(pFrontier);
			cout << "the node pushed" << endl;
		}
	}
}
// fy error hna
void node::pushNodeToList(list* pFrontier) {
	// ana sence by error
	pFrontier->getpLastNode()->pNext = this;
	pFrontier->setpLastNode(this);
	// setpLastNode(pFrontier);
	// pLastNode->pNext = this;
	// cout << "hello";
	// pFrontier->printList();
}
bool node::isQualified(list* pFrontier) { return true; }
