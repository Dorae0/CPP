#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "string.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Sphere.h"
#include "Cone.h"
#include "Cylinder.h"

using namespace std;

int main()
{
	CCircle CCircle1(1.0f, 1.0f, 5.0f, (char*)"��");
	CEllipse CEllipse1(1.0f, 1.0f, -1.0f, -1.0f, 10, 4, (char*)"Ÿ��");
	CSphere CSphere1(0.0f, 0.0f, 0.0f, 5.0f, (char*)"��");
	CCone CCone1(0.0f, 0.0f, 0.0f, 5.0f, 5.0f, (char*)"����");
	CCylinder CCylinder1(0.0f, 0.0f, 0.0f, 5.0f, 5.0f, (char*)"�����");

}