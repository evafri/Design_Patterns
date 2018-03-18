/*
File: WhippedCream.h
Purpose: Definition of decorator subclass WhippedCream
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "BeverageDecorator.h"
#include <iostream>
#include <memory>

using namespace std;

class WhippedCream : public BeverageDecorator {

private:
	string name() {
		return " + Whipped Cream";
	}

public:
	WhippedCream(shared_ptr<Beverage> decorator) : BeverageDecorator(decorator) {}
	~WhippedCream() {}

	string getName() {
		return BeverageDecorator::getName().append(name());
	}
};
