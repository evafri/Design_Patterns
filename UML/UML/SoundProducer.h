/*
File: SoundProducer.h
Purpose: Definition of SoundProducer, an abstract class
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#ifndef SOUNDPRODUCER_H
#define SOUNDPRODUCER_H

#include <iostream>
using namespace std;

class SoundProducer {
private:
	string soundName;

public:
	SoundProducer(string nameOfSound);
	virtual ~SoundProducer() {}
	virtual void makeSound() = 0;
	std::string getSoundName();

};
#endif