/*
File: Test.cpp
Purpose: Implementation of class Test
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include "Test.h"
#include "Vehicle.h"
#include "Submarine.h"
#include "ElectricBike.h"
#include "SpaceShuttle.h"
#include <vector>
#include <memory>

// Function that introduces vehicles and powersources to the user and then executes drive() with the users choices.
bool Test::createVehicle()
{
	shared_ptr<PowerSource> powerSource;
	shared_ptr<Vehicle> vehicle;

	int vehiclechoice;
	int powersourcechoice;

	cout << endl;
	cout << "Available Vehicles" << endl;
	cout << "1. Submarine" << endl;
	cout << "2. Spaceshuttle" << endl;
	cout << "3. Electricbike" << endl;
	cout << "4. Quit" << endl << endl;

	cout << "My vehicle choice are: ";
	cin >> vehiclechoice;

	cout << endl;
	cout << "Available Powersources" << endl;
	cout << "1. V8" << endl;
	cout << "2. Gas Turbine" << endl;
	cout << "3. Fuel Cell" << endl;
	cout << "4. Quit" << endl << endl;

	cout << "My powersource choice are: ";
	cin >> powersourcechoice;

	if (vehiclechoice == 4 || powersourcechoice == 4) {
		return false;
	}

	switch (powersourcechoice)
	{
	case 1:
	{
		powerSource = shared_ptr<PowerSource>(new V8ClassicAD());
		break;
	}
			
	case 2: 
	{
		powerSource = shared_ptr<PowerSource>(new GasTurbineAD());
		break;
	}
			
	case 3: 
	{
		powerSource = shared_ptr<PowerSource>(new FuelCellAD());
		break;
	}		
	default: return false;
	}

	switch (vehiclechoice)
	{
	case 1 : 
	{
		vehicle = shared_ptr<Vehicle>(new Submarine(powerSource));
		break;
	}
	case 2 :
	{
		vehicle = shared_ptr<Vehicle>(new SpaceShuttle(powerSource));
		break;
	}
	case 3 :
	{
		vehicle = shared_ptr<Vehicle>(new ElectricBike(powerSource));
		break;
	}
	default: return false;
	}

	vehicle->drive();
	
	return true;
}

void Test::run()											
{
	while (createVehicle()) {
	}
}

