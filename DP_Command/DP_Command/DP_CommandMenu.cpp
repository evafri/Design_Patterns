/*
File: DP_CommandMenu.cpp
Purpose: Implementation of class DP_CommandMenu. This class holds the menu. The user can choose to start a new game or replay an old one.
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
		int numberOfDiscs;

		while (keepOn) {
			cout << "Commands" << endl;
			cout << "1. Replay" << endl;
			cout << "2. Move" << endl;
			cout << "3. Undo" << endl;
			cout << "4. Redo" << endl;
			cout << "5. Show" << endl;
			cout << "6. Reset" << endl;
			cout << "0. Quit" << endl;

			while (!(cin >> choice) || choice < 0 || choice > 6) {
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
			}

			switch (choice) {
			case 1: {
				command_issuer->replay();
				break;
			}
			case 2: {
				cout << endl;
				cout << "Move From? " << endl;
				cin >> moveFrom;
				cout << "Move To? " << endl;
				cin >> moveTo;
				command_issuer->move(moveFrom, moveTo); 
				break;
			}
			case 3: {
				commandManager->undo();
				break;
			}
			case 4: {
				commandManager->redo();
				break;
			}
			case 5: {
				command_issuer->show();
				break;
			}
			case 6: {
				cout << endl;
				cout << "How many discs? " << endl;
				cin >> numberOfDiscs;
				command_issuer->reset(numberOfDiscs);
				break;
			}
			case 0:	keepOn = false; 
				break;
			}
		}
	}
};