/*
File: GameFactory.cpp
Purpose: Implementation of class GameFactory
Author: Eva Frisell <evmo1600>
Date: 2018-03-11
Version: 1.1
*/

#include "GameFactory.h"
#include "Obstacle.h"
#include "Action.h"

/* Implementationer av konkreta factoryklasser */

vector<Obstacle*> NiceGameFactory::makeObstacles()
{
	vector<Obstacle*> obstacles;
	obstacles.emplace_back(new Wall());
	obstacles.emplace_back(new Wizard());
	obstacles.emplace_back(new Elephant());
	obstacles.emplace_back(new DPexam());

	return obstacles;
}

void NiceGameFactory::makeActions()
{
}

string NiceGameFactory::setGameTitle()
{
	return "Aprilias Nice GameFactory";
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

void NastyGameFactory::makeActions()
{
}

string NastyGameFactory::setGameTitle()
{
	return "Aprilias Nasty GameFactory";
}
