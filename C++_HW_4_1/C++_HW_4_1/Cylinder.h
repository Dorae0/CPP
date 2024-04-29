#pragma once
#ifndef __CYLINDER_H__
#define __CYLINDER_H__
#define _CRT_SECURE_NO_WARNINGS

#include "Circle.h"
#include <iostream>

using namespace std;

class CCylinder :public CCircle
{
public:
	CCylinder();
	CCylinder(float pointx, float pointy, float pointz, float radius, float height, char* name);
	~CCylinder() { cout << "CCylinder " << m_sName.GetBuffer() << " Deleted" << endl; };

	float GetZ() { return m_fPoint_Z; };
	float GetHeight() { return m_fHeight; };
	float GetVolume() { return m_fRadius * m_fRadius * m_fHeight * PI; };
	void Set(CCylinder& c);
	void Display();
	bool IsInFigure(float x, float y, float z);

private:
	float m_fPoint_Z;
	float m_fHeight;
};

#endif