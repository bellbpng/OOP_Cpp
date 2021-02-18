#include <iostream>
#include <cfloat>

using namespace std;

int main()
{
	char ch;
	int num;
	char diff = 'a' - 'A';

	cout << "정수 입력(97~122) : ";
	cin >> num;
	ch = num;
	cout << "입력한 숫자 : " << num << endl;
	cout << "값에 해당하는 문자 : " << ch << endl;
	cout << "대문자 : " << char(ch - diff) << endl;

	return 0;
}