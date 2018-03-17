/*
File: MoveCommand.h
Purpose: Definition of concrete Command class MoveCommand. MoveCommand executes HanoiEngines move-function.
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Command.h"
#include "HanoiEngine.h"
#include <memory>
#include <iostream>

using namespace std;

class MoveCommand : public Command {
private:
	shared_ptr<HanoiEngine> receiver;
	int moveFrom;
	int moveTo;
	string name = "MoveCommand";

public:
	MoveCommand(shared_ptr<HanoiEngine> r, int aFrom, int aTo) : receiver(r), moveFrom(aFrom), moveTo(aTo) {}
	~MoveCommand() {}

	bool execute();
	bool unExecute();
	bool isUndoable();
	void readFromStream(ifstream& instream);
	string getName();
};
