/*
File: Bakery.cpp
Purpose: Implementation of class Bakery
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#include "Bakery.h"
#include <string>
#include <iostream>

// Function that bakes the recepies 
void Bakery::bakeAllRecepies()
{
	// while there are recepies, function bakeIt gets called
	while (brm->hasAnotherRecepy() == true) {
		shared_ptr<BakingRecepy> bakingRecepy = brm->getNextBakingRecepy();
		cout << bakingRecepy->getName() << endl;
		bakingRecepy->bakeIt();
	}
}
