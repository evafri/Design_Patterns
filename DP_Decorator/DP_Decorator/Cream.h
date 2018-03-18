/*
File: Cream.h
Purpose: Definition of concreteDecorator class Cream.
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "BeverageDecorator.h"
#include <iostream>
#include <memory>

using namespace std;

class Cream : public BeverageDecorator {

private:
	string name() {
		return " + Cream";
	}
	int creamPrice;

public:
	Cream(shared_ptr<Beverage> decorator) : BeverageDecorator(decorator) {
		creamPrice = 2;
	}
	~Cream() {}

	string getName() {
		return BeverageDecorator::getName().append(name());
	}
	int getPrice() {
		return BeverageDecorator::getPrice() + creamPrice;
	}
};
