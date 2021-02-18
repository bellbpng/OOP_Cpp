#include <iostream>
#include <string>

using namespace std;

struct student {
	string Name;
	string ID;
	float GPA;
};

int main()
{
	student member[3] = {
		{"bokyoung", "2016103854", 4.3},
		{"sungyong", "2016108512", 4.1},
		{"donghyeon", "2017104832", 4.2}
	};
	
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번째 학생" << endl;
		cout << "이름 : " << member[i].Name << endl;
		cout << "학번 : " << member[i].ID << endl;
		cout << "GPA : " << member[i].GPA << endl << endl;
	}

	return 0;
}