/*
File: ResetCommand.cpp
Purpose: Implementation of ResetCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/


#include "ResetCommand.h"

bool ResetCommand::execute()
{
	receiver->reset(numberOfDiscs);
	return true;
}

bool ResetCommand::isUndoable()
{
	return false;
}
