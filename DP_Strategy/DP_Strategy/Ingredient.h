/*
File: Ingredient.h
Purpose: Definition of Ingredient
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/
#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <iostream>
using namespace std;

class Ingredient {
private:
	string iName;

public:
	Ingredient(string aName) : iName(aName) {}

	string getName() const { return iName; }
	operator string() const { return iName; }
	bool operator==(const Ingredient &rhs) const {
		return iName == rhs.iName;
	}
};
#endif