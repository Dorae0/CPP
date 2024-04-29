#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "object.h"

using namespace std;

int CObject::m_nNum = 0;

CObject::CObject()
{
	m_sConstName = "Name";
	m_sName = "Name";
	m_nLife = 100;
	m_nNum++;

	NameInit(m_nNum);

	cout << "CObject " << m_nNum << " created" << endl;
}

CObject::CObject(String sName, int nLife)
{
	m_sConstName = sName;
	m_sName = sName;
	m_nLife = nLife;
	m_nNum++;

	NameInit(m_nNum);

	cout << "CObject " << m_nNum << " created" << endl;
}

CObject::CObject(const CObject& c)
{
	m_nNum++;
	m_sName = c.m_sConstName;
	m_nLife = c.m_nLife;
	
	int NumDigit = GetDigit(m_nNum);

	while (NumDigit--)
	{
		int tempDigit = GetDigitNum(m_nNum, NumDigit + 1);
		NameInit(tempDigit);
	}

	cout << "CObject " << m_nNum << " created" << endl;
}

void CObject::operator = (const CObject& c)
{
	m_sName = c.m_sName;
	m_nLife = c.m_nLife;
}

CObject::~CObject()
{
	cout << "CObject " << m_nNum << " deleted" << endl;
	m_nNum--;
}

void CObject::Display()
{
	cout << "Name : " << m_sName.GetBuffer() << endl;
	cout << "Serial Number : " << m_nNum << endl;
	cout << "Life : " << m_nLife << endl;
}

int CObject::GetDigit(int n)
{
	int answer = 1;
	while (n /= 10)
		answer++;
	return answer;
}

int CObject::GetDigitNum(int n, int m)
{
	while (--m) n /= 10;
	return n % 10;
}

void CObject::NameInit(int n)
{
	m_sName + ctoi(n);
}

char CObject::ctoi(int n)
{
	return (char)(n + 48);
}