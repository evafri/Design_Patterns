/*
File: BakingRecepyManger.cpp
Purpose : Implementation of class BakingRecepyManager
Author : Eva Frisell <evmo1600>
Date : 2018-02-05
Version : 1.1
*/


#include "BakingRecepyManager.h"
#include "Ingredient.h"
#include "PizzaRecepy.h"
#include "SconesRecepy.h"
#include "KladdkakaRecepy.h"
#include "SockerkakaRecepy.h"
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

BakingRecepyManager::BakingRecepyManager(string fileName)
{
	// adding all recepies to vector
	recepies.emplace_back(new PizzaRecepy());
	recepies.emplace_back(new SconesRecepy());
	recepies.emplace_back(new KladdkakaRecepy());
	recepies.emplace_back(new SockerkakaRecepy());

	string line;
	ifstream inFile;
	inFile.open(fileName);
	if (inFile.is_open())
	{
		while (getline(inFile, line))
		{
			Ingredient ingredient = Ingredient(line);
			availableIngredients.push_back(ingredient);
		}
		inFile.close();
	}
}

// Delete pointer in recepies
BakingRecepyManager::~BakingRecepyManager(){
	
	for (auto recepy : recepies) {
		delete recepy;
	}
	delete bakingRecepy;
}

// Function that tests if there are more recepies to bake
bool BakingRecepyManager::hasAnotherRecepy()
{
	if (!recepies.empty()){
		return true;
	}
	else {
		return false;
	}
}

BakingRecepy* BakingRecepyManager::getNextBakingRecepy()
{
	bool recepyFound = hasAnotherRecepy();
	while (recepyFound) {
		bakingRecepy = recepies.front();					// Bakes the first recepy in recepies
		recepies.erase(recepies.begin());					// Then erases the first recepy so the next recepy can be baked
		if (bakingRecepy->isBakeable(availableIngredients)) {
			return bakingRecepy;
		}
		recepyFound = hasAnotherRecepy();
	}
	throw exception("NoBakingException");
}
