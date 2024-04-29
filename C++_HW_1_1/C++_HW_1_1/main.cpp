#include <iostream>
#include <stdio.h>

using namespace std;

inline void print(void) // inline �Լ�
{
	cout << "inline function code block\n";
}

namespace A // namespace ����
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

namespace B // namespace ����
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
void reffunc(bigone& r1); // ���� �Լ�

int a = 7; // ���� ����

int main()
{
	show(2);
	show(2, 1.5f);
	show(2, 1.5f, 5L); // �Լ� Default Parameter

	cout << '\n'<< ch << B::ch << '\n'; // A::ch�� B::ch�� ����.

	Init(ch); B::Init(B::ch); // A::Init�� B::Init�� ����.

	char chx = 7;
	char& chy = chx;

	printf("%X %X\n", &chx, &chy); // Reference�� ��� Ȯ�� (�ּ�)
	printf("%d %d\n", chx, chy); // Reference�� ��� Ȯ�� (������)

	valfunc(bo); // valfunc : �Ϲ� �Ű�����
	ptrfunc(&bo); // ptrfunc : ������ �Ű�����
	reffunc(bo); // reffunc : ���۷��� �Ű�����

	int a = 3; int b = 5;

	B::swap(&a, &b); // swap �Լ� (���۷���)
	B::swap(a, b); // swap �Լ� (�Ϲ� ����)

	cout << a << ' ' << ::a << endl; // ���� ���� a ���.

	print(); // Inline �Լ� print

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