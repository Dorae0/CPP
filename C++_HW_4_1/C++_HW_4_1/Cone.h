#pragma once
#ifndef __CONE_H__
#define __CONE_H__
#define _CRT_SECURE_NO_WARNINGS

#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

class CCone : public CCircle
{
public:
	CCone();
	CCone(float pointx, float pointy, float pointz, float radius, float height, char* name);
	~CCone() { cout << "CCone " << m_sName.GetBuffer() << " Deleted" << endl; };

	float GetZ() { return m_fPoint_Z; };
	float GetHeight() { return m_fHeight; };
	float GetGeneratrix() { return m_fGeneratrix; };
	float GetVolume() { return CCircle::GetArea() * m_fHeight / 3.0f; };
	float GetRTriangleArea() { return m_fHeight * m_fRadius / 2.0f; };
	float GetArea(int h) { return m_fRadius * m_fRadius * (m_fHeight - h) * (m_fHeight - h) * PI / (m_fHeight * m_fHeight); };
	void Set(CCone& c);
	void Display();
	bool IsInFigure(float x, float y, float z);

private:
	float m_fPoint_Z;
	float m_fHeight;
	float m_fGeneratrix;
};


#endif
