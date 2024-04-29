#pragma once
#pragma once
#ifndef __CACCOUNTINFO_H__
#define __CACCOUNTINFO_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CPlayer.h"

extern CCreature* Player;

class CAccountinfo
{
public:
	CAccountinfo();
	~CAccountinfo() {};

	void GainItem(int equipment_type, int rarity);
	void ItemUpdate();

private:
	int m_nUserLevel;
	enum RarityState
	{
		NONE = 0,
		NORMAL,
		SPECIAL,
		RARE,
		EPIC,
		LEGENDARY,
		HIDDEN,
		RARITY_MAX,
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
	
	int m_nequipment_state[EQUIPMENT_MAX][RARITY_MAX];
};



#endif
