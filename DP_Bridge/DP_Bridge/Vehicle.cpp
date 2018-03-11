/*
File: Vehicle.cpp
Purpose: Implementation of class Vehicle
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include "Vehicle.h"

Vehicle::Vehicle(string aName)
{
	name = aName;
}

string Vehicle::toString()
{
	return name;
}

string Vehicle::poweredBy()
{
	return powerSource->type();
}

void Vehicle::setPowerSource(shared_ptr<PowerSource> powersource)
{
	powerSource = powersource;
}

bool Vehicle::tryStart()
{
	if (powerSource->setPower(35)) {
		powerSource->tryStart();
		return true;
	}
	else {
		return false;
	}
}

bool Vehicle::stop()
{
	if (powerSource->isRunning()) {
		powerSource->stop();
		return true;
	}
	return false;
}

bool Vehicle::incPower(int power)
{
	return powerSource->incPower(power);
}

bool Vehicle::decPower(int power)
{
	return powerSource->decPower(power);
}
