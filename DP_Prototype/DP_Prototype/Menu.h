/*
File: Menu.h
Purpose : Definition of class Manu. This is where the menu is and the user can choose beverage and different decorations.
Author : Eva Frisell <evmo1600>
Date : 2018-04-01
Version : 1.1
*/

#include "Beverage.h"

class Menu {
public:
	Menu() {}
	~Menu() {}

	shared_ptr<Beverage>Menu::createBeverage();
	shared_ptr<Beverage>Menu::addBeverageAccessories(shared_ptr<Beverage> beverage);
	void displayBeverage(shared_ptr<Beverage> beverage);
	void run();
};
