/*
File: DrinkPrototype.h
Purpose: Definition of class DrinkPrototype
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#ifndef DRINKPROTOTYPE_H
#define DRINKPROTOTYPE_H

#include "Beverage.h"
#include <memory>


class DrinkPrototype : public Beverage {
private:
	string name;
	int price;

public:
	DrinkPrototype() {}
	DrinkPrototype(string n, int p): name(n), price(p){}
	virtual ~DrinkPrototype(){}

	shared_ptr<Beverage> clone();
	virtual void Initialize(string n, int p);
	virtual string getName();
	virtual int getPrice();
};
#endif