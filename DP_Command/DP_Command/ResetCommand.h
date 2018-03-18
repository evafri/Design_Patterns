/*
File: ResetCommand.h
Purpose: Definition of concrete Command class ResetCommand. ResetCommand executes HanoiEngines reset-function.
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Command.h"
#include "HanoiEngine.h"
#include <memory>
#include <iostream>

using namespace std;

class ResetCommand : public Command {
private:
	shared_ptr<HanoiEngine> receiver;
	int numberOfDiscs;

public:
	ResetCommand(shared_ptr<HanoiEngine> r, int numberOfDiscs) : receiver(r), numberOfDiscs(numberOfDiscs){}
	~ResetCommand() {
		remove("Hanoi.log");
	}

	bool execute();
	bool unExecute();
	bool isUndoable();
	void readFromStream(ifstream& instream);
};

