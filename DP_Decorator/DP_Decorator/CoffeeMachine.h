/*
File: CoffeeMachine.h
Purpose: Definition of class CoffeeMachine
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#include <iostream>

using namespace std;

class CoffeeMachine {

public:
	virtual ~CoffeeMachine() {}
	//virtual void make() = 0;
	virtual string getName() = 0;
	virtual int getPrice() = 0;
};
