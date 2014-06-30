#include "gameUnit.h"

#ifndef MONSTER_H
#define MONSTER_H

class monster :	public gameUnit
{
private:
	int nails;
	int teeth;

public:
	monster(int inails, int iteeth, int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY);
};

#endif