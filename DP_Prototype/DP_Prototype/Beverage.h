/*
File: Beverage.h
Purpose: Definition of class Beverage, the component baseclass.
Author: Eva Frisell <evmo1600>
Date: 2018-04-01
Version: 1.1
*/

#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iostream>
#include <memory>

using namespace std;

class Beverage {

public:
	Beverage() {}
	virtual ~Beverage() {}
	virtual shared_ptr<Beverage> clone()= 0;
	virtual string getName() = 0;
	virtual int getPrice() = 0;
};

#endif