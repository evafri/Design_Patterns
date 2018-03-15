/*
File: ShowCommand.h
Purpose: Definition of concrete Command class ShowCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Command.h"
#include "HanoiEngine.h"
#include <memory>
#include <iostream>

using namespace std;

class ShowCommand : public Command {
private:
	shared_ptr<HanoiEngine> receiver;

public:
	ShowCommand(shared_ptr<HanoiEngine> r) : receiver(r) {}
	~ShowCommand() {}

	bool execute();
	bool unExecute();
	bool isUndoable();
	//void readFromStream(ifstream&);
};
