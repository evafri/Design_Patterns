/*
File: DP_Command.cpp
Purpose: Implementation of DP_Command
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "DP_Command.h"
#include "MoveCommand.h"

bool DP_Command::move(int aFrom, int aTo)
{
	shared_ptr<Command> moveCommand = shared_ptr<Command>(new MoveCommand(this->receiver, aFrom, aTo));
	return invoker->runCommand(moveCommand);
}

void DP_Command::show()
{
}



