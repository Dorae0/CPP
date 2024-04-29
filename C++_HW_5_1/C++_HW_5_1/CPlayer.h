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

	void SetEquipment(int equipmenttype, int rarity);
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
	enum EquipmentType
	{
		WEAPONS,
		HELMET,
		CLOTHES,
		PANTS,
		SHOES,
		EARRINGS,
		PENDANTS,
		RINGS
	};
	int m_nEquip_Weapons;
	int m_nEquip_Helmet;
	int m_nEquip_Clothes;
	int m_nEquip_Pants;
	int m_nEquip_Shoes;
	int m_nEquip_Earrings;
	int m_nEquip_Pendants;
	int m_nEquip_Rings;
};

#endif