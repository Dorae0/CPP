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
CCreature* Player = new CPlayer;
CAccountinfo PlayerInfo;

int main()
{
	Game();

	return 0;
}