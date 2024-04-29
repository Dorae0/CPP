#include "CPlayer.h"

CPlayer::CPlayer()
{
	m_nMaxHP = 100;
	m_nHP = 100;
	m_nMaxMP = 10;
	m_nMP = 10;
	m_nLevel = 1;
	m_sName = (char*)"이름";
	m_nPower = 3;
	m_nCriticalRate = 20;
	m_nCriticalPower = 200;
	m_nDefend = 0;
	m_nSpeed = 5;
	for (int i = EQUIPMENT_WEAPON; i < EQUIPMENT_MAX; i++)
		m_nequipment[i] = NONE;
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
	gotoxy(x, y + 1);
	cout << "Level : " << m_nLevel;
	gotoxy(x, y + 2);
	cout << "----------------------";
	gotoxy(x, y + 3);
	textcolor(RED, BLACK);
	cout << "HP : " << m_nHP << " / " << m_nMaxHP;
	gotoxy(x, y + 4);
	textcolor(LIGHTBLUE, BLACK);
	cout << "MP : " << m_nMP << " / " << m_nMaxMP;
	gotoxy(x, y + 5);
	textcolor(YELLOW, BLACK);
	cout << "Power : " << m_nPower;
	gotoxy(x, y + 6);
	cout << "Critical Rate : " << m_nCriticalRate << " % ";
	gotoxy(x, y + 7);
	cout << "Critical DMG : " << m_nCriticalPower << " % ";
	gotoxy(x, y + 8);
	cout << "Defense : " << m_nDefend;
	gotoxy(x, y + 9);
	cout << "Speed : " << m_nSpeed;
	gotoxy(x, y + 10);
	cout << "무기[";
	DisplayRarity(EQUIPMENT_WEAPON);
	cout << "]";
	gotoxy(x, y + 11);
	cout << "투구[";
	DisplayRarity(EQUIPMENT_HELMET);
	cout << "]";
	gotoxy(x, y + 12);
	cout << "상의[";
	DisplayRarity(EQUIPMENT_CLOTHES);
	cout << "]";
	gotoxy(x, y + 13);
	cout << "하의[";
	DisplayRarity(EQUIPMENT_PANTS);
	cout << "]";
	gotoxy(x, y + 14);
	cout << "신발[";
	DisplayRarity(EQUIPMENT_SHOES);
	cout << "]";
	gotoxy(x, y + 15);
	cout << "귀걸이[";
	DisplayRarity(EQUIPMENT_EARRINGS);
	cout << "]";
	gotoxy(x, y + 16);
	cout << "펜던트[";
	DisplayRarity(EQUIPMENT_PENDANTS);
	cout << "]";
	gotoxy(x, y + 17);
	cout << "반지[";
	DisplayRarity(EQUIPMENT_RINGS);
	cout << "]";
	textcolor(WHITE, BLACK);
}

void CPlayer::DisplayRarity(int equipmentnum)
{
	switch (m_nequipment[equipmentnum])
	{
	case NONE:
		textcolor(DARKGRAY, BLACK);
		cout << "NONE";
		break;
	case NORMAL:
		textcolor(WHITE, BLACK);
		cout << "NORMAL";
		break;
	case SPECIAL:
		textcolor(LIGHTGREEN, BLACK);
		cout << "SPECIAL";
		break;
	case RARE:
		textcolor(LIGHTBLUE, BLACK);
		cout << "RARE";
		break;
	case EPIC:
		textcolor(BROWN, BLACK);
		cout << "EPIC";
		break;
	case LEGENDARY:
		textcolor(RED, BLACK);
		cout << "LEGENDARY";
		break;
	case HIDDEN:
		textcolor(MAGENTA, BLACK);
		cout << "HIDDEN";
		break;
	}
	textcolor(YELLOW, BLACK);
}

void CPlayer::SetEquipment(int equipmenttype, int rarity)
{
	if(m_nequipment[equipmenttype] < rarity)
		m_nequipment[equipmenttype] = rarity;
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