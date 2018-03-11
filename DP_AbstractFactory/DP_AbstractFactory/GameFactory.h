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


// GameFactory är en abstrakt klass som definierar ett interface för
// deriverade konkreta klasser

class GameFactory {
protected:
  GameFactory() { }

public:
	virtual ~GameFactory() = default;
   // Lämpliga operationer: se klassen Game.

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

    Lämpliga operationer.
    (Implementationer i GameFactory.cpp)

    I ett 'Nice Game' ingår följande hinder:
    Wizard, Wall, Elephant, DPexam

    Möjliga Actions:
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

    Lämpliga operationer
    (Implementationer i GameFactory.cpp)

    I ett 'Nasty Game' ingår följande hinder:
    Dragon, Bomb, Samuray, SumoWrestler, Gangster

    Möjliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, SwordAction, RifleAction,
    OfferFoodAction, ChainsawAction, CastAspellAction, BargainAndBuyAction, SurrenderAction

    Player:
    HeroPlayer
*/


#endif
