/*
File: Game.cpp
Purpose: Implementation of class Game
Author: Eva Frisell <evmo1600>
Date: 2018-03-11
Version: 1.1
*/

#include <iostream>
#include "Game.h"

using std::cin;

template<typename T>
void destroyVectorElements(vector<T> &vec);

Game::Game(GameFactory *gFact) {

	obstacles = gFact->makeObstacles();
	actions = gFact->makeActions();
	player = gFact->makePlayer();
	title = gFact->setGameTitle();	
}

// Call delete function and delete player-pointer
Game::~Game() {
  destroyVectorElements(obstacles);
  destroyVectorElements(actions);
  delete player;						
}

// Function that plays the game.
void Game::play( ) {

  cout << "*** Welcome to " << title << " ***" << endl;

  typedef std::vector<Action*>::iterator AtypeIt;
  typedef std::vector<Obstacle*>::iterator OtypeIt;

  AtypeIt aStart=actions.begin(), aStop=actions.end(), ait;
  OtypeIt oStart=obstacles.begin(), oStop=obstacles.end(), oit;

  for(oit=oStart; oit!=oStop&& player->alive(); ++oit) {

    int alt, choice;
    bool passed = false;

    while(!passed && player->alive()) {
      (*oit)-> show();
      cout <<"\nChoose action:\n";

      for(alt=1, ait=aStart; ait!=aStop&& player->alive();++alt,++ait)
        cout << "\t " << alt << ' '<< (*ait)->show();

      while(!(cin >> choice) || choice <1 || choice >=alt) {
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
      }

      passed = (*oit)->tryToPass(player,actions[choice-1]);
      player->show();
    }   // while
  }
  if(player->alive())
      cout << "\nYou Win!" << endl;
  else
      cout << "\nYou Lose!" << endl;
  cin.ignore(cin.rdbuf()->in_avail());
}

// Deleting vector-objects created with new.
template<typename T>
void destroyVectorElements(vector<T> &vec) {
  
	for (int i = 0; i < vec.size(); ++i) {
		delete vec[i];
	}
	vec.clear();
}

