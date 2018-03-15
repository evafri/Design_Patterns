/*
File: Command.h
Purpose: Definition of class Command
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#ifndef COMMAND_H
#define COMMAND_H

#include <fstream>
#include <iostream>

class Command {
public:
	Command() {}
	virtual bool execute() = 0;
	//virtual bool unExecute() = 0;
	virtual bool isUndoable() = 0;
	//virtual void readFromStream(ifstream&) = 0;
	virtual ~Command() {}
};
#endif