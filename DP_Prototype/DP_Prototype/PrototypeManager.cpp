/*
File: PrototypeManager.cpp
Purpose: Implementation of singleton class PrototypeManager
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#include "PrototypeManager.h"

PrototypeManager * PrototypeManager::prototypeManager = nullptr;

// Function that creates a new drink object
shared_ptr<Beverage> PrototypeManager::getDrink(string name, int price)
{
	shared_ptr<Beverage>drink;
	if (drinkPrototype != nullptr) {
		drink = drinkPrototype->clone();										// First cloning 
		static_pointer_cast<DrinkPrototype>(drink)->Initialize(name, price);		// Then initialize the clone
	}
	return drink;
}

// Function that creates a new decorator object
shared_ptr<Beverage> PrototypeManager::getDecorator(shared_ptr<Beverage> b, string name, int price )
{
	shared_ptr<Beverage>dec;
	if (decoratorPrototype != nullptr) {
		dec = decoratorPrototype->clone();												// First clone
		static_pointer_cast<DecoratorPrototype>(dec)->Initialize(b, name, price);			// Then initialize
	}
	return dec;
}
