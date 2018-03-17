/*
File: ShowCommand.cpp
Purpose: Implementation of ShowCommand
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "ShowCommand.h"
#include <string>
#include <fstream>

using namespace std;

// Function that reads to logfile and call show()
bool ShowCommand::execute()
{
	ofstream logFile("Hanoi.log", ios_base::out | ios_base::app);
	logFile << this->getName() << ":" << "\n";
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

void ShowCommand::readFromStream(ifstream &instream)
{
	string line;
	if (instream.is_open())
	{
		getline(instream, line, '\r');
		receiver->show();
	}
	else {
		cout << "Unable to open file" << endl;
	}
}

string ShowCommand::getName()
{
	return name;
}