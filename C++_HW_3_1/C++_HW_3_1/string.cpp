#include "string.h"
#include <iostream>
#include <string.h>

#pragma warning ( disable : 4996 )

using namespace std;

String::String()
{
	m_pBuffer = NULL;
	m_nLength = 0;
}

String::String(const char* s)
{
	m_nLength = strlen(s);
	m_pBuffer = new char[m_nLength + 1];
	::strcpy(m_pBuffer, s);
}

String::String(char ch, int n)
{
	m_nLength = n;
	m_pBuffer = new char[m_nLength + 1];
	::memset(m_pBuffer, ch, m_nLength);
	m_pBuffer[m_nLength] = '\0';
}

String::~String()
{
	if (m_pBuffer)
	{
		delete m_pBuffer;
		m_pBuffer = NULL;
	}
}

void String::operator=(const String& s)
{
	//// 자기자신 대입 검사
	if (&s == this)
	{
		cout << "this == this\n";
		return;
	}

	//// 버퍼가 가리키는 메모리를 해제
	if (m_pBuffer)
	{
		delete m_pBuffer;
		m_pBuffer = 0;
	}

	////
	m_nLength = s.m_nLength;

	//// 새로운 메모리 할당
	m_pBuffer = new char[m_nLength + 1];

	//// 복사
	::strcpy(m_pBuffer, s.m_pBuffer);
}

void String::operator+(char c)
{
	char* pctemp;
	pctemp = new char[m_nLength + 1];
	::strcpy(pctemp, m_pBuffer);

	//// 버퍼가 가리키는 메모리를 해제
	if (m_pBuffer)
	{
		delete m_pBuffer;
		m_pBuffer = 0;
	}

	//// 길이 + 1
	m_nLength += 1;
	
	m_pBuffer = new char[m_nLength + 1];

	::strcpy(m_pBuffer, pctemp);
	Set(m_nLength, c);
	m_pBuffer[m_nLength] = '\0';
}

char String::Get(int i) const
{
	if ((i > 0) && (i <= m_nLength))
		return m_pBuffer[i - 1];
	return 0;
}

char* String::GetBuffer()
{
	return m_pBuffer;
}

void String::Set(int i, char ch)
{
	if ((i > 0) && (i <= m_nLength))
		m_pBuffer[i - 1] = ch;
}

void String::SetLength(int i)
{
	m_nLength = i;
}

int String::GetLength(void) const
{
	return m_nLength;
}

void String::Display(void) const
{
	cout << "m_pBuffer : " << m_pBuffer << ", m_nLength : " << m_nLength << endl;
}