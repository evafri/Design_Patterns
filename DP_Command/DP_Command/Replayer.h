/*
File: Replayer.h
Purpose: Definition of class Replayer
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Command.h"
#include "HanoiEngine.h"
#include <memory>
#include <iostream>

using namespace std;

class Replayer {
private:
	shared_ptr<HanoiEngine> receiver;

public:
	Replayer(shared_ptr<HanoiEngine> r) : receiver(r) {}
	~Replayer() {}

	void readFromLogFile();
};
