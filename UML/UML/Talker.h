/*
File: Talker.h
Purpose: Definition of Talker, an abstract class (interface)
Author: Eva Frisell <evmo1600>
Date: 2018-01-24
Version: 1.1
*/

#include <iostream>
using namespace std;

class Talker {

public: 
	virtual ~Talker() {}
	virtual void saySomething() = 0;
};
