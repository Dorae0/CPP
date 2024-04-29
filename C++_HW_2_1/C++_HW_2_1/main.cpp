#include <iostream>
#include "character.h"

using namespace std;

CNPC npc1;
STATREF stt;
int UID;

int main()
{
	CCharacter User1;
	CCharacter User2(20, 20, 5, 5, 2, 1, 1, "Warrior");
	User2.PrintStat();
	User2.GetStat(stt);
	User2.GetUID(UID);

	printBar();
	cout << "Character Name : " << stt.sName << endl;
	cout << "Character UID : " << UID << endl;
	cout << "Character Level : " << stt.nLevel << endl;
	cout << "Character Speed : " << stt.nSpeed << endl;
	cout << "Character Power : " << stt.nPower << endl;
	cout << "Character Max HP : " << stt.nMaxHP << endl;
	cout << "Character Current HP : " << stt.nHP << endl;
	cout << "Character Max MP : " << stt.nMaxMP << endl;
	cout << "Character Current MP : " <<stt.nMP << endl;
	printBar();

	User2.LevelUP();
	User2.PrintStat();

	npc1.PrintStat();
	npc1.SetStat(20, 20, 20, 20, 5, 5, 7, "InnKeeper");
	npc1.PrintStat();

	return 0;
}