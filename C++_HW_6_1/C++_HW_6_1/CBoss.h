#pragma once
#ifndef __CBOSS_H__
#define __CBOSS_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CCreature.h"
#include "Screen.h"

using namespace std;

class CBoss : public CCreature
{
public:
	void SetStat(int stattype, int num) override;
	void SetName(char* name) override;
	void Printstat(int x, int y, bool IsSelected) override;
};

#endif