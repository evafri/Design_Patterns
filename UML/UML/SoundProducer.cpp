/*
File: SoundProducer.cpp
Purpose: Implementation of class SoundProducer
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include "SoundProducer.h"
#include <string>

SoundProducer::SoundProducer(string nameOfSound)
{
	soundName = nameOfSound;
}

std::string SoundProducer::getSoundName()
{
	return soundName;
}
