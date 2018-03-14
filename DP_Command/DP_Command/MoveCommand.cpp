/*
File: MoveManager.cpp
Purpose: Implementation of MoveCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "MoveCommand.h"


bool MoveCommand::execute()
{
	return receiver->move(moveFrom, moveTo);
}
