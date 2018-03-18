/*
File: Espresso.h
Purpose: Definition of class Espresso
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "Beverage.h"
#include <iostream>
using namespace std;

class Espresso : public Beverage {

public:
	Espresso() {}
	virtual ~Espresso() {}
	string getName();
	int getPrice();
};

