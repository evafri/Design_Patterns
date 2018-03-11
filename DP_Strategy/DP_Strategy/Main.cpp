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

	shared_ptr<BakingRecepyManager>brm = shared_ptr<BakingRecepyManager>(new BakingRecepyManager("skafferi.dat"));

	Bakery bakery = Bakery(brm);
	bakery.bakeAllRecepies();
}