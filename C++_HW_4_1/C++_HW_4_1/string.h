#pragma once
#ifndef C_STRING
#define C_STRING

class String
{
public:
	//// �����ڿ� �Ҹ���
	String();
	String(const char* s);
	String(char ch, int n);
	~String();

	//// ���Կ������ߺ� ( assignment operator overloading )
	void operator=(const String& s);
	void operator+(const char c);

	//// ����Լ�
	char Get(int i) const;
	char* GetBuffer();
	void Set(int i, char ch);
	void SetLength(int i);
	int  GetLength(void) const;
	void Display(void) const;

	//// ���������
private:
	int m_nLength;
	char* m_pBuffer;
};

#endif