/*
File: Beverage.h
Purpose: Definition of class Beverage, the component baseclass.
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iostream>

using namespace std;

class Beverage {

public:
	Beverage() {}
	virtual ~Beverage() {}
	virtual string getName() = 0;
	virtual int getPrice() = 0;
};

#endif