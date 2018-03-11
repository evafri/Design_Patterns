/*
File: GameFactory.h
Purpose: Definition of GameFactory
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


// GameFactory �r en abstrakt klass som definierar ett interface f�r
// deriverade konkreta klasser

class GameFactory {
protected:
  GameFactory() { }

public:
	virtual ~GameFactory() = default;
   // L�mpliga operationer: se klassen Game.

	virtual void makeObstacles() = 0;
	virtual void makeActions() = 0;
	virtual void setGameTitle() = 0;
};

class NiceGameFactory : public GameFactory {

public:
	NiceGameFactory() : GameFactory() {}
	virtual ~NiceGameFactory() {}

	void makeObstacles();
	void makeActions();
	void setGameTitle();

};
/* NiceGameFactory:

    L�mpliga operationer.
    (Implementationer i GameFactory.cpp)

    I ett 'Nice Game' ing�r f�ljande hinder:
    Wizard, Wall, Elephant, DPexam

    M�jliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, BargainAndBuyAction,
    ChainsawAction, ClimbAction, CastAspellAction, SurrenderAction

    Player:
    OrdinaryPlayer
*/

class NastyGameFactory : public GameFactory {

public:
	NastyGameFactory() : GameFactory() {}
	virtual ~NastyGameFactory() {}

	void makeObstacles();
	void makeActions();
	void setGameTitle();

};

/* NastyGameFactory:

    L�mpliga operationer
    (Implementationer i GameFactory.cpp)

    I ett 'Nasty Game' ing�r f�ljande hinder:
    Dragon, Bomb, Samuray, SumoWrestler, Gangster

    M�jliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, SwordAction, RifleAction,
    OfferFoodAction, ChainsawAction, CastAspellAction, BargainAndBuyAction, SurrenderAction

    Player:
    HeroPlayer
*/


#endif
