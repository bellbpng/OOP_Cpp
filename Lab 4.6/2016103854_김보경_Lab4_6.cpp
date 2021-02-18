#include <iostream>
#include <string>

using namespace std;

struct student {
	string Name;
	string ID;
	float GPA = 0;
};

int main()
{
	student* member = new student[3];
	member[0] = { "bokyoung", "2016103854", 4.32f };
	member[1] = { "sungyong", "2016108512", 4.14f };
	member[2] = { "donghyeon", "2017104832", 4.21f };

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번째 학생" << endl;
		cout << "이름 : " << member[i].Name << endl;
		cout << "학번 : " << member[i].ID << endl;
		cout << "GPA : " << member[i].GPA << endl << endl;
	}

	delete[] member;
	return 0;
}