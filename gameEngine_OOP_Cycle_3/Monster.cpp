#include "monster.h"
#include "gameEngine.h"

extern gameEngine *pGameEngine;

monster::monster(int inails, int iteeth, int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY)
	:gameUnit(imoveSpeed,iattackSpeed,ipositionX,ipositionY)
{
	nails = inails;
	teeth = iteeth;
}