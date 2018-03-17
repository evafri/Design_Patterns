/*
File: DP_Command.h
Purpose: Definition of class DP_Command, the command issuer
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Command.h"
#include "CommandManager.h"
#include "HanoiEngine.h"
#include "Replayer.h"
#include <memory>
#include <iostream>
#include <fstream>

using namespace std;

class DP_Command {
private:
	shared_ptr<CommandManager> commandManager;
	shared_ptr<HanoiEngine> receiver;
	shared_ptr<Replayer> commandReplayer;

public:
	DP_Command(shared_ptr<CommandManager> cm) : commandManager(cm) {
		receiver = shared_ptr<HanoiEngine>(new HanoiEngine());
		commandReplayer = shared_ptr<Replayer>(new Replayer(receiver));
	}
	~DP_Command() {}

	void replay();
	bool move(int aFrom, int aTo);
	void reset(int numberOfDiscs);
	void show();
	
};

