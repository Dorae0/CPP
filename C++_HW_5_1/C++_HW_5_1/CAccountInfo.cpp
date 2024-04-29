#include "CAccountInfo.h"

CAccountinfo::CAccountinfo()
{
	m_nUserLevel = 1;
	for (int i = 0; i < 6; i++)
	{
		m_nWeapon_state[i] = LOCKED;
		m_nHelmet_State[i] = LOCKED;
		m_nClothes_State[i] = LOCKED;
		m_nPants_State[i] = LOCKED;
		m_nShoes_State[i] = LOCKED;
		m_nEarrings_State[i] = LOCKED;
		m_nPendatns_State[i] = LOCKED;
		m_nRings_State[i] = LOCKED;
	}
}