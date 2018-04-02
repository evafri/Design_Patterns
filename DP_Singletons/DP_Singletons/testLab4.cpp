/*
File: testLab4.cpp
Purpose: Implementation of testLab4. Here, the user can choose if he or she wants to play a nasty or a nice game.
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#include <vector>
#include <iostream>
#include <cstdlib>
#include "Game.h"

using std::cin;

int main() {

    int choice;
    bool keepOn = true;

    while(keepOn) {
       GameFactory *gf = nullptr;
        cout << "Choose your game:" << endl;
        cout << "1 - Nice game" << endl;
        cout << "2 - Nasty game" << endl;
        cout << "3 - quit" << endl;

        while(!(cin >> choice) || choice <1 || choice >3) {
          cin.clear();
          cin.ignore(cin.rdbuf()->in_avail());
        }
		
        switch(choice) {
		case 1:   
			gf = NiceGameFactory::instance(); // create a new NiceGameFactory object
			break; 
			
		case 2:  
			gf = NastyGameFactory::instance(); // create a new NastyGameFactory object
			break; 
			
		case 3: 
			keepOn = false; 
			delete gf; 
			NiceGameFactory::instance()->destroySingleton();		// deallocate
			NastyGameFactory::instance()->destroySingleton();		// deallocate
			break;
        }
		
        if(keepOn) {
          Game game(gf);
          game.play();
		}
    } // while
	
    return 0;
}


