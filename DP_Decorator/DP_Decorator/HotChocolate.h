/*
File: HotChocolate.h
Purpose: Definition of class HotChocolate
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "Beverage.h"
#include <iostream>
using namespace std;

class HotChocolate : public Beverage {

public:
	HotChocolate() {}
	virtual ~HotChocolate() {}
	//virtual void make() = 0;
	string getName();
	//int getPrice();
};
