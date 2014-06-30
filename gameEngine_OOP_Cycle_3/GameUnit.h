#ifndef GAMEUNIT_H
#define GAMEUNIT_H

struct GUPoint
{
	int x;
	int y;
};

class gameUnit
{
private:
	GUPoint position, target;
	int condition;
	int moveSpeed;
	int attackSpeed;

	int timeToMove;
	int timeToAttack;

public:
	gameUnit(int imoveSpeed, int iattackSpeed, int ipositionX, int ipositionY);

};

#endif