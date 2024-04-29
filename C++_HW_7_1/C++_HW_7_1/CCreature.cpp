#include "CCreature.h"

CCreature::CCreature()
{
	m_nMaxHP = 10;
	m_nHP = 10;
	m_nMaxMP = 10;
	m_nMP = 10;
	m_nLevel = 1;
	m_sName = new char[255];
	strcpy(m_sName, "¿Ã∏ß");
	m_nPower = 1;
	m_nCriticalRate = 10;
	m_nCriticalPower = 120;
	m_nDefend = 0;
	m_nSpeed = 5;
	for (int i = EQUIPMENT_WEAPON; i < EQUIPMENT_MAX; i++)
		m_nequipment[i] = NONE;
}

CCreature::~CCreature()
{
	delete m_sName;
}

void CCreature::SetStat(int stattype, int num)
{
	switch (stattype)
	{
	case ENUM_MAXHP:
		m_nMaxHP = num;
		break;
	case ENUM_HP:
		m_nHP = num;
		break;
	case ENUM_MAXMP:
		m_nMaxMP = num;
		break;
	case ENUM_MP:
		m_nMP = num;
		break;
	case ENUM_LEVEL:
		m_nLevel = num;
		break;
	case ENUM_POWER:
		m_nPower = num;
		break;
	case ENUM_CRATE:
		m_nCriticalRate = min(num, 100);
		m_nCriticalRate = max(0, num);
		break;
	case ENUM_CPOWER:
		m_nCriticalPower = min(num, 100);
		break;
	case ENUM_DEFEND:
		m_nDefend = num;
		break;
	case ENUM_SPEED:
		m_nSpeed = num;
		break;
	default:
		break;
	}
}

int CCreature::GetStat(int stattype)
{
	switch (stattype)
	{
	case ENUM_MAXHP:
		return m_nMaxHP;
		break;
	case ENUM_HP:
		return m_nHP;
		break;
	case ENUM_MAXMP:
		return m_nMaxMP;
		break;
	case ENUM_MP:
		return m_nMP;
		break;
	case ENUM_LEVEL:
		return m_nLevel;
		break;
	case ENUM_POWER:
		return m_nPower;
		break;
	case ENUM_CRATE:
		return m_nCriticalRate;
		break;
	case ENUM_CPOWER:
		return m_nCriticalPower;
		break;
	case ENUM_DEFEND:
		return m_nDefend;
		break;
	case ENUM_SPEED:
		return m_nSpeed;
		break;
	default:
		break;
	}
}

int CCreature::Attack(CCreature* creature)
{
	srand((unsigned)time(NULL));
	int dmg = m_nPower;
	int def = creature->m_nDefend;
	int randnum = rand() % 100;
	if (randnum < m_nCriticalRate)
		dmg = dmg * m_nCriticalPower / 100;
	creature->m_nHP -= (dmg - def);
	return dmg - def;
}

void CCreature::UpdateEquipment()
{
	m_nCriticalRate = 20;
	m_nCriticalPower = 200;
	m_nSpeed = 5;
	m_nMaxHP = 100;
	m_nPower = 3;
	m_nDefend = 0;
	for (int equipmenttype = EQUIPMENT_WEAPON; equipmenttype < EQUIPMENT_MAX; equipmenttype++)
	{
		switch (equipmenttype)
		{
		case EQUIPMENT_WEAPON:
			m_nPower += m_nequipment[equipmenttype] * 5;
			m_nCriticalRate += m_nequipment[equipmenttype] * 10;
			m_nCriticalPower += m_nequipment[equipmenttype] * 50;
			break;
		case EQUIPMENT_SHOES:
			m_nSpeed += m_nequipment[equipmenttype] * 1;
		case EQUIPMENT_HELMET:
		case EQUIPMENT_CLOTHES:
		case EQUIPMENT_PANTS:
			m_nMaxHP += m_nequipment[equipmenttype] * 20;
			m_nDefend += m_nequipment[equipmenttype] * 2;
			break;
		case EQUIPMENT_EARRINGS:
		case EQUIPMENT_PENDANTS:
		case EQUIPMENT_RINGS:
			m_nPower += m_nequipment[equipmenttype];
			m_nCriticalRate += m_nequipment[equipmenttype] * 2;
			m_nCriticalPower += m_nequipment[equipmenttype] * 10;
			m_nMaxHP += m_nequipment[equipmenttype] * 5;
			break;
		}
	}
	m_nHP = m_nMaxHP;
}