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
	return command->execute();
}
