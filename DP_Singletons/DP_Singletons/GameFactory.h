/*
File: GameFactory.h
Purpose: Definition of abstract GameFactory and its concrete singleton subclasses.
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#ifndef GameFactoryH
#define GameFactoryH

#include <vector>
#include <string>

using std::vector;
using std::string;

class Player;
class Obstacle;
class Action;


// Abstract GameFactory class
class GameFactory {
protected:
  GameFactory() { }

public:
	virtual ~GameFactory() = default;
	virtual vector<Obstacle*> makeObstacles() = 0;
	virtual vector<Action*> makeActions() = 0;
	virtual Player *makePlayer() = 0;
	virtual string setGameTitle() = 0;
};

// Concrete NiceGameFactory singleton class
class NiceGameFactory : public GameFactory {

private:
	NiceGameFactory() : GameFactory() {}				// private constructor
	static NiceGameFactory *niceGameFactory;			// the instance

public:
	virtual ~NiceGameFactory() {}

	static NiceGameFactory* instance() {
		if (niceGameFactory == nullptr) {
			niceGameFactory = new NiceGameFactory();				// Create an instance 
		}
		return niceGameFactory;
	}
	// Function that deallocates and set static instance pointer to nullptr
	void destroySingleton() { if (niceGameFactory) { delete niceGameFactory; niceGameFactory = nullptr; } }

	vector<Obstacle*> makeObstacles();
	vector<Action*> makeActions();
	Player *makePlayer();
	string setGameTitle();
};

// Concrete NastyGameFactory singleton class
class NastyGameFactory : public GameFactory {

private:
	NastyGameFactory() : GameFactory() {}					// private constructor
	static NastyGameFactory *nastyGameFactory;				// the instance

public:
	virtual ~NastyGameFactory() {}

	static NastyGameFactory* instance() {
		if (nastyGameFactory == nullptr) {
			nastyGameFactory = new NastyGameFactory();				// Create an instance 
		}
		return nastyGameFactory;
	}
	// Function that deallocates and set static instance pointer to nullptr
	void destroySingleton() { if (nastyGameFactory) { delete nastyGameFactory; nastyGameFactory = nullptr; } }

	vector<Obstacle*> makeObstacles();
	vector<Action*> makeActions();
	Player *makePlayer();
	string setGameTitle();
};
#endif
