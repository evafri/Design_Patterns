/*
File: DP_Command.cpp
Purpose: Implementation of DP_Command
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "DP_Command.h"
#include "MoveCommand.h"
#include "ShowCommand.h"
#include "ResetCommand.h"

// Fumction for replaying the game
void DP_Command::replay()
{
	commandReplayer->readFromLogFile();
}

// Function for making a move
bool DP_Command::move(int aFrom, int aTo)
{
	shared_ptr<Command> moveCommand = shared_ptr<Command>(new MoveCommand(this->receiver, aFrom, aTo));
	return commandManager->runCommand(moveCommand);
}

// Function for resetting the game
void DP_Command::reset(int numberOfDiscs)
{
	shared_ptr<Command> resetCommand = shared_ptr<Command>(new ResetCommand(this->receiver, numberOfDiscs));
	commandManager->runCommand(resetCommand);
}

// Function for showing moves
void DP_Command::show()
{
	shared_ptr<Command> showCommand = shared_ptr<Command>(new ShowCommand(this->receiver));
	commandManager->runCommand(showCommand);
}



