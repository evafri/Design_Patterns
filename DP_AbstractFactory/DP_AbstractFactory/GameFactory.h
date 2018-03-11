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
