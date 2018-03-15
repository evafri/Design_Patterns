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
	if (command->isUndoable()) {
	commandList.push_back(command);
	}
	return command->execute();
}

shared_ptr<Command> CommandManager::getLastCommand()
{
	shared_ptr<Command> command;
	command = commandList.back();
	return command;
}

bool CommandManager::undo()
{
	shared_ptr<Command> command;
	command = getLastCommand();
	return command->unExecute();
}
