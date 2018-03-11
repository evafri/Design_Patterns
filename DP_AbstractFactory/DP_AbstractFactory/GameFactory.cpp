/*
File: GameFactory.cpp
Purpose: Implementation of concrete GameFactory classes
Author: Eva Frisell <evmo1600>
Date: 2018-03-11
Version: 1.1
*/

#include "GameFactory.h"
#include "Obstacle.h"
#include "Action.h"

vector<Obstacle*> NiceGameFactory::makeObstacles()
{
	vector<Obstacle*> obstacles;
	obstacles.emplace_back(new Wall());
	obstacles.emplace_back(new Wizard());
	obstacles.emplace_back(new Elephant());
	obstacles.emplace_back(new DPexam());

	return obstacles;
}

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

Player* NiceGameFactory::makePlayer()
{
	Player *player = new OrdinaryPlayer();
	return player;
}

string NiceGameFactory::setGameTitle()
{
	return "Aprilias Nice Game";
}

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

Player* NastyGameFactory::makePlayer()
{
	Player *player = new HeroPlayer();
	return player;
}

string NastyGameFactory::setGameTitle()
{
	return "Aprilias Nasty Game";
}
