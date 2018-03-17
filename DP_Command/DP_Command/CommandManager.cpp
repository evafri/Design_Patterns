/*
File: CommandManager.cpp
Purpose: Implementation of CommandManager
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include "CommandManager.h"

// Function that call execute
bool CommandManager::runCommand(shared_ptr<Command> command)
{
	if (command->execute() && command->isUndoable()) {
		addUndo(command);	
		redoList.clear();
		return true;
	}
	return false;
}

// Function that pops most recent commnad in undoList.
shared_ptr<Command> CommandManager::popUndo()
{
	shared_ptr<Command> command;
	command = undoList.back();
	undoList.pop_back();
	return command;	
}

// Function that allows user to undo moves. Function calls unexecute. 
bool CommandManager::undo()
{
	if (undoList.size() > 0) {
		shared_ptr<Command> command;
		command = popUndo();
		if (command->unExecute()) {
			addRedo(command);
		}
		return true;
	}
	return false;
}

// Function that adds an undo command to undoList.
void CommandManager::addUndo(shared_ptr<Command> command)
{
	undoList.push_back(command);
}

// Function that pops most recent command in redoList.
shared_ptr<Command> CommandManager::popRedo()
{
	shared_ptr<Command> command;
	command = redoList.back();
	redoList.pop_back();
	return command;
	
}

// Function that allows the user to redo a move
bool CommandManager::redo()
{
	if (redoList.size() > 0) {
		shared_ptr<Command> command;
		command = popRedo();
		if (command->execute()) {
			addUndo(command);
		}
		return true;
	}
	return false;
}

// Function that adds an redo command to redoList.
void CommandManager::addRedo(shared_ptr<Command> command)
{
	redoList.push_back(command);
}

