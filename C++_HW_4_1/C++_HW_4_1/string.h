#pragma once
#ifndef C_STRING
#define C_STRING

class String
{
public:
	//// 생성자와 소멸자
	String();
	String(const char* s);
	String(char ch, int n);
	~String();

	//// 대입연산자중복 ( assignment operator overloading )
	void operator=(const String& s);
	void operator+(const char c);

	//// 멤버함수
	char Get(int i) const;
	char* GetBuffer();
	void Set(int i, char ch);
	void SetLength(int i);
	int  GetLength(void) const;
	void Display(void) const;

	//// 멤버데이터
private:
	int m_nLength;
	char* m_pBuffer;
};

#endif