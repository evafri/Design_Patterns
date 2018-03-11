/*
File: Shouter.h
Purpose: Definition of Shouter, a class that inherits SoundProducer
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include "SoundProducer.h"
#include <iostream>
using namespace std;

class Shouter : public SoundProducer {
public:
	// Set sound name in constructor
	Shouter(string nameOfSound = "Shout"): SoundProducer(nameOfSound){}
	virtual ~Shouter() {}
	virtual void makeSound();
};