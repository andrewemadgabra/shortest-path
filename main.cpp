
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
	
/*	for (int i = 0;i < inputs.size();i++)
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

	char startCity, goalCity;
	node* pCNode = new node();
	list* pFrontier = new list(NULL, NULL);	 
	vector<link> inputs;
	acquireLinks(inputs);
	cout << inputs.size() << endl;
	for (int i = 0; i < inputs.size(); i++)
	{
		cout << inputs[i].getC1() << "\t" << inputs[i].getC2() << "\t" << inputs[i].getlinkCost()<< endl;
	} 
	/* cout << "please enter the startcity and goalCity" << endl;
	cin >> startCity >> goalCity;	
	pCNode = new node(startCity, NULL, NULL, 0.0, false);
	pFrontier->setpFirstNode(pCNode);
	pFrontier->setpLastNode(pCNode);
	while (!pCNode->isGoal(goalCity))
	{
		pCNode->setExplored(true);
		pCNode->expand(inputs, pFrontier);
		pCNode = pCNode->getpnext();
		//cout << *pCNode;
	}	
	/*for (int i = 0; i < inputs.size(); i++)
	{
		pCNode->isGoal(goalCity);
		pCNode->setExplored(true);
		pCNode->expand(inputs, pFrontier);
		pCNode = pCNode->getpnext();
		cout << "result" << endl;
	} */
	/*cout << "goal is reached" << endl;
	pFrontier->printList();	*/
	


}