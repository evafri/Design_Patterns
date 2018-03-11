/*
File: main.cpp
Purpose: main that runs the program
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include "Uppgift1.h"
#include "Whisperer.h"
#include "Shouter.h"

int main() {

	Uppgift1 uppg1;
	
	uppg1.setSoundProducer(new Whisperer());
	uppg1.saySomething();
	uppg1.setSoundProducer(new Shouter());
	uppg1.saySomething();

	return 0;
}