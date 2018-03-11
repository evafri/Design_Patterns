/*
File: Bakery.h
Purpose: Definition of class Bakery
Author: Eva Frisell <evmo1600>
Date: 2018-02-10
Version: 1.1
*/

#include "BakingRecepyManager.h"

class Bakery {

private:  
	shared_ptr<BakingRecepyManager> brm;			// Pointer to BakingRecepyManager

public:
	Bakery(shared_ptr<BakingRecepyManager> brm) { this->brm = brm; }
	~Bakery() {}
	void bakeAllRecepies();					// Function that call BakeIt()
};
