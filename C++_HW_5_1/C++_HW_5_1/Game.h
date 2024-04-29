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

void MobInit(int n);

#endif