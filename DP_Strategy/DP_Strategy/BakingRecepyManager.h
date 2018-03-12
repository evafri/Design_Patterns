/*
File: BakingRecepyManager.h
Purpose: Definition of class BakingRecepyManager
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#ifndef BAKINGRECEPYMANAGER_H
#define BAKINGRECEPYMANAGER_H

#include <iostream>
#include <memory>
#include "BakingRecepy.h"

using namespace std;

class BakingRecepyManager {

private:						
	vector<shared_ptr<BakingRecepy>> recepies;				// vector with all the recepies
	vector<Ingredient> availableIngredients;				// vector with all available ingredients
	shared_ptr<BakingRecepy> bakingRecepy;
public:
	BakingRecepyManager(string fileName);
	~BakingRecepyManager() {}
	bool hasAnotherRecepy();
	shared_ptr<BakingRecepy> getNextBakingRecepy();
};
#endif