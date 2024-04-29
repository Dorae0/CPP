#define DEFAULTUID 100000000
#define DEFAULTNPCID 1000000000
#include "character.h"

int CCharacter::m_nCharCount = 0;
int CCharacter::m_nTCharCount = 0;
int CNPC::m_nNPCCount = 0;
int CNPC::m_nTNPCCount = 0;

inline void printBar()
{
	cout << "------------------------" << endl;
}

CCharacter::CCharacter(int nMaxHP, int nHP, int nMaxMP, int nMP, int nSpeed, int nPower, int nLevel, string sName)
{
	m_nMaxHP = max(nMaxHP, nHP);
	m_nHP = nHP;
	m_nMaxMP = max(nMaxMP, nMP);
	m_nMP = nMP;
	m_nSpeed = nSpeed;
	m_nPower = nPower;
	m_nLevel = nLevel;
	m_sName = sName;

	m_nCharCount++; m_nTCharCount++;
	m_nUID = m_nTCharCount + DEFAULTUID;
	cout << m_sName << " CCharacter Created UID : "<< m_nUID << endl;
}

CCharacter::~CCharacter()
{ 
	m_nCharCount--;
	cout << m_sName << " CCharacter Deleted UID : " << m_nUID << endl;
}

void CCharacter::PrintStat()
{
	printBar();
	cout << "Character Name : " << m_sName << endl;
	cout << "Character UID : " << m_nUID << endl;
	cout << "Character Level : " << m_nLevel << endl;
	cout << "Character Speed : " << m_nSpeed << endl;
	cout << "Character Power : " << m_nPower << endl;
	cout << "Character Max HP : " << m_nMaxHP << endl;
	cout << "Character Current HP : " << m_nHP << endl;
	cout << "Character Max MP : " << m_nMaxMP << endl;
	cout << "Character Current MP : " << m_nMP << endl;
	printBar();
}

void CCharacter::GetStat(STATREF& stt)
{
	stt.nMaxHP = m_nMaxHP;
	stt.nHP = m_nHP;
	stt.nMaxMP = m_nMaxMP;
	stt.nMP = m_nMP;
	stt.nSpeed = m_nSpeed;
	stt.nPower = m_nPower;
	stt.nLevel = m_nLevel;
	stt.sName = m_sName;
}

void CCharacter::GetUID(int& nUID)
{
	nUID = m_nUID;
}

void CCharacter::LevelUP(int n)
{
	m_nLevel += n;
	m_nHP = m_nMaxHP;
	m_nMP = m_nMaxMP;
}

void CCharacter::HPUP(int n)
{
	m_nMaxHP += n;
	m_nHP = m_nMaxHP;
}

void CCharacter::MPUP(int n)
{
	m_nMaxMP += n;
	m_nMP = m_nMaxHP;
}

CNPC::CNPC(int nMaxHP, int nHP, int nMaxMP, int nMP, int nSpeed, int nPower, int nLevel, string sName)
{
	m_nMaxHP = max(nMaxHP, nHP);
	m_nHP = nHP;
	m_nMaxMP = max(nMaxMP, nMP);
	m_nMP = nMP;
	m_nSpeed = nSpeed;
	m_nPower = nPower;
	m_nLevel = nLevel;
	m_sName = sName;

	m_nNPCCount++; m_nTNPCCount++;
	m_nNPCID = m_nTNPCCount + DEFAULTNPCID;
	cout << m_sName << " CNPC Created NPC ID : " << m_nNPCID << endl;
}

CNPC::~CNPC()
{
	m_nNPCCount--;
	cout << m_sName << " CNPC Deleted NPC ID : " << m_nNPCID << endl;
}

void CNPC::PrintStat()
{
	printBar();
	cout << "NPC Name : " << m_sName << endl;
	cout << "NPC UID : " << m_nNPCID << endl;
	cout << "NPC Level : " << m_nLevel << endl;
	cout << "NPC Speed : " << m_nSpeed << endl;
	cout << "NPC Power : " << m_nPower << endl;
	cout << "NPC Max HP : " << m_nMaxHP << endl;
	cout << "NPC Current HP : " << m_nHP << endl;
	cout << "NPC Max MP : " << m_nMaxMP << endl;
	cout << "NPC Current MP : " << m_nMP << endl;
	printBar();
}

void CNPC::GetStat(STATREF& stt)
{
	stt.nMaxHP = m_nMaxHP;
	stt.nHP = m_nHP;
	stt.nMaxMP = m_nMaxMP;
	stt.nMP = m_nMP;
	stt.nSpeed = m_nSpeed;
	stt.nPower = m_nPower;
	stt.nLevel = m_nLevel;
	stt.sName = m_sName;
}

void CNPC::GetNPCID(int& nNPCID)
{
	nNPCID = m_nNPCID;
}

void CNPC::SetStat(int nMaxHP, int nHP, int nMaxMP, int nMP, int nSpeed, int nPower, int nLevel, string sName)
{
	m_nMaxHP = nMaxHP;
	m_nHP = nHP;
	m_nMaxMP = nMaxMP;
	m_nMP = nMP;
	m_nSpeed = nSpeed;
	m_nPower = nPower;
	m_nLevel = nLevel;
	m_sName = sName;
}