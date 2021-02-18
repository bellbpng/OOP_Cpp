#include <iostream>
#include <cstring>
#include "string2.h"

using namespace std;

//디폴트 생성자
String::String() {
	len = 0;
	str = NULL;
}

//생성자
String::String(const char* s) {
	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
}

//복사 생성자
String::String(const String& s) {
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}

//소멸자
String::~String() {
	if (str != NULL)
		delete[]str;
}

//소문자로 변환
void String::stringlow() {
	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
}

//대문자로 변환
void String::stringup() {
	for (int i = 0; i < len; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
}

//대입연산자 오버로딩.. 중요!!
String& String::operator= (const String& s) {
	if (str != NULL) {
		delete[] str; // 기존에 가지고 있던 메모리공간을 지우고
	}
	len = s.len;
	str = new char[len]; // 새로운 배열의 길이를 가지는 메모리공간을 만든다.
	strcpy(str, s.str);
	return *this;
}

//문자열 + 연산자 오버로딩
String String::operator+ (const String& s) {
	len += s.len - 1;
	char* temp = new char[len];
	strcpy(temp, str); // 내가 가진 문자열 복사하여 넣고
	strcat(temp, s.str); // 받아들인 문자열 이어 붙이기
	
	String result(temp);
	delete[] temp; // 힙 영역에 할당한 메모리공간 소멸

	return result;
}

// + 연산자 교환법칙 오버로딩
String operator+(const char* a, String& t) {
	int len = strlen(a) + t.len;
	char* temp = new char[len];
	strcpy(temp, a);
	strcat(temp, t.str);

	String result(temp);
	delete[] temp;
	return result;
}

// << 연산자 오버로딩
ostream& operator<< (ostream& os, const String& s)
{
	os << s.str;
	return os;
}

// >> 연산자 오버로딩
istream& operator>> (istream& is, String& s)
{
	char str[100];
	is >> str;
	String temp(str);
	s = temp;
	return is;
}