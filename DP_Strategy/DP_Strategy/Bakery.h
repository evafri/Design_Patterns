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
	BakingRecepyManager* brm { nullptr };  // Pointer to BakingRecepyManager
	//shared_ptr<BakingRecepyManager> brm;

public:
	
	Bakery(BakingRecepyManager *brm) { this->brm = brm; }
	~Bakery() { delete this->brm; }			// delete pointer
	/*
	Bakery() {}
	~Bakery() {}*/
	void bakeAllRecepies();					// Function that call BakeIt()
};
