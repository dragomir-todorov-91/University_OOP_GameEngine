#include "gameUnit.h"

#ifndef KNIGHT_H
#define KNIGHT_H

class knight :	public gameUnit
{
private:
	int sword;
	int armor;

public:
	knight(int isword, int iarmor, int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY);
};

#endif