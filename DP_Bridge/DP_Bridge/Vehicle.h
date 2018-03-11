/*
File: Vehicle.h
Purpose: Definition of Vehicle, an abstract class
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <memory>
#include "PowerSource.h"
#include "PowerSourceAdapters.h"
using namespace std;

class Vehicle {
private:
	shared_ptr<PowerSource> powerSource;
	string name;

public:
	Vehicle(string aName);
	virtual ~Vehicle(){}

	string toString();
	string poweredBy();
	
	void setPowerSource(shared_ptr<PowerSource> powerSource);
	
	bool tryStart();
	bool stop();
	bool incPower(int power = 5);
	bool decPower(int power = 5);
	virtual void drive() = 0;
	virtual void steerLeft(int degrees) = 0;
	virtual void steerRight(int degrees) = 0;
};


#endif // 
