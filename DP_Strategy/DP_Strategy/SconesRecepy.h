/*
File: SconesRecepy.h
Purpose: Definition of SconesRecepy, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#include "BakingRecepy.h"

class SconesRecepy : public BakingRecepy {

public:
	SconesRecepy() : BakingRecepy("Scones")
	{
		neededIngredients.push_back(Ingredient("oil"));					// Adding scones ingredients to vector
		neededIngredients.push_back(Ingredient("bakingpowder"));
		neededIngredients.push_back(Ingredient("wheatflour"));
		neededIngredients.push_back(Ingredient("salt"));
		neededIngredients.push_back(Ingredient("sugar"));
		neededIngredients.push_back(Ingredient("milk"));
	}
	virtual ~SconesRecepy() {}
	virtual void bakeIt();

};
