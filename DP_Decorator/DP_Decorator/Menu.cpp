/*
File: Menu.cpp
Purpose : Implementation of class menu
Author : Eva Frisell <evmo1600>
Date : 2018-03-18
Version : 1.1
*/

#include <iostream>
#include <memory>
#include <string>
#include "Menu.h"
#include "Beverage.h"
#include "Coffee.h"
#include "Espresso.h"
#include "Tea.h"
#include "HotChocolate.h"
#include "Sugar.h"
#include "Milk.h"
#include "Cream.h"
#include "WhippedCream.h"
#include "BeverageDecorator.h"

using namespace std;

shared_ptr<Beverage> Menu::createBeverage()
{
	shared_ptr<Beverage> beverage;
	int beverageChoice;
	bool keepOn = true;

	while (keepOn) {
		cout << endl;
		cout << "Available Beverages" << endl;
		cout << "1. Coffee" << endl;
		cout << "2. Espresso" << endl;
		cout << "3. Tea" << endl;
		cout << "4. Hot Chocolate" << endl;
		cout << "5. Quit" << endl << endl;

		cout << "My beverage choice are: ";
		cin >> beverageChoice;

		switch (beverageChoice)
		{
		case 1:
		{
			beverage = shared_ptr<Beverage>(new Coffee());
			keepOn = false;
			break;
		}

		case 2:
		{
			beverage = shared_ptr<Beverage>(new Espresso());
			keepOn = false;
			break;
		}

		case 3:
		{
			beverage = shared_ptr<Beverage>(new Tea());
			keepOn = false;
			break;
		}
		case 4:
		{
			beverage = shared_ptr<Beverage>(new HotChocolate());
			keepOn = false;
			break;
		}
		default: keepOn = false;
			break;
		}
	}
	return beverage;
}

shared_ptr<Beverage> Menu::addBeverageAccessories(shared_ptr<Beverage> beverage)
{
	shared_ptr<Beverage> beverageDecorator = nullptr;
	int beverageAccessoriesChoice;
	int addBeverageAccessories;
	bool keepOn = true;

	while (keepOn) {
		cout << "Do you want add beverage accessories? Please press 1. Otherwise press 0!" << endl;
		cin >> addBeverageAccessories;

		if (addBeverageAccessories == 1) {

			cout << endl;
			cout << "Available beverage accessories" << endl;
			cout << "1. Sugar" << endl;
			cout << "2. Milk" << endl;
			cout << "3. Cream" << endl;
			cout << "4. Whipped cream" << endl;
			cout << "5. Quit" << endl << endl;

			cout << "My beverage accessories choice are: ";
			cin >> beverageAccessoriesChoice;

			switch (beverageAccessoriesChoice)
			{
			case 1:
			{
				if (beverageDecorator != nullptr) {
					beverageDecorator = shared_ptr<BeverageDecorator>(new Sugar(beverageDecorator));
				}
				else {
					beverageDecorator = shared_ptr<BeverageDecorator>(new Sugar(beverage));
				}
				break;
			}
			case 2:
			{
				if (beverageDecorator != nullptr) {
					beverageDecorator = shared_ptr<BeverageDecorator>(new Milk(beverageDecorator));
				}
				else {
					beverageDecorator = shared_ptr<BeverageDecorator>(new Milk(beverage));
				}
				break;
			}
			case 3:
			{
				if (beverageDecorator != nullptr) {
					beverageDecorator = shared_ptr<BeverageDecorator>(new Cream(beverageDecorator));
				}
				else {
					beverageDecorator = shared_ptr<BeverageDecorator>(new Cream(beverage));
				}
				break;
			}
			case 4:
			{
				if (beverageDecorator != nullptr) {
					beverageDecorator = shared_ptr<BeverageDecorator>(new WhippedCream(beverageDecorator));
				}
				else {
					beverageDecorator = shared_ptr<BeverageDecorator>(new WhippedCream(beverage));
				}
				break;
			}
			default: keepOn = false;
			}
		}
		else {
			keepOn = false;
			if (beverageDecorator != nullptr)
			{
				return beverageDecorator;
			}
			else {
				return beverage;
			}
		}
	}
	return beverageDecorator;
}

void Menu::displayBeverage(shared_ptr<Beverage> beverage)
{
	cout << "Your order is: " << beverage->getName() << endl;
}

void Menu::run()
{
	shared_ptr<Beverage> beverage = createBeverage();
	shared_ptr<Beverage> beverageDecorator = addBeverageAccessories(beverage);
	displayBeverage(beverageDecorator);
}
