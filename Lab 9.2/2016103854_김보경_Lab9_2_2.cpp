#include <iostream>

extern int tom; // 다른 소스파일의 전역변수에 접근
static int dick = 10; // 9_2_2 소스파일에서만 사용가능한 전역변수. 
int harry = 200;

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}