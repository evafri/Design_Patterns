/*
File: BeverageDecorator.h
Purpose: Definition of class BeverageDecorator
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "Beverage.h"
#include <iostream>
#include <memory>

using namespace std;

class BeverageDecorator : public Beverage {

private:
	shared_ptr<Beverage> beverageDecorator;

public:
	BeverageDecorator(shared_ptr<Beverage> decorator) : beverageDecorator(decorator) {}
	~BeverageDecorator() {}

	string getName() {
		return beverageDecorator->getName();
	}
};
