/*
File: MoveManager.cpp
Purpose: Implementation of MoveCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "MoveCommand.h"
#include <fstream>
#include <string>

bool MoveCommand::execute()
{
	ofstream logFile("Hanoi.log", ios_base::out | ios_base::app);
	logFile << this->getName() << "\n" << this->moveFrom << ", " << this->moveTo << "\n";
	logFile.close();
	return receiver->move(moveFrom, moveTo);
}

bool MoveCommand::unExecute()
{
	ofstream logFile("Hanoi.log", ios_base::out | ios_base::app);
	logFile << this->getName() << "\n" << this->moveTo << ", " << this->moveFrom << "\n";
	logFile.close();
	return receiver->move(moveTo, moveFrom);
}

bool MoveCommand::isUndoable()
{
	return true;
}

string MoveCommand::getName()
{
	return name;
}
