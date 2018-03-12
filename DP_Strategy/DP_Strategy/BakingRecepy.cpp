/*
File: BakingRecepy.cpp
Purpose : Implementation of class BakingRecepy
Author : Eva Frisell <evmo1600>
Date : 2018-02-10
Version : 1.1
*/

#include "BakingRecepy.h"

BakingRecepy::BakingRecepy(string aName)
{
	iName = aName;
}

// Function that compare needed ingredients with available ingredients
bool BakingRecepy::isBakeable(vector<Ingredient>& availableIngredients)
{
	int ingredientsFound = 0;					// Variable that counts number of ingredients found
	for (auto ingredient : neededIngredients) {
		for (auto availableIngredient : availableIngredients) {
			if (ingredient.getName() == availableIngredient.getName()) {
				ingredientsFound++;
			}
		}
	}
	if (ingredientsFound == neededIngredients.size()) {
		return true;
	}
	else {
		return false;
	}
}

string BakingRecepy::getName()
{
	return iName;
}