#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "CCreature.h"
#include "CPlayer.h"
#include "CMob.h"
#include "CMiddleBoss.h"
#include "CBoss.h"
#include "CAccountInfo.h"
#include "Screen.h"
#include "Map.h"
#include "Game.h"

using namespace std;

int Gametype = 0;
int Gameround = 1;
int Gamemap = 1;
CCreature* Creatures[1000];

int main()
{
	CCreature* Creature[3];
	Creature[0] = new CMob;
	Creature[1] = new CMiddleBoss;
	Creature[2] = new CBoss;
	CCreature* Player1 = new CPlayer;

	mainscreen();
	if (Gametype == 1)
	{
		fullscreen();
		system("cls");
		MobInit(1);
		Creatures[5]->Printstat(100, 20, true);
	}

	return 0;
}