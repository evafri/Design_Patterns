/*
File: Submarine.cpp
Purpose: Implementation of class Submarine
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include "Submarine.h"

void Submarine::drive()
{
	cout << endl;
	cout << "Driving a " << toString() << endl;
	tryStart();
	cout << "We are going underwater..." << endl;
	incPower(25);
	steerLeft(25);
	steerRight(25);
	decPower(25);
	stop();
	cout << "Let's try another engine..." << endl;
	setPowerSource(shared_ptr<PowerSource>(new GasTurbineAD));
	tryStart();
	cout << "We are moving again..." << endl;
	incPower(35);
	steerRight(25);
	decPower(30);
	stop();
}

void Submarine::steerLeft(int degrees)
{
	cout << "Turning left " << degrees << " degrees by the coral reaf" << endl;
}

void Submarine::steerRight(int degrees)
{
	cout << "Turning right " << degrees << " degrees avoiding the great white shark" << endl;
}
