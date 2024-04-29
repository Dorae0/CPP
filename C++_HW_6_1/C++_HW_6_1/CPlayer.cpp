#include "CPlayer.h"

CPlayer::CPlayer()
{
	m_nMaxHP = 10;
	m_nHP = 10;
	m_nMaxMP = 10;
	m_nMP = 10;
	m_nLevel = 1;
	m_sName = (char*)"¿Ã∏ß";
	m_nPower = 1;
	m_nCriticalRate = 10;
	m_nCriticalPower = 200;
	m_nDefend = 0;
	m_nSpeed = 5;
	m_nEquip_Weapons = NONE;
	m_nEquip_Helmet = NONE;
	m_nEquip_Clothes = NONE;
	m_nEquip_Pants = NONE;
	m_nEquip_Shoes = NONE;
	m_nEquip_Earrings = NONE;
	m_nEquip_Pendants = NONE;
	m_nEquip_Rings = NONE;
}

void CPlayer::SetStat(int stattype, int num)
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

void CPlayer::SetName(char* name)
{
	strcpy(m_sName, name);
}

void CPlayer::Printstat(int x, int y, bool IsSelected)
{
	textcolor(YELLOW, BLACK);
	gotoxy(x, y);
	cout << m_sName;
	gotoxy(x + 12, y);
	cout << "Level : " << m_nLevel;
	gotoxy(x, y + 1);
	cout << "----------------------";
	gotoxy(x, y + 2);
	textcolor(RED, BLACK);
	cout << "HP : " << m_nHP << " / " << m_nMaxHP;
	gotoxy(x, y + 3);
	textcolor(LIGHTBLUE, BLACK);
	cout << "MP : " << m_nMP << " / " << m_nMaxMP;
	gotoxy(x, y + 4);
	textcolor(YELLOW, BLACK);
	cout << "Power : " << m_nPower;
	gotoxy(x, y + 5);
	cout << "Critical Rate : " << m_nCriticalRate << " % ";
	gotoxy(x, y + 6);
	cout << "Critical DMG : " << m_nCriticalPower << " % ";
	gotoxy(x, y + 7);
	cout << "Defense : " << m_nDefend;
	gotoxy(x, y + 8);
	cout << "Speed : " << m_nSpeed;
}

void CPlayer::SetEquipment(int equipmenttype, int rarity)
{
	switch (equipmenttype)
	{
	case WEAPONS:
		m_nEquip_Weapons = rarity;
		break;
	case HELMET:
		m_nEquip_Helmet = rarity;
		break;
	case CLOTHES:
		m_nEquip_Clothes = rarity;
		break;
	case PANTS:
		m_nEquip_Pants = rarity;
		break;
	case SHOES:
		m_nEquip_Shoes = rarity;
		break;
	case EARRINGS:
		m_nEquip_Earrings = rarity;
		break;
	case PENDANTS:
		m_nEquip_Pendants = rarity;
		break;
	case RINGS:
		m_nEquip_Rings = rarity;
		break;
	default:
		break;
	}
}

void CPlayer::Heal()
{
	m_nHP = m_nMaxHP;
}

void CPlayer::LevelUP()
{
	m_nMaxHP++;
	m_nHP = m_nMaxHP;
	m_nMaxMP++;
	m_nMP = m_nMaxMP;
	m_nLevel++;
	m_nPower++;
	m_nCriticalRate;
	m_nCriticalPower++;
	if (m_nLevel % 3 == 0)
	{
		m_nDefend++;
		m_nSpeed;
	}
}