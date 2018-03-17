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

using namespace std;

// Function that reads the moves to the logfile and execute the move.
bool MoveCommand::execute()
{
	ofstream logFile("Hanoi.log", ios_base::out | ios_base::app);
	logFile << this->getName() << ":" << this->moveFrom << ":" << this->moveTo << ":" << "\n";
	logFile.close();

	return receiver->move(moveFrom, moveTo);
}

// Function that reads the moves to the logfile and unexecute the move. 
bool MoveCommand::unExecute()
{
	ofstream logFile("Hanoi.log", ios_base::out | ios_base::app);
	logFile << this->getName() << ":" << this->moveTo << ":" << this->moveFrom << ":" << "\n";
	logFile.close();

	return receiver->move(moveTo, moveFrom);
}

bool MoveCommand::isUndoable()
{
	return true;
}

// Function that reads moveFrom and moveTo from the stream and executes the move again.
void MoveCommand::readFromStream(ifstream &instream)
{
	string line1;
	string line2;
	string endline;

	int moveFrom;
	int moveTo;

	if (instream.is_open())
	{
		getline(instream, line1, ':');
		getline(instream, line2, ':');
		getline(instream, endline);
		moveFrom = atoi(line1.c_str());
		moveTo = atoi(line2.c_str());
		
		receiver->move(moveFrom, moveTo);
	}
	else {
		cout << "Unable to open file" << endl;
	}
}

string MoveCommand::getName()
{
	return name;
}
