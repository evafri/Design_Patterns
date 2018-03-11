/*
File: ElectricBike.cpp
Purpose: Implementation of class ElectricBike
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include "ElectricBike.h"

void ElectricBike::drive()
{
	cout << endl;
	cout << "Riding an " << toString() << endl;
	tryStart();
	cout << "We are peddling away..." << endl;
	incPower(50);
	steerLeft(25);
	decPower(50);
	stop();
	cout << "Let's try another engine..." << endl;
	setPowerSource(shared_ptr<PowerSource>(new V8ClassicAD));
	tryStart();
	cout << "We are peddling away again..." << endl;
	incPower(60);
	steerLeft(30);
	steerRight(25);
	decPower(30);
	stop();
}

void ElectricBike::steerLeft(int degrees)
{
	cout << "Steering left " << degrees << " degrees at the park" << endl;
}

void ElectricBike::steerRight(int degrees)
{
	cout << "Steering right " << degrees << " degrees avoiding the big rock on the road" << endl;
}
