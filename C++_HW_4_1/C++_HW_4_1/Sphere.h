#pragma once
#ifndef __SPHERE_H__
#define __SPHERE_H__
#define _CRT_SECURE_NO_WARNINGS

#include "Circle.h"
#include <iostream>

using namespace std;

class CSphere : public CCircle
{
public:
	CSphere();
	CSphere(float pointx, float pointy, float pointz, float radius, char* name);
	~CSphere() { cout << "CSphere " << m_sName.GetBuffer() << " Deleted" << endl; };

	float GetZ() { return m_fPoint_Z; };
	float GetVolume() { return m_fRadius * m_fRadius * m_fRadius * PI * 4.0f / 3.0f; };
	float GetArea(int h) { return (m_fRadius * m_fRadius - h * h); };
	void Set(CSphere& c);
	void Display();
	bool IsInFigure(float x, float y, float z);

private:
	float m_fPoint_Z;
};


#endif