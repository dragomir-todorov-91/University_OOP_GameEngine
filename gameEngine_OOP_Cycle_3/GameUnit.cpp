#include "gameUnit.h"

gameUnit::gameUnit(int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY)
{
	position.x = ipositionX;
	position.y = ipositionY;
	attackSpeed = iattackSpeed;
	moveSpeed = imoveSpeed;
	condition = 100;

	timeToMove = 5 - moveSpeed;
	timeToAttack = 5 - attackSpeed;
}