#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, id;
	cout << "이름(영문) 입력 : ";
	//cin >> name;
	getline(cin, name);
	cout << "학번 입력 : ";
	cin >> id;
	
	cout << "이름 : " << name <<endl;
	cout << "학번 : " << id << endl;

	return 0;
}

