/*
File: SpaceShuttle.cpp
Purpose: Implementation of class SpaceShuttle
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include "SpaceShuttle.h"

void SpaceShuttle::drive()
{
	cout << endl;
	cout << "Driving a " << toString() << endl;
	tryStart();
	cout << "We are flying in space..." << endl;
	incPower(50);
	steerLeft(25);
	decPower(20);
	steerRight(25);
	incPower(50);
	decPower(50);
	stop();
	cout << "Let's try another engine..." << endl;
	setPowerSource(shared_ptr<PowerSource>(new FuelCellAD));
	tryStart();
	cout << "Hey we are flying again..." << endl;
	incPower(20);
	steerLeft(35);
	incPower(30);
	decPower(20);
	steerRight(25);
	decPower(20);
	stop();
}

void SpaceShuttle::steerLeft(int degrees)
{
	cout << "Turning left " << degrees << " degrees near Saturn" << endl;
}

void SpaceShuttle::steerRight(int degrees)
{
	cout << "Turning right " << degrees << " degrees. Ah, look at the stars" << endl;
}
