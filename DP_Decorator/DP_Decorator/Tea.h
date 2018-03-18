/*
File: Tea.h
Purpose: Definition of class Tea
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include "Beverage.h"
#include <iostream>
using namespace std;

class Tea : public Beverage {

public:
	Tea() {}
	virtual ~Tea() {}
	string getName();
	int getPrice();
};
