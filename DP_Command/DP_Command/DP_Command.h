/*
File: DP_Command.h
Purpose: Definition of class DP_Command, a command issuer
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Command.h"
#include "CommandManager.h"
#include "HanoiEngine.h"
#include <memory>
#include <iostream>
#include <fstream>

using namespace std;

class DP_Command {
private:
	shared_ptr<CommandManager> invoker;
	shared_ptr<HanoiEngine> receiver;
public:
	DP_Command(shared_ptr<CommandManager> i) : invoker(i) {
		receiver = shared_ptr<HanoiEngine>(new HanoiEngine());
	}
	~DP_Command() {}

	// void replay() {}
	bool move(int aFrom, int aTo);
	void reset(int numberOfDiscs);
	void show();
	
};

