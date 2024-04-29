#ifndef CCHARACTER_H
#define CCHARACTER_H

#include <iostream>
#include <string>
using namespace std;

inline void printBar();

struct STATREF
{
	int nMaxHP;
	int nHP;
	int nMaxMP;
	int nMP;
	int nSpeed;
	int nPower;
	int nLevel;
	string sName;
};

class CCharacter
{
public:
	CCharacter(int nMaxHP = 10, int nHP = 10, int nMaxMP = 10, int nMP = 10, int nSpeed = 1, int nPower = 1, int nLevel = 1, string sName = "Name");
	~CCharacter();

	void PrintStat();
	void GetStat(STATREF& stt);
	void GetUID(int& nUID);
	void LevelUP(int n = 1);
	void SpeedUP(int n = 1) { m_nSpeed += n; }
	void PowerUP(int n = 1) { m_nPower += n; }
	void HPUP(int n = 1);
	void MPUP(int n = 1);
	void changeName(string newName) { m_sName = newName; }

private:
	string m_sName;
	int m_nMaxHP;
	int m_nHP;
	int m_nMaxMP;
	int m_nMP;
	int m_nSpeed;
	int m_nPower;
	int m_nLevel;
	static int m_nCharCount;
	static int m_nTCharCount;
	int m_nUID;
};

class CNPC
{
public:
	CNPC(int nMaxHP = 10, int nHP = 10, int nMaxMP = 10, int nMP = 10, int nSpeed = 1, int nPower = 1, int nLevel = 1, string sName = "Name");
	~CNPC();

	void PrintStat();
	void GetStat(STATREF& stt);
	void GetNPCID(int& nNPCID);
	void SetStat(int nMaxHP = 10, int nHP = 10, int nMaxMP = 10, int nMP = 10, int nSpeed = 1, int nPower = 1, int nLevel = 1, string sName = "Name");

private:
	string m_sName;
	int m_nMaxHP;
	int m_nHP;
	int m_nMaxMP;
	int m_nMP;
	int m_nSpeed;
	int m_nPower;
	int m_nLevel;
	static int m_nNPCCount;
	static int m_nTNPCCount;
	int m_nNPCID;
};

#endif