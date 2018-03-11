/*
File: ElectricBike.h
Purpose: Definition of ElectricBike, an inherited class
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include <iostream>
#include "Vehicle.h"
using namespace std;

class ElectricBike : public Vehicle {

public:
	ElectricBike(shared_ptr<PowerSource> powerSource) : Vehicle("Electricbike") {
		setPowerSource(powerSource);
	}
	virtual ~ElectricBike() {}
	void drive();
	void steerLeft(int degrees);
	void steerRight(int degrees);
};

