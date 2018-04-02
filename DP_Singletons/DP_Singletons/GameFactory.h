/*
File: GameFactory.h
Purpose: Definition of abstract GameFactory and its concrete subclasses.
Author: Eva Frisell <evmo1600>
Date: 2018-03-11
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

// Concrete NiceGameFactory class
class NiceGameFactory : public GameFactory {

public:
	NiceGameFactory() : GameFactory() {}
	virtual ~NiceGameFactory() {}

	vector<Obstacle*> makeObstacles();
	vector<Action*> makeActions();
	Player *makePlayer();
	string setGameTitle();
};

// Concrete NastyGameFactory class
class NastyGameFactory : public GameFactory {

public:
	NastyGameFactory() : GameFactory() {}
	virtual ~NastyGameFactory() {}

	vector<Obstacle*> makeObstacles();
	vector<Action*> makeActions();
	Player *makePlayer();
	string setGameTitle();
};

#endif
