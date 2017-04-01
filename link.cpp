#include "includes.h"

using namespace std;

link::link(char c1, char c2, float linkCost)
		: c1(c1), c2(c2), linkCost(linkCost) {}

char link::getC1() { return this->c1; }
char link::getC2() { return this->c2; }
float link::getlinkCost() { return this->linkCost; }

link& link::operator=(const link& right) {
	if (this == &right) {
		return *this;	// return *this.
	}
	// copy values
	return *this;
}
link::link() {}

link::~link() {}
