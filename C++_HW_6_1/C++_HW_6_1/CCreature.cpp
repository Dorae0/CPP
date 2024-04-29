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
}

CCreature::~CCreature()
{
	delete m_sName;
}

void CCreature::Attack(CCreature* creature)
{
	srand((unsigned)time(NULL));
	int dmg = m_nPower;
	int randnum = rand() % 100;
	if (randnum < m_nCriticalRate)
		dmg = dmg * m_nCriticalPower / 100;
	creature->m_nHP -= (dmg - creature->m_nDefend);
}