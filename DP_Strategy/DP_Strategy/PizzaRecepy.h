/*
File: PizzaRecepy.h
Purpose: Definition of PizzaRecepy, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#include "BakingRecepy.h"

class PizzaRecepy : public BakingRecepy {

public: 
	PizzaRecepy() : BakingRecepy("Pizza")
	{ 
	neededIngredients.push_back(Ingredient("oil"));				// Adding pizza ingredients to vector
	neededIngredients.push_back(Ingredient("yeast"));
	neededIngredients.push_back(Ingredient("wheatflour"));
	neededIngredients.push_back(Ingredient("salt"));
	}
	virtual ~PizzaRecepy() {}
	virtual void bakeIt();

};