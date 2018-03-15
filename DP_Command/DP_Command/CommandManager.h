/*
File: CommandManager.h
Purpose: Definition of class CommandManager, a command invoker
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/
#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H


#include "Command.h"
#include "HanoiEngine.h"
#include <memory>
#include <iostream>
#include <list>

using namespace std;

class CommandManager {

private:
	list<shared_ptr<Command>> commandList;
	
public:
	CommandManager() {}
	~CommandManager() {}
	
	bool runCommand(shared_ptr<Command> command);

	shared_ptr<Command> getLastCommand();
	bool undo();
	//void redo() {}
	
};
#endif