/*
File: DecoratorPrototype.cpp
Purpose: Implementation of class DecoratorPrototype
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#include "DecoratorPrototype.h"

// Function that return a copy of the object
shared_ptr<Beverage> DecoratorPrototype::clone()
{
	shared_ptr<Beverage> decorator = shared_ptr<DecoratorPrototype>(new DecoratorPrototype(beverage, name, price));
	return decorator;
}

// Function that initialize the created object
void DecoratorPrototype::Initialize(shared_ptr<Beverage> b, string n, int p)
{
	beverage = b;
	name = beverage->getName() + "+" + n;
	price = p + b->getPrice();
}

string DecoratorPrototype::getName()
{
	return  name;
}

int DecoratorPrototype::getPrice()
{
	return price;
}
