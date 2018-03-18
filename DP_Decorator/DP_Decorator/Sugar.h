/*
File: Sugar.h
Purpose: Definition of decorator subclass Sugar
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "BeverageDecorator.h"
#include <iostream>
#include <memory>

using namespace std;

class Sugar : public BeverageDecorator {

private:
	string name() {
		return " + Sugar";
	}

public:
	Sugar(shared_ptr<Beverage> decorator) : BeverageDecorator(decorator) {}
	~Sugar() {}

	string getName() {
		return BeverageDecorator::getName().append(name());
	}
};
