#include "Shouter.h"
/*
File: Shouter.cpp
Purpose: Implementation of class Shouter
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include <string>

// Function that prints sound on screen
void Shouter::makeSound()
{
	cout << this->getSoundName() << ": WOW YEEEH!!" << endl;
}
