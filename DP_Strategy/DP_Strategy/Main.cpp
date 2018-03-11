/*
File: Main.cpp
Purpose : Where the program runs
Author : Eva Frisell <evmo1600>
Date : 2018-02-10
Version : 1.1
*/

#include <iostream>
#include "Bakery.h"
#include "BakingRecepyManager.h"


int main() {
	
	Bakery bakery = Bakery(new BakingRecepyManager("skafferi.dat"));
	bakery.bakeAllRecepies();
	
	/*
	shared_ptr<Bakery> bakery(new BakingRecepyManager("skafferi.dat"));

	bakery->bakeAllRecepies();*/
}