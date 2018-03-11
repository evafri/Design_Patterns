/*
File: Test.h
Purpose: Definition of Test, a class that is responsible for introducing the vehicles and different
powersources to the user. The user gets to choose vehicle and powersource and then drive is executed.
Author: Eva Frisell <evmo1600>
Date: 2018-03-04
Version: 1.1
*/

#include <iostream>
using namespace std;

class Test {
private:
	bool createVehicle();

public:
	Test(){}
	~Test(){}
	void run();
};
