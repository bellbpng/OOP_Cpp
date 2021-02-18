#include <iostream>

using namespace std;

void mysum(int a, int b);

int main()
{
	int a, b;
	cout << "두 정수 입력 : ";
	cin >> a;
	cin >> b;
	mysum(a,b);
	return 0;
}

void mysum(int a, int b)
{
	cout << "두 정수 합: " << a + b << endl;
}