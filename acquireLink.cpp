#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "includes.h"
using namespace std;

void acquireLinks(vector<link>& links) {
	char c1, c2;
	float linkCost;
	fstream file;
	file.open("test.txt");

	while (!file.eof()) {
		file >> c1 >> c2 >> linkCost;
		links.push_back(link(c1, c2, linkCost));
	}

	file.close();
}
