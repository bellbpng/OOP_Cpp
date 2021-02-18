#include <iostream>

void strcount(const char* str);

int main()
{
	strcount("breakfast");
	strcount("lunch"); // static total의 경우 함수를 빠져나와도 변수가 소멸되지 않음을 확인.

	return 0;
}

void strcount(const char* str)
{
	using namespace std;
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" contains ";
	while (*str++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}