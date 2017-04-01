#pragma once
#ifndef Link_H
#define Link_H
/*#include<iostream>
using namespace std;	*/

class link {
 public:
	link();
	link(char c1, char c2, float linkCost);
	~link();

	char getC1();				 // constructor that sets 5 private class members
	char getC2();				 // constructor that sets 5 private class members
	float getlinkCost();	// constructor that sets 5 private class members

	link& operator=(const link& right);

 private:
	char c1;
	char c2;
	float linkCost;
};
#endif /*!Link_H*/