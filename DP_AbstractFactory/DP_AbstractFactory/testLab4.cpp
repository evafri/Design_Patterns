/*
File: testLab4.cpp
Purpose: Implementation of class testLab4
Author: Eva Frisell <evmo1600>
Date: 2018-03-11
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
		/*
        switch(choice) {
          case 1:  gf = Ett factory-objekt ; break;
          case 2:  gf = Ett annat factory-objekt; break;
          case 3: keepOn=false;
        }
		*/
        if(keepOn) {
          Game game(gf);
          game.play();
          delete gf;
        }
    } // while

    return 0;
}


