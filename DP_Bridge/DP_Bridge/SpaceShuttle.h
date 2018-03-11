/*
File: SpaceShuttle.h
Purpose: Definition of SpaceShuttle, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include <iostream>
#include "Vehicle.h"
using namespace std;

class SpaceShuttle : public Vehicle {

public:
	SpaceShuttle(shared_ptr<PowerSource> powerSource) : Vehicle("Spaceshuttle") {
		setPowerSource(powerSource);
	}
	virtual ~SpaceShuttle() {}
	void drive();
	void steerLeft(int degrees);
	void steerRight(int degrees);
};
