/*
File: Submarine.h
Purpose: Definition of Submarine, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include <iostream>
#include "Vehicle.h"
using namespace std;

class Submarine : public Vehicle {

public:
	Submarine(shared_ptr<PowerSource> powerSource) : Vehicle("Submarine") {
		setPowerSource(powerSource);
	}
	virtual ~Submarine(){}
	void drive();
	void steerLeft(int degrees);
	void steerRight(int degrees);
};
