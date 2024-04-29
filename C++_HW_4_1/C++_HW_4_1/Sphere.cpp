#include "Sphere.h"

CSphere::CSphere()
{
	m_fPoint_X = 0.0f;
	m_fPoint_Y = 0.0f;
	m_fPoint_Z = 0.0f;
	m_fRadius = 1.0f;
	m_sName = m_sStaticName;

	int NumDigit = GetDigit(m_nSerialNum);

	while (NumDigit--)
	{
		int tempDigit = GetDigitNum(m_nSerialNum, NumDigit + 1);
		NameInit(tempDigit);
	}

	cout << "CSphere " << m_sName.GetBuffer() << " Created" << endl;
}

CSphere::CSphere(float pointx, float pointy, float pointz, float radius, char* name)
{
	m_fPoint_X = pointx;
	m_fPoint_Y = pointy;
	m_fPoint_Z = pointz;
	m_fRadius = radius;
	m_sName = name;

	if (name != m_sStaticName)
	{
		StaticNameMap[m_sStaticName] = m_nSerialNum;
		m_sStaticName = name;
		if (StaticNameMap.find(name) != StaticNameMap.end())
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

	cout << "CSphere " << m_sName.GetBuffer() << " Created" << endl;
}

void CSphere::Set(CSphere& c)
{
	m_fPoint_X = c.m_fPoint_X;
	m_fPoint_Y = c.m_fPoint_Y;
	m_fPoint_Z = c.m_fPoint_Z;
	m_fRadius = c.m_fRadius;
	m_sName = c.m_sName;
}

void CSphere::Display()
{
	cout << "구의 이름 : " << m_sName.GetBuffer() << endl;
	cout << "구 중심 좌표 : (" << m_fPoint_X << "," << m_fPoint_Y << "," << m_fPoint_Z << ")" << endl;
	cout << "반지름의 길이 : " << m_fRadius << endl;
	cout << "구 중심 원의 넓이 : " << CCircle::GetArea() << endl;
	cout << "구의 부피 : " << GetVolume() << endl << endl;
}

bool CSphere::IsInFigure(float x, float y, float z)
{
	if (z > m_fRadius || z < m_fPoint_Z - m_fRadius)
		return false;

	if (GetDistanceSquare(m_fPoint_X, m_fPoint_Y, m_fPoint_Z, x, y, z) <= m_fRadius * m_fRadius * m_fRadius)
		return true;
	else
		return false;
}