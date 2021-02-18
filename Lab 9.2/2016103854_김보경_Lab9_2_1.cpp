#include <iostream>
int tom = 3;
int dick = 30; // 외부 파일에서도 접근할 수 있는 전역변수
static int harry = 300; // 외부 파일에서 접근할 수 없는 전역변수, 9_2_1 소스파일에서만 사용

void remote_access();

int main()
{
	using namespace std;
	cout << "main() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	return 0;
}