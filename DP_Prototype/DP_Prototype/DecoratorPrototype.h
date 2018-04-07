/*
File: DecoratorPrototype.h
Purpose: Definition of class DecoratorPrototype
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#ifndef DECORATORPROTOTYPE_H
#define DECORATORPROTOTYPE_H

#include "Beverage.h"
#include <memory>

class DecoratorPrototype : public Beverage {
private:
	string name;
	int price;
	shared_ptr<Beverage> beverage = nullptr;

public:
	DecoratorPrototype() {}
	DecoratorPrototype(shared_ptr<Beverage> b, string n, int p) :beverage(b), name(n), price(p) {}
	virtual ~DecoratorPrototype() {}

	shared_ptr<Beverage> clone();
	virtual void Initialize(shared_ptr<Beverage> b, string n, int p );
	virtual string getName();
	virtual int getPrice();
};
#endif
