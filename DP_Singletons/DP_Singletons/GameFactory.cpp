/*
File: GameFactory.cpp
Purpose: Implementation of the two concrete GameFactory classes
Author: Eva Frisell <evmo1600>
Date: 2018-04-02
Version: 1.1
*/

#include "GameFactory.h"
#include "Obstacle.h"
#include "Action.h"

// Initialize the static pointer instances
NiceGameFactory * NiceGameFactory::niceGameFactory = nullptr;
NastyGameFactory * NastyGameFactory::nastyGameFactory = nullptr;

// Function that fills vector with obstacle-objects.
vector<Obstacle*> NiceGameFactory::makeObstacles()
{
	vector<Obstacle*> obstacles;
	obstacles.emplace_back(new Wall());
	obstacles.emplace_back(new Wizard());
	obstacles.emplace_back(new Elephant());
	obstacles.emplace_back(new DPexam());

	return obstacles;
}

// Function that fills vector with action-objects.
vector<Action*> NiceGameFactory::makeActions()
{
	vector<Action*> actions;
	actions.emplace_back(new BowAndShakeHandsAction());
	actions.emplace_back(new RunAndHideAction());
	actions.emplace_back(new BargainAndBuyAction());
	actions.emplace_back(new ChainsawAction());
	actions.emplace_back(new ClimbAction());
	actions.emplace_back(new CastAspellAction());
	actions.emplace_back(new SurrenderAction());
	
	return actions;
}

// Function that creates a player-object.
Player* NiceGameFactory::makePlayer()
{
	Player *player = new OrdinaryPlayer();
	return player;
}

// Function that sets a title for the nice game.
string NiceGameFactory::setGameTitle()
{
	return "Aprilias Nice Game";
}

// Function that fills vector with obstacle-objects.
vector<Obstacle*> NastyGameFactory::makeObstacles()
{
	vector<Obstacle*> obstacles;
	obstacles.emplace_back(new Dragon());
	obstacles.emplace_back(new Bomb());
	obstacles.emplace_back(new Samuray());
	obstacles.emplace_back(new SumoWrestler());
	obstacles.emplace_back(new Gangster());

	return obstacles;
}

// Function that fills vector with action-objects.
vector<Action*> NastyGameFactory::makeActions()
{
	vector<Action*> actions;
	actions.emplace_back(new BowAndShakeHandsAction());
	actions.emplace_back(new RunAndHideAction());
	actions.emplace_back(new SwordAction());
	actions.emplace_back(new RifleAction());
	actions.emplace_back(new OfferFoodAction());
	actions.emplace_back(new ChainsawAction());
	actions.emplace_back(new CastAspellAction());
	actions.emplace_back(new BargainAndBuyAction());
	actions.emplace_back(new SurrenderAction());
		  
	return actions;
}

// Function that creates a player-object.
Player* NastyGameFactory::makePlayer()
{
	Player *player = new HeroPlayer();
	return player;
}

// Function that sets a title for the nasty game.
string NastyGameFactory::setGameTitle()
{
	return "Aprilias Nasty Game";
}
