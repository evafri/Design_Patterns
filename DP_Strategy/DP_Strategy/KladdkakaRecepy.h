/*
File: KladdkakaRecepy.h
Purpose: Definition of KladdkakaRecepy, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#include "BakingRecepy.h"

class KladdkakaRecepy : public BakingRecepy {

public:
	KladdkakaRecepy() : BakingRecepy("Kladdkaka")
	{
		neededIngredients.push_back(Ingredient("egg"));						// Adding kladdkaka ingredients to vector
		neededIngredients.push_back(Ingredient("bakingpowder"));
		neededIngredients.push_back(Ingredient("wheatflour"));
		neededIngredients.push_back(Ingredient("salt"));
		neededIngredients.push_back(Ingredient("sugar"));
		neededIngredients.push_back(Ingredient("marge"));
		neededIngredients.push_back(Ingredient("cocoapowder"));
	}
	virtual ~KladdkakaRecepy() {}
	virtual void bakeIt();

};
