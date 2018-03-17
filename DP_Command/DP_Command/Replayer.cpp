/*
File: Replayer.cpp
Purpose: Implementation of Replayer
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "Replayer.h"
#include "MoveCommand.h"
#include "ShowCommand.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function that reads from logfile.
void Replayer::readFromLogFile()
{
	ifstream logFile = ifstream("Hanoi.log", std::ifstream::in);
	string line;

	if (logFile.is_open())
	{
		while(getline(logFile, line, ':'))
		{
			if (line == "MoveCommand") {
				shared_ptr<Command> moveCommand = shared_ptr<Command>(new MoveCommand(receiver, 0, 0));
				moveCommand->readFromStream(logFile);
			}
			if (line == "ShowCommand") {
				shared_ptr<Command> showCommand = shared_ptr<Command>(new ShowCommand(receiver));
				showCommand->readFromStream(logFile);
			}
		}
		logFile.close();
		remove("Hanoi.log");				// Remove logfile after reading it.
	}
	else {
		cout << "Unable to open file";
		
	}
	

}
