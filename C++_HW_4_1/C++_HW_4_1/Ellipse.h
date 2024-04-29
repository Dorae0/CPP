#pragma once
#ifndef __ELLIPSE_H__
#define __ELLIPSE_H__
#define _CRT_SECURE_NO_WARNINGS

#include "Circle.h"
#include <iostream>
#include <cmath>


using namespace std;

class CEllipse : public CCircle
{
public:
	CEllipse();
	CEllipse(float pointx, float pointy, float focusx, float focusy, float majaxis, float minaxis, char* name);
	~CEllipse() { cout << "CEllipse " << m_sName.GetBuffer() << " Deleted" << endl; };

	float GetMajorAxis() { return m_Major_Axis_Half * 2; };
	float GetMinorAxis() { return m_Minor_Axis_Half * 2; };
	float GetFocus_X() { return m_fFocus_X; };
	float GetFocus_Y() { return m_fFocus_Y; };
	float GetArea() { return m_Major_Axis_Half * m_Minor_Axis_Half * PI; };
	void Set(CEllipse& c);
	void Display();
	bool IsInFigure(float x, float y);

private:
	float m_fFocus_X;
	float m_fFocus_Y;
	float m_Major_Axis_Half;
	float m_Minor_Axis_Half;
};

#endif
