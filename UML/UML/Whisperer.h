/*
File: Whisperer.h
Purpose: Definition of Whisperer, a class that inherits SoundProducer
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/


#include "SoundProducer.h"
#include <iostream>
using namespace std;

class Whisperer : public SoundProducer {
public: 
	// Set sound name in constructor
	Whisperer(string nameOfSound = "Whisper"): SoundProducer(nameOfSound){}
	virtual ~Whisperer() {}
	virtual void makeSound();
};