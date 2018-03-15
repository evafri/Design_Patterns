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
	CommandList.push_back(command);
	return command->execute();
}

void CommandManager::undo()
{/*
	shared_ptr<Command> command;
	command = CommandList.back();
	CommandList.pop_back();
	command->unExecute();
*/
}
