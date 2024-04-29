#include "Ellipse.h"

CEllipse::CEllipse()
{
	m_fPoint_X = 0.0f;
	m_fPoint_Y = 0.0f;
	m_fRadius = 1.0f;
	m_fFocus_X = 0.0f;
	m_fFocus_Y = 0.0f;
	m_Major_Axis_Half = 1.0f;
	m_Minor_Axis_Half = 1.0f;
	m_sName = m_sStaticName;

	int NumDigit = GetDigit(m_nSerialNum);

	while (NumDigit--)
	{
		int tempDigit = GetDigitNum(m_nSerialNum, NumDigit + 1);
		NameInit(tempDigit);
	}

	cout << "CEllipse " << m_sName.GetBuffer() << " Created" << endl;
}

CEllipse::CEllipse(float pointx, float pointy, float focusx, float focusy, float majaxis, float minaxis, char* name)
{
	m_fPoint_X = pointx;
	m_fPoint_Y = pointy;
	m_fFocus_X = focusx;
	m_fFocus_Y = focusy;
	if (majaxis >= minaxis)
	{
		m_Major_Axis_Half = majaxis / 2;
		m_Minor_Axis_Half = minaxis / 2;
	}
	else
	{
		m_Major_Axis_Half = minaxis / 2;
		m_Minor_Axis_Half = majaxis / 2;
	}
	m_sName = name;

	m_fRadius = m_Minor_Axis_Half;

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

	cout << "CEllipse " << m_sName.GetBuffer() << " Created" << endl;
}

void CEllipse::Set(CEllipse& c)
{
	m_fPoint_X = c.m_fPoint_X;
	m_fPoint_Y = c.m_fPoint_Y;
	m_fRadius = c.m_fRadius;
	m_fFocus_X = c.m_fFocus_X;
	m_fFocus_Y = c.m_fFocus_Y;
	m_Major_Axis_Half = c.m_Major_Axis_Half;
	m_Minor_Axis_Half = c.m_Minor_Axis_Half;
	m_sName = c.m_sName;
}

void CEllipse::Display()
{
	cout << "타원의 이름 : " << m_sName.GetBuffer() << endl;
	cout << "타원 초점 좌표 : (" << m_fPoint_X << "," << m_fPoint_Y << "), (" << m_fFocus_X << "," << m_fFocus_Y << ")" << endl;
	cout << "단축의 길이 : " << m_Minor_Axis_Half * 2 << endl;
	cout << "장축의 길이 : " << m_Major_Axis_Half * 2 << endl;
	cout << "타원의 넓이 : " << GetArea() << endl << endl;
}

bool CEllipse::IsInFigure(float x, float y)
{
	if (sqrt(GetDistanceSquare(m_fPoint_X, m_fPoint_Y, x, y)) + sqrt(GetDistanceSquare(m_fFocus_X, m_fFocus_Y, x, y)) <= m_Major_Axis_Half * 2) 
		return true;
	else 
		return false;
}