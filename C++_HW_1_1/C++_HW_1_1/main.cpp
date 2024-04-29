#include <iostream>
#include <stdio.h>

using namespace std;

inline void print(void) // inline 함수
{
	cout << "inline function code block\n";
}

namespace A // namespace 구분
{
	char ch = 'A';

	void Init(char c)
	{
		cout << "namespace A " << c << endl;
	}
	void show(int i = 3, float f = 3.0f, long l = 3L)
	{
		cout << "\nFirst Parameter : " << i;
		cout << ", Second Parameter: " << f;
		cout << ", Third Parameter : " << l;
	}
}

namespace B // namespace 구분
{
	char ch = 'B';
	void Init(char c)
	{
		cout << "namespace B " << c << endl;
	}

	void swap(int* a, int* b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}

	void swap(int& a, int& b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
}

using namespace A;

struct bigone {
	int serno;
	char text[1000];
} bo = { 123, "This is a BIG structure." };

void valfunc(bigone v1);
void ptrfunc(bigone* p1);
void reffunc(bigone& r1); // 전역 함수

int a = 7; // 전역 변수

int main()
{
	show(2);
	show(2, 1.5f);
	show(2, 1.5f, 5L); // 함수 Default Parameter

	cout << '\n'<< ch << B::ch << '\n'; // A::ch와 B::ch의 차이.

	Init(ch); B::Init(B::ch); // A::Init과 B::Init의 차이.

	char chx = 7;
	char& chy = chx;

	printf("%X %X\n", &chx, &chy); // Reference의 기능 확인 (주소)
	printf("%d %d\n", chx, chy); // Reference의 기능 확인 (변수값)

	valfunc(bo); // valfunc : 일반 매개변수
	ptrfunc(&bo); // ptrfunc : 포인터 매개변수
	reffunc(bo); // reffunc : 레퍼런스 매개변수

	int a = 3; int b = 5;

	B::swap(&a, &b); // swap 함수 (레퍼런스)
	B::swap(a, b); // swap 함수 (일반 변수)

	cout << a << ' ' << ::a << endl; // 전역 변수 a 사용.

	print(); // Inline 함수 print

	return 0;
}

void valfunc(bigone v1)
{
	cout << '\n' << v1.serno;
	cout << '\n' << v1.text;
}
void ptrfunc(bigone* p1)
{
	cout << '\n' << p1->serno;
	cout << '\n' << p1->text;
}

void reffunc(bigone& r1)
{
	cout << '\n' << r1.serno;
	cout << '\n' << r1.text;
}