
/*#include <iostream>
#include <vector>
#include "includes.h"
using namespace std;
int main()
{ 
	//char startCity, goalCity;
	/*node* pCurrentNode = new node();
	list* pFrontier = new list(NULL, NULL);
	vector<link> inputs;
	acquirelinks(inputs);
	cout << inputs.size() << endl;
	
/*for (int i = 0;i < inputs.size();i++)
	{
		cout << inputs[i].getC1() << "\t" << inputs[i].getC2() << "\t" << inputs[i].getlinkCost() << endl;
	}*/	
	/*cout << "please enter the start city";
	//cin >> startCity;
	//pCurrentNode = new node(startCity, NULL, NULL, 0.0, false);
	//pFrontier->getpFirstNode;// = pCurrentNode;
	//pFrontier->getpLastNode;// = pCurrentNode;

	/*while (!pCurrentNode->isGoal(goalCity))
	{
		pCurrentNode->getExplored = true;
		pCurrentNode->expand(inputs, pFrontier);
		pCurrentNode = pCurrentNode->getpNext;
		cout << &pCurrentNode;
	}	*/
	/*cout << "goal is reached" << endl;

	
	//pCurrentNode = new node(startCity, NULL, NULL, 0.0, false);
} */

#include <iostream>

#include "includes.h"

using namespace std;

int main() {
	char key = 'q';
	char startCity, goalCity;
	node* pCurrentNode = new node();
	list* pFrontier = new list(NULL, NULL);	 
	vector<link> inputs;
	acquireLinks(inputs);
	cout << inputs.size() << endl;
	for (int i = 0; i < inputs.size(); i++)
	{
		cout << inputs[i].getC1() << "\t" << inputs[i].getC2() << "\t" << inputs[i].getlinkCost()<< endl;
	} 
	cout << "please enter the startcity and goalCity" << endl;
	cin >> startCity >> goalCity;	
	pCurrentNode = new node(startCity, NULL, NULL, 0.0, false);
	pFrontier->setpFirstNode(pCurrentNode);
	pFrontier->setpLastNode(pCurrentNode);
	/*while (!pCNode->isGoal(goalCity))
	{
		pCNode->setExplored(true);
		pCNode->expand(inputs, pFrontier);
		pCNode = pCNode->getpnext();
		//cout << *pCNode;
	}	*/
	/*for (int i = 0; i < inputs.size(); i++)
	{
		pCNode->isGoal(goalCity);
		pCNode->setExplored(true);
		pCNode->expand(inputs, pFrontier);
		pCNode = pCNode->getpnext();
		cout << "result" << endl;
	} */
	int choose ;
	cout << "please enter the number of your choose to use the algorithm" << endl;
	cout << "choose 1 is Breadth first search" << endl;
	cout << "choose 2 is Deapth first search" << endl;
	cout << "choose 3 is uniform cost search" << endl;
	//cout << "goal is reached" << endl;
	//pFrontier->printList();
	cin >> choose;
	switch (choose)
	{	
	case 1:
		while (!pCurrentNode->isGoal(goalCity))
		{
			pCurrentNode->setExplored(true);
			pCurrentNode->expand(inputs, pFrontier);
			pCurrentNode = pCurrentNode->getpNext();
			/*if (pCurrentNode->getpParent() == NULL)
			{
				cost = pCurrentNode->getCost() + pCurrentNode->getpNext()->getCost();
			}
			pCurrentNode->setCost(cost);
			else
			{
				cost = pCurrentNode->getCost() + pCurrentNode->getpParent()->getCost();
			}*/

		}
		cout << "the node that poshed to list is :" << endl;
		pFrontier->printList();
		cout << "goal is reached" << endl;
		cout << "The final Bath is :" << endl;
		if (pCurrentNode->isGoal(goalCity))
		{
			pCurrentNode->setExplored(true);
			pFrontier->printResult();
			cout << startCity << "\t" << goalCity << "\t" << pCurrentNode->getcost() << endl;
			cin >> key;
		}
		break;
	case 2:
		node* temp;
		node* newtemp;
		temp = pFrontier->getpFirstNode();
		while (!pCurrentNode->isGoal(goalCity))
		{
			if (pCurrentNode->getpNext() == NULL)
			{
				pCurrentNode->setExplored(true);
				pCurrentNode->expand(inputs, pFrontier);
				pCurrentNode = pCurrentNode->getpnext();
				temp = pCurrentNode;
			}
			else
			{
				pCurrentNode = pCurrentNode->getpnext();
				while (!pCurrentNode->isGoal(goalCity))
				{
					newtemp = pCurrentNode;
					pCurrentNode->setExplored(true);
					pCurrentNode->expand(inputs, pFrontier);
					pCurrentNode = pFrontier->getpLastNode();
					if (newtemp == pCurrentNode)
					{
						pCurrentNode = temp;
						pCurrentNode = pCurrentNode->getpnext();
						break;
					}
				}
			}
		}
		cout << "the node that poshed to list is :" << endl;
		pFrontier->printList();
		cout << "goal is reached" << endl;
		cout << "The final Bath is :" << endl;
		if (pCurrentNode->isGoal(goalCity))
		{
			pCurrentNode->setExplored(true);
			pFrontier->printResult();
			cout << startCity << "\t" << goalCity << "\t" << pCurrentNode->getcost() << endl;
			cin >> key;
		}
		break;
	case 3:
		float cost1, cost2;
		temp = pFrontier->getpFirstNode();
		while (!pCurrentNode->isGoal(goalCity))
		{
			if (pCurrentNode->getpParent() == NULL)
			{
				cost1 = pCurrentNode->getcost();
			}
			else
			{
				cost1 = pCurrentNode->getpParent()->getcost() + pCurrentNode->getcost();
				cost2 = pFrontier->getpLastNode()->getpParent()->getcost() + pFrontier->getpLastNode()->getcost();
			}


			if (cost1 < cost2)
			{
				pCurrentNode = temp;
				pCurrentNode->setExplored(true);
				pCurrentNode->expand(inputs, pFrontier);
				pCurrentNode = pCurrentNode->getpnext();
			}
			else if (cost2 < cost1)
			{
				pCurrentNode = temp;
				pCurrentNode->setExplored(true);
				pCurrentNode->expand(inputs, pFrontier);
				pCurrentNode = pFrontier->getpLastNode();
			}
			else
			{
				pCurrentNode = temp;
				pCurrentNode->setExplored(true);
				pCurrentNode->expand(inputs, pFrontier);
				pCurrentNode = pCurrentNode->getpnext();
			}
			if (pCurrentNode == NULL)
			{
				pCurrentNode = pFrontier->getpFirstNode();
				while (!pCurrentNode->isGoal(goalCity))
				{
					pCurrentNode->setExplored(true);
					pCurrentNode->expand(inputs, pFrontier);
					pCurrentNode = pCurrentNode->getpnext();
				}

			}
			temp = pCurrentNode;
		}
		cout << "the node that poshed to list is :" << endl;
		pFrontier->printList();
		cout << "goal is reached" << endl;
		cout << "The final Bath is :" << endl;
		if (pCurrentNode->isGoal(goalCity))
		{
			pCurrentNode->setExplored(true);
			pFrontier->printResult();
			cout << startCity << "\t" << goalCity << "\t" << pCurrentNode->getcost() << endl;
		}
		cin >> key;
		break;
	default:
		break;
		  
}