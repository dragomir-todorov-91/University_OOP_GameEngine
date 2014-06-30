#include "knight.h"
#include "gameEngine.h"

extern gameEngine *pGameEngine;

knight::knight(int isword, int iarmor, int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY)
	:gameUnit(imoveSpeed,iattackSpeed,ipositionX,ipositionY)
{
	sword = isword;
	armor = iarmor;
}
