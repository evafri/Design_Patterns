/*
File: Uppgift1.cpp
Purpose: Implementation of class Uppgift1
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include "Uppgift1.h"

Uppgift1::~Uppgift1()
{
	delete this->sp;									// Delete pointer
}

void Uppgift1::setSoundProducer(SoundProducer *sp)
{
	delete this->sp;									// Delete pointer before it points to new memory location
	this->sp = sp;
	
}

void Uppgift1::saySomething()
{
	this->sp->makeSound();								
}
