#pragma once
#pragma once
#ifndef __CACCOUNTINFO_H__
#define __CACCOUNTINFO_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class CAccountinfo
{
public:
	CAccountinfo();
	~CAccountinfo() {};
private:
	int m_nUserLevel;
	enum RarityState
	{
		NORMAL = 0,
		SPECIAL,
		RARE,
		EPIC,
		LEGENDARY,
		HIDDEN,
		LOCKED = 0,
		OPENED
	};
	int m_nWeapon_state[6];
	int m_nHelmet_State[6];
	int m_nClothes_State[6];
	int m_nPants_State[6];
	int m_nShoes_State[6];
	int m_nEarrings_State[6];
	int m_nPendatns_State[6];
	int m_nRings_State[6];
};

#endif
