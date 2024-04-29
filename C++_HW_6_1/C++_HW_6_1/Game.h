#pragma once
#ifndef __GAME_H__
#define __GAME_H__

#include "CCreature.h"
#include "CMob.h"
#include "CMiddleboss.h"
#include "CBoss.h"
#include "CPlayer.h"
#include "Map.h"
#include "Screen.h"

#include <iostream>

using namespace std;

extern CCreature* Creatures[1000];
extern CCreature* Player;
extern int Gametype;
extern int Gameround;
extern int Gamemap;

void MobInit(int n);
void StatInit(int n);
bool GameDisplay(int mapnum, int enemynum, int mobnum1, int mobnum2, int mobnum3 = 0, int mobnum4 = 0, int mobnum5 = 0);
int mob2Game(int mobnum1, int mobnum2);
int mob3Game(int mobnum1, int mobnum2, int mobnum3);
int mob4Game(int mobnum1, int mobnum2, int mobnum3, int mobnum4);
int mob5Game(int mobnum1, int mobnum2, int mobnum3, int mobnum4, int mobnum5);

void Game();

enum StatType
{
	ENUM_MAXHP,
	ENUM_HP,
	ENUM_MAXMP,
	ENUM_MP,
	ENUM_LEVEL,
	ENUM_POWER,
	ENUM_CRATE,
	ENUM_CPOWER,
	ENUM_DEFEND,
	ENUM_SPEED,
	ENUM_MAX
};

#endif