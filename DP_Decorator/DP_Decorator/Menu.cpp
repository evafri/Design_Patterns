/*
File: Menu.cpp
Purpose : Implementation of class menu
Author : Eva Frisell <evmo1600>
Date : 2018-03-18
Version : 1.1
*/

#include <iostream>
#include <memory>
#include "Menu.h"
#include "Beverage.h"
#include "Coffee.h"
#include "Sugar.h"

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
		//cout << "2. Espresso" << endl;
		//cout << "3. Tea" << endl;
		//cout << "4. Hot Chocolate" << endl;
		cout << "5. Quit" << endl << endl;

		cout << "My beverage choice are: ";
		cin >> beverageChoice;

		// skapa vald dryck
		switch (beverageChoice)
		{
		case 1:
		{
			beverage = shared_ptr<Beverage>(new Coffee());
			beverage->getName();
			addBeverageAccessories();
			keepOn = false;
			return beverage;
			break;
		}

		case 2:
		{
			break;
		}

		case 3:
		{
			break;
		}
		case 4:
		{
			break;
		}
		default: keepOn = false;
			break;
		}
	}
}

void Menu::addBeverageAccessories()
{
	//shared_ptr<Beverage> beverage = createBeverage();
	int beverageAccessoriesChoice;
	int addBeverageAccessories;
	bool keepOn = true;

	cout << "Do you want add beverage accessories? Please press 1. Otherwise press 0!" << endl;
	cin >> addBeverageAccessories;

	if (addBeverageAccessories == 1) {

		while (keepOn) {
			cout << endl;
			cout << "Available beverage accessories" << endl;
			cout << "1. Sugar" << endl;
			//cout << "2. Milk" << endl;
			//cout << "3. Cream" << endl;
			//cout << "4. Whipped cream" << endl;
			cout << "5. Quit" << endl << endl;

			cout << "My beverage accessories choice are: ";
			cin >> beverageAccessoriesChoice;
		}

	switch (beverageAccessoriesChoice)
	{
	case 1:
	{
		//beverage = shared_ptr<Beverage>(new Sugar(beverage));
		//beverage->getName();
	
		break;
	}
	case 2:
	{
		break;
	}
	case 3:
	{
		break;
	}
	case 4:
	{
		break;
	}
	default: keepOn = false;
	}
	}
	else {

	}
}

void Menu::run()
{
	createBeverage();
	
}
