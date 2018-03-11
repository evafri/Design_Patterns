#include "Whisperer.h"
/*
File: Whisperer.cpp
Purpose: Implementation of class Whisperer
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include <string>

// Function that prints sound on screen
void Whisperer::makeSound()
{
	cout << this->getSoundName() << ": Ssch, hush, hush" << endl;
}
