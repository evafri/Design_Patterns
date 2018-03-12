/*
File: BakingRecepy.h
Purpose: Definition of BakingRecepy, an abstract class
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#ifndef BAKINGRECEPY_H
#define BAKINGRECEPY_H

#include <iostream>
#include <vector>
#include "Ingredient.h"

using namespace std;

class BakingRecepy {
protected:
	string iName;
	vector<Ingredient> neededIngredients;

public:
	BakingRecepy(string aName);
	virtual ~BakingRecepy() {}
	virtual void bakeIt() = 0;
	bool isBakeable(vector<Ingredient>& availableIngredients);
	string getName();
};
#endif
