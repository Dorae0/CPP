#pragma once
#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14f

#include <iostream>
#include <string>
#include <map>
#include "string.h"

using namespace std;

class CCircle
{
public:
	CCircle();
	CCircle(float x, float y, float r, char* c);
	~CCircle();

	float GetX() { return m_fPoint_X; };
	float GetY() { return m_fPoint_Y; };
	float GetRadius() { return m_fRadius; };
	void Set(CCircle& c);
	float GetArea() { return m_fRadius * m_fRadius * PI; };
	void Display();
	inline float GetDistanceSquare(float x1, float y1, float x2, float y2) { return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); };
	inline float GetDistanceSquare(float x1, float y1, float z1, float x2, float y2, float z2) { return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1); };
	bool IsInFigure(float x, float y);

	enum Numbers { CODE_CTOI = 48 };

	int GetDigit(int n);
	int GetDigitNum(int n, int m);
	void NameInit(int n);
	char ctoi(int n);

protected:
	float m_fPoint_X;
	float m_fPoint_Y;
	float m_fRadius;
	static int m_nSerialNum;
	String m_sName;
	static char* m_sStaticName;
	map<char*, int> StaticNameMap;
};

#endif