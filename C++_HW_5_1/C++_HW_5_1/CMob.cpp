#include "CMob.h"

void CMob::SetStat(int stattype, int num)
{
	switch (stattype)
	{
	case MAXHP:
		m_nMaxHP = num;
		break;
	case HP:
		m_nHP = num;
		break;
	case MAXMP:
		m_nMaxMP = num;
		break;
	case MP:
		m_nMP = num;
		break;
	case LEVEL:
		m_nLevel = num;
		break;
	case POWER:
		m_nPower = num;
		break;
	case CRATE:
		m_nCriticalRate = min(num, 100);
		m_nCriticalRate = max(0, num);
		break;
	case CPOWER:
		m_nCriticalPower = min(num, 100);
		break;
	case DEFEND:
		m_nDefend = num;
		break;
	case SPEED:
		m_nSpeed = num;
		break;
	default:
		break;
	}
}

void CMob::SetName(char* name)
{
	delete m_sName;
	m_sName = new char[strlen(name)];
	strcpy(m_sName, name);
}

void CMob::Printstat(int x, int y, bool IsSelected)
{
	if (IsSelected)
		textcolor(BLACK, WHITE);
	else
		textcolor(WHITE, BLACK);
	gotoxy(x, y);
	cout << m_sName;
	textcolor(WHITE, BLACK);
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
	textcolor(WHITE, BLACK);
	cout << "Power : " << m_nPower;
	gotoxy(x, y + 6);
	cout << "Critical Rate : " << m_nCriticalRate << " % ";
	gotoxy(x, y + 7);
	cout << "Critical DMG : " << m_nCriticalPower << " % ";
	gotoxy(x, y + 8);
	cout << "Defense : " << m_nDefend;
	gotoxy(x, y + 9);
	cout << "Speed : " << m_nSpeed;
	textcolor(WHITE, BLACK);
}