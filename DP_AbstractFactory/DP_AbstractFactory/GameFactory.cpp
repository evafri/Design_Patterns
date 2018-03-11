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

void NiceGameFactory::makeObstacles()
{
}

void NiceGameFactory::makeActions()
{
}

string NiceGameFactory::setGameTitle()
{
	return "Aprilias Nice GameFactory";
}

void NastyGameFactory::makeObstacles()
{
}

void NastyGameFactory::makeActions()
{
}

string NastyGameFactory::setGameTitle()
{
	return "Aprilias Nasty GameFactory";
}
