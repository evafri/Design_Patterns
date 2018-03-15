/*
File: CommandManager.cpp
Purpose: Implementation of CommandManager
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "CommandManager.h"

bool CommandManager::runCommand(shared_ptr<Command> command)
{
	if (command->execute() && command->isUndoable()) {
		addUndo(command);	
		return true;
	}
	return false;
}

shared_ptr<Command> CommandManager::popUndo()
{
	shared_ptr<Command> command;
	command = undoList.back();
	undoList.pop_back();
	return command;	
}

bool CommandManager::undo()
{
	if (undoList.size() > 0) {
		shared_ptr<Command> command;
		command = popUndo();
		if (command->unExecute()) {
			//addRedo(command);
		}
		return true;
	}
	return false;
}

void CommandManager::addUndo(shared_ptr<Command> command)
{
	undoList.push_back(command);
}
/*
shared_ptr<Command> CommandManager::getPreviousCommand()
{
	
	shared_ptr<Command> command;
	command = commandList.at(lastMove);
	if (lastMove < commandList.size()) {
		lastMove++;
	}
	return command;
	
}

bool CommandManager::redo()
{
	shared_ptr<Command> command;
	command = getPreviousCommand();
	return command->execute();
	
	
}
*/