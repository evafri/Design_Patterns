/*
File: ShowCommand.cpp
Purpose: Implementation of ShowCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "ShowCommand.h"
#include <string>

bool ShowCommand::execute()
{
	ofstream logFile("Hanoi.log", ios_base::out | ios_base::app);
	logFile << this->getName() << "\n";
	logFile.close();
	receiver->show();
	return true;
}

bool ShowCommand::unExecute()
{
	return false;
}

bool ShowCommand::isUndoable()
{
	return false;
}

string ShowCommand::getName()
{
	return name;
}