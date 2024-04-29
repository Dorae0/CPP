#include "Cone.h"

CCone::CCone()
{
	m_fPoint_X = 0.0f;
	m_fPoint_Y = 0.0f;
	m_fPoint_Z = 0.0f;
	m_fHeight = 1.0f;
	m_fRadius = 1.0f;
	m_fGeneratrix = sqrt(m_fHeight * m_fHeight + m_fRadius * m_fRadius);
	m_sName = m_sStaticName;

	int NumDigit = GetDigit(m_nSerialNum);

	while (NumDigit--)
	{
		int tempDigit = GetDigitNum(m_nSerialNum, NumDigit + 1);
		NameInit(tempDigit);
	}

	cout << "CCone " << m_sName.GetBuffer() << " Created" << endl;
}

CCone::CCone(float pointx, float pointy, float pointz, float radius, float height, char* name)
{
	m_fPoint_X = pointx;
	m_fPoint_Y = pointy;
	m_fPoint_Z = pointz;
	m_fHeight = height;
	m_fRadius = radius;
	m_fGeneratrix = sqrt(m_fHeight * m_fHeight + m_fRadius * m_fRadius);
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

	cout << "CCone " << m_sName.GetBuffer() << " Created" << endl;
}

void CCone::Set(CCone& c)
{
	m_fPoint_X = c.m_fPoint_X;
	m_fPoint_Y = c.m_fPoint_Y;
	m_fPoint_Z = c.m_fPoint_Z;
	m_fHeight = c.m_fHeight;
	m_fRadius = c.m_fRadius;
	m_fGeneratrix = c.m_fGeneratrix;
	m_sName = c.m_sName;
}

void CCone::Display()
{
	cout << "¿ø»ÔÀÇ ÀÌ¸§ : " << m_sName.GetBuffer() << endl;
	cout << "¿ø»Ô ¹Ø¸é Áß½É ÁÂÇ¥ : (" << m_fPoint_X << "," << m_fPoint_Y << "," << m_fPoint_Z << ")" << endl;
	cout << "¹ÝÁö¸§ÀÇ ±æÀÌ : " << m_fRadius << endl;
	cout << "¹Ø¸éÀÇ ³ÐÀÌ : " << CCircle::GetArea() << endl;
	cout << "¿ø»ÔÀÇ ºÎÇÇ : " << GetVolume() << endl;
	cout << "¸ð¼±ÀÇ ±æÀÌ : " << m_fGeneratrix << endl << endl;
}

bool CCone::IsInFigure(float x, float y, float z)
{
	if (z > m_fHeight || z < m_fPoint_Z)
		return false;

	if (GetDistanceSquare(m_fPoint_X, m_fPoint_Y, x, y) <= m_fRadius * m_fRadius * (m_fHeight - z) * (m_fHeight - z) / (m_fHeight * m_fHeight))
		return true;
	else
		return false;
}