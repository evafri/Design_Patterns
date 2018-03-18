/*
File: Coffee.h
Purpose: Definition of inherited class Coffee, a concreteComponent class.
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "Beverage.h"
#include <iostream>
using namespace std;

class Coffee : public Beverage {

public:
	Coffee(){}
	virtual ~Coffee() {}
	string getName();
	int getPrice();
};
