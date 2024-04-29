#pragma once
#ifndef __CPLAYER_H__
#define __CPLAYER_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CCreature.h"
#include "Screen.h"

using namespace std;

class CPlayer : public CCreature
{
public:
	CPlayer();

	void SetStat(int stattype, int num) override;
	void SetName(char* name);
	void Printstat(int x, int y, bool IsSelected) override;
	void SetEquipment(int equipmenttype, int rarity) override;
	void DisplayRarity(int equipmentnum);

	void Heal();
	void LevelUP();

private:
	enum RarityState
	{
		NONE = 0,
		NORMAL,
		SPECIAL,
		RARE,
		EPIC,
		LEGENDARY,
		HIDDEN,
		LOCKED = 0,
		OPENED
	};
	enum Equipment
	{
		EQUIPMENT_WEAPON = 0,
		EQUIPMENT_HELMET,
		EQUIPMENT_CLOTHES,
		EQUIPMENT_PANTS,
		EQUIPMENT_SHOES,
		EQUIPMENT_EARRINGS,
		EQUIPMENT_PENDANTS,
		EQUIPMENT_RINGS,
		EQUIPMENT_MAX
	};
};

#endif