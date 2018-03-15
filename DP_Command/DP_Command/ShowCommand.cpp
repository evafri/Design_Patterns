/*
File: ShowCommand.cpp
Purpose: Implementation of ShowCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "ShowCommand.h"

bool ShowCommand::execute()
{
	receiver->show();
	return true;
}

bool ShowCommand::isUndoable()
{
	return false;
}
