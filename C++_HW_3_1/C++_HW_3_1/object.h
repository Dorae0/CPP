#ifndef C_OBJECT
#define C_OBJECT
#include "string.h"

class CObject
{
private:
	String m_sConstName;
	String m_sName;
	static int m_nNum;
	int m_nLife;

public:
	CObject();
	CObject(String sName, int nLife = 10);
	CObject(const CObject& c);
	~CObject();

	void operator = (const CObject& c);

	void Display();
	int GetDigit(int n);
	int GetDigitNum(int n, int m);
	void NameInit(int n);
	char ctoi(int n);
};

#endif
