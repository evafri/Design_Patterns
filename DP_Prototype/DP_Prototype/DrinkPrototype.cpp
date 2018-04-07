/*
File: DrinkPrototype.cpp
Purpose: Implementation of class DrinkPrototype
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#include "DrinkPrototype.h"

// Function that return a copy of the object
shared_ptr<Beverage> DrinkPrototype::clone()
{
	shared_ptr<Beverage> drink = shared_ptr<DrinkPrototype>(new DrinkPrototype(name, price));
	return drink;
}

// Function that initialize the created object
void DrinkPrototype::Initialize(string n, int p)
{
	name = n;
	price = p;
}

string DrinkPrototype::getName()
{
	return name;
}

int DrinkPrototype::getPrice()
{
	return  + price;
}
