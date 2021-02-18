#include <iostream>
#include <fstream>
#include <string>
#define MAX 2000

using namespace std;

int main()
{
	char ch[MAX];
	char c = EOF; // EOF 아스키코드 문자를 저장
	string s;
	ifstream inFile_string, inFile_char;

	inFile_string.open("precipitation.dat");
	if (!inFile_string.is_open()) {
		cout << "Could not open the file " << endl;
		return 0;
	}

	inFile_char.open("precipitation.dat");
	if (!inFile_char.is_open()) {
		cout << "Could not open the file " << endl;
		return 0;
	}

	cout << "스트링 이용\n" << "############" << endl;
	getline(inFile_string, s, c); // 종결문자 자리에 EOF 매크로를 사용할 수 없음
	cout << s << endl << endl;

	cout << "배열 이용\n" << "###########" << endl;
	inFile_char.getline(ch, MAX, EOF);
	cout << ch << endl;

	inFile_string.close();
	inFile_char.close();
	return 0;
}