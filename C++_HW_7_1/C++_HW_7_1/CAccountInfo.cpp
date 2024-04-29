#include "CAccountInfo.h"

CAccountinfo::CAccountinfo()
{
	m_nUserLevel = 1;
	for (int i = EQUIPMENT_WEAPON; i < EQUIPMENT_MAX; i++)
		for (int j = NONE; j < RARITY_MAX; j++)
			m_nequipment_state[i][j] = LOCKED;
}

void CAccountinfo::GainItem(int equipment_type, int rarity)
{
	m_nequipment_state[equipment_type][rarity] = OPENED;
}

void CAccountinfo::ItemUpdate()
{
	for (int i = EQUIPMENT_WEAPON; i < EQUIPMENT_MAX; i++)
		for (int j = NONE; j < RARITY_MAX; j++)
			if (m_nequipment_state[i][j] = OPENED)
				;
}
