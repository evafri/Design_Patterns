/*
File: Menu.cpp
Purpose : Implementation of class menu
Author : Eva Frisell <evmo1600>
Date : 2018-03-18
Version : 1.1
*/

#include <iostream>
#include "Menu.h"

using namespace std;

bool Menu::createMenu()
{
	int beverageChoice;
	int beverageAccessoriesChoice;

	cout << endl;
	cout << "Available Beverages" << endl;
	cout << "1. Coffee" << endl;
	cout << "2. Espresso" << endl;
	cout << "3. Tea" << endl;
	cout << "4. Hot Chocolate" << endl;
	cout << "5. Quit" << endl << endl;

	cout << "My beverage choice are: ";
	cin >> beverageChoice;

	cout << endl;
	cout << "Available beverage accessories" << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cout << "4." << endl;
	cout << "5. Quit" << endl << endl;

	cout << "My beverage accessories choice are: ";
	cin >> beverageAccessoriesChoice;

	return true;
}

void Menu::run()
{
	while (createMenu());
}
