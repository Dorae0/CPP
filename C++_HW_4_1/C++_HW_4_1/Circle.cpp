#include "Circle.h"

int CCircle::m_nSerialNum = 0;
char* CCircle::m_sStaticName = (char*)"Name";

CCircle::CCircle()
{
	m_fPoint_X = 0.0f;
	m_fPoint_Y = 0.0f;
	m_fRadius = 1.0f;
	m_sName = m_sStaticName;
	m_nSerialNum++;
	
	int NumDigit = GetDigit(m_nSerialNum);

	while (NumDigit--)
	{
		int tempDigit = GetDigitNum(m_nSerialNum, NumDigit + 1);
		NameInit(tempDigit);
	}

	cout << "CCircle " << m_sName.GetBuffer() << " Created" << endl;
}

CCircle::CCircle(float x, float y, float r, char* c)
{
	m_fPoint_X = x;
	m_fPoint_Y = y;
	m_fRadius = r;
	m_sName = c;

	if (c != m_sStaticName)
	{
		StaticNameMap[m_sStaticName] = m_nSerialNum;
		m_sStaticName = c;
		if (StaticNameMap.find(c) != StaticNameMap.end())
			m_nSerialNum = StaticNameMap[m_sStaticName];
		else
			m_nSerialNum = 0;
	}
	m_nSerialNum++;
	
	int NumDigit = GetDigit(m_nSerialNum);

	while (NumDigit--)
	{
		int tempDigit = GetDigitNum(m_nSerialNum, NumDigit + 1);
		NameInit(tempDigit);
	}

	cout << "CCircle " << m_sName.GetBuffer() << " Created" << endl;
}

CCircle::~CCircle()
{
	m_nSerialNum--;
	cout << "CCircle " << m_sName.GetBuffer() << " Deleted" << endl;
}

void CCircle::Set(CCircle& c)
{
	m_fPoint_X = c.m_fPoint_X;
	m_fPoint_Y = c.m_fPoint_Y;
	m_fRadius = c.m_fRadius;
	m_sName = c.m_sName;
}

void CCircle::Display()
{
	cout << "원의 이름 : " << m_sName.GetBuffer() << endl;
	cout << "중심 좌표 : (" << m_fPoint_X << "," << m_fPoint_Y << ")" << endl;
	cout << "반지름의 길이 : " << m_fRadius << endl;
	cout << "원의 넓이 : " << GetArea() << endl << endl;
}

bool CCircle::IsInFigure(float x, float y)
{
	if (GetDistanceSquare(m_fPoint_X, m_fPoint_Y, x, y) <= m_fRadius * m_fRadius) 
		return true;
	else 
		return false;
}

int CCircle::GetDigit(int n)
{
	int answer = 1;
	while (n /= 10)
		answer++;
	return answer;
}

int CCircle::GetDigitNum(int n, int m)
{
	while (--m) n /= 10;
	return n % 10;
}

void CCircle::NameInit(int n)
{
	m_sName + ctoi(n);
}

char CCircle::ctoi(int n)
{
	return (char)(n + 48);
}