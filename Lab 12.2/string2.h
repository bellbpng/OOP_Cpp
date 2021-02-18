#pragma once
#ifndef __String2__
#define __String2__
#include <iostream>
using namespace std;

class String {
private:
	char* str;
	int len;
public:
	String(); // 디폴트 생성자
	String(const char* s); // 생성자
	String(const String& s); // 복사 생성자
	~String();
	void stringlow();
	void stringup();
	String operator+(const String& s);
	String& operator= (const String& s);

	friend String operator+(const char* a, String& t);
	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);
};

#endif
