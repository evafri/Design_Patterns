/*
File: Menu.h
Purpose : Definition of class Manu. This is where the menu is and the user can choose beverage and different decorations.
Author : Eva Frisell <evmo1600>
Date : 2018-03-18
Version : 1.1
*/

#include "Beverage.h"
#include "BeverageDecorator.h"
#include <memory>

class Menu {
public:
	Menu() {}
	~Menu() {}

	shared_ptr<Beverage> createBeverage();
	shared_ptr<BeverageDecorator> addBeverageAccessories(shared_ptr<Beverage> beverage);
	void displayBeverage(shared_ptr<Beverage> beverage);
	void run();
};