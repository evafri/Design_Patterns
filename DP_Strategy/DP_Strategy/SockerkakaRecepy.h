/*
File: SockerkakaRecepy.h
Purpose: Definition of SockerkakaRecepy, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#include "BakingRecepy.h"

class SockerkakaRecepy : public BakingRecepy {

public:
	SockerkakaRecepy() : BakingRecepy("Sockerkaka")
	{
		neededIngredients.push_back(Ingredient("egg"));					// Adding sockerkaka ingredients to vector
		neededIngredients.push_back(Ingredient("bakingpowder"));
		neededIngredients.push_back(Ingredient("wheatflour"));
		neededIngredients.push_back(Ingredient("sugar"));
		neededIngredients.push_back(Ingredient("marge"));
		neededIngredients.push_back(Ingredient("lemon"));
	}
	virtual ~SockerkakaRecepy() {}
	virtual void bakeIt();

};
