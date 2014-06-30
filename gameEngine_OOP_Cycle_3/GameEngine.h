#include "gameUnit.h"
#include "knight.h"
#include "monster.h"

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

class gameEngine
{
private:
	gameUnit *units[50];
	int cntUnits;
	int stepNum;

public:
	gameEngine();
	int add(int ability1, int ability2, int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY);
	void gameStep();
};

#endif