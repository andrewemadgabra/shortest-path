#include <iostream>
#include <vector>
#include "includes.h"
using namespace std;

void acquireLinks(vector<link>& links) {
	char c1, c2;
	float linkCost;
	link s1;
	int x;
	cout << "input interger number of process " << endl;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		if (x != 'a') {
			cin >> c1 >> c2 >> linkCost;
			link s1(c1, c2, linkCost);
			links.push_back(s1);
		}
	}
}
