/*
File: Uppgift1.h
Purpose: Definition of Uppgift1, a class that inherits Talker
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include <iostream>
#include "SoundProducer.h"
#include "Talker.h"
using namespace std;

class Uppgift1 : public Talker {

private:
	SoundProducer* sp;									// SoundProducer pointer

public:
	Uppgift1() {} 
	virtual ~Uppgift1();

	void setSoundProducer(SoundProducer *sp);
	virtual void saySomething();
};
