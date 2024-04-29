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

	virtual void SetStat(int stattype, int num) = 0;
	virtual void SetName(char* name) = 0;
	virtual void Printstat(int x, int y, bool IsSelected) = 0;
	void Attack(CCreature* creature);
	int GetHP() { return m_nHP; };

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
};

#endif
