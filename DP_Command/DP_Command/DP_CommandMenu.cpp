/*
File: DP_CommandMenu.cpp
Purpose: Implementation of class DP_CommandMenu
Author: Eva Frisell <evmo1600>
Date: 2018-03-14
Version: 1.1
*/

#include <iostream>
#include <memory>
#include "CommandManager.h"
#include "DP_Command.h"

using namespace std;

class DP_CommandMenu {
private:
	shared_ptr<CommandManager> commandManager;
	shared_ptr<DP_Command> command_issuer;

public:
	DP_CommandMenu(){
	commandManager = shared_ptr<CommandManager>(new CommandManager());
	command_issuer = shared_ptr<DP_Command>(new DP_Command(commandManager));
	}

	~DP_CommandMenu(){}

	void DP_CommandMenu::run()
	{
		int choice;
		bool keepOn = true;
		int moveFrom;
		int moveTo;

		while (keepOn) {
			cout << "Commands" << endl;
			cout << "1. Move" << endl;
			cout << "2. Show" << endl;
			cout << "0. Quit" << endl;

			// Clear input stream
			while (!(cin >> choice) || choice <0 || choice >2) {
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
			}

			switch (choice) {
			case 1: {
				cout << "Move From? " << endl;
				cin >> moveFrom;
				cout << "Move To? " << endl;
				cin >> moveTo;
				command_issuer->move(moveFrom, moveTo); 
				break;
			}
			case 2: {
				command_issuer->show();
				break;
			}
			case 0:	keepOn = false; 
				break;
			}
		}
	}

};