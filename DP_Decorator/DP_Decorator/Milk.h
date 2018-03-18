/*
File: Milk.h
Purpose: Definition of concreteDecorator class Milk
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "BeverageDecorator.h"
#include <iostream>
#include <memory>

using namespace std;

class Milk : public BeverageDecorator {

private:
	string name() {
		return " + Milk";
	}
	int milkPrice;

public:
	Milk(shared_ptr<Beverage> decorator) : BeverageDecorator(decorator) {
		milkPrice = 1;
	}
	~Milk() {}

	string getName() {
		return BeverageDecorator::getName().append(name());
	}

	int getPrice() {
		return BeverageDecorator::getPrice() + milkPrice;
	}
};
