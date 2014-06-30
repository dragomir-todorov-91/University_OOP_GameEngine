#include <stdio.h>
#include <stdlib.h>
#include "gameEngine.h"

extern gameEngine *pGameEngine;
extern gameUnit *xxx;
extern char asdsa[];

int main()
{
	int ch=0,ch2=0;
	gameEngine game;
	int ability1, ability2, imoveSpeed, iattackSpeed, ipositionX, ipositionY;

	while(1)
	{
		system("CLS");
	printf("%s",asdsa);
		printf("Welcome to gameEngine 1.\n");
		printf("Choose a desired operation:\n");
		printf("1)Add a unit to the battlefield\n");
		printf("2)Make a step in the game\n");
		printf("3)Printout the status of all units\n");
		printf("4)Exit the game\n");
		printf("Choose with the corresponding number:");
		scanf_s("%d",&ch);
		switch(ch)
		{
		case 1:
			{
				printf("\n\nWhat unit do you want:\n1)Knight\n2)Monster\n3)Cancel\nChoise:");
				scanf_s("%d",&ch2);
				if(ch2 == 3)
					break;
				if(ch2 == 1)
				{
					printf("\nPlease enter the Knight parameters\n");
					printf("Position on X coordinate:");
					scanf_s("%d",&ipositionX);
					printf("Position on Y coordinate:");
					scanf_s("%d",&ipositionY);
					printf("Attack Speed (1 - 5):");
					scanf_s("%d",&iattackSpeed);
					printf("Move Speed (1 - 5):");
					scanf_s("%d",&imoveSpeed);
					printf("Sword (1 - 10):");
					scanf_s("%d",&ability1);
					printf("Armor (1 - 10):");
					scanf_s("%d",&ability2);
				}

				if(ch2 == 1)
				{
					printf("\nPlease enter the Monster parameters\n");
					printf("Position on X coordinate:");
					scanf_s("%d",&ipositionX);
					printf("Position on Y coordinate:");
					scanf_s("%d",&ipositionY);
					printf("Attack Speed (1 - 5):");
					scanf_s("%d",&iattackSpeed);
					printf("Move Speed (1 - 5):");
					scanf_s("%d",&imoveSpeed);
					printf("Nails (1 - 10):");
					scanf_s("%d",&ability1);
					printf("Teeth (1 - 10):");
					scanf_s("%d",&ability2);
				}
				system("pause");
				break;
			}
		case 2:
			{
				system("pause");
				break;
			}
		case 3:
			{
				system("pause");
				break;
			}
		case 4:
			{
				return 0;
			}
		}
	}

	system("pause");
	return 0;
}