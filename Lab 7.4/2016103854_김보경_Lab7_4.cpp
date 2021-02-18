#include <iostream>

using namespace std;

char* buildstr(char a, char b, int n);

int main()
{
	char a, b;
	int n;

	cout << "문자 2개 입력: ";
	cin >> a >> b;
	cout << "정수 입력: ";
	cin >> n;
	char* ps = buildstr(a, b, n);
	cout << ps << endl;

	delete[]ps;

	return 0;
}

char* buildstr(char a, char b, int n)
{
	char* pstr = new char[2*n+1];
	
	pstr[2*n] = '\0';

	for (int i = 0; i < 2*n; i+=2) {
		pstr[i] = a;
		pstr[i + 1] = b;
	}

	return pstr;
}