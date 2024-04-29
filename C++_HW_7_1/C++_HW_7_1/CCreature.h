#pragma once
#ifndef __CCREATURE_H__
#define __CCREATURE_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class CCreature
{
public:
	CCreature();
	~CCreature();

	virtual void SetName(char* name) = 0;
	virtual void Printstat(int x, int y, bool IsSelected) = 0;
	virtual void SetEquipment(int equipmenttype, int rarity) = 0;

	virtual void SetStat(int stattype, int num);
	int GetStat(int stattype);
	void UpdateEquipment();

	int Attack(CCreature* creature);
	int GetHP() { return m_nHP; };
	char* GetName() { return m_sName; };

protected:
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
	int m_nMaxHP;
	int m_nHP;
	int m_nMaxMP;
	int m_nMP;
	int m_nLevel;
	char* m_sName;
	int m_nPower;
	int m_nCriticalRate;
	int m_nCriticalPower;
	int m_nDefend;
	int m_nSpeed;
	int m_nequipment[EQUIPMENT_MAX];
};

#endif
