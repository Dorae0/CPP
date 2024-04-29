#include "object.h"
#include <iostream>
#include "string.h"


using namespace std;

int main()
{
	CObject ObjectOrg("³ª", 100);
	ObjectOrg.Display();

	CObject* pObjectOrg[10000];
	for (int i = 0; i < 10000; i++)
	{
		pObjectOrg[i] = new CObject;
	}

	return 0;
}