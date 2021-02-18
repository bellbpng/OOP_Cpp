#include <iostream>
#include "student.h"
#include <string>

using namespace std;

Student::Student(const char* fname, const char* fid)
{
	strcpy(NAME, fname);
	strcpy(ID, fid);
}

void Student::show()
{
	cout << "이름: " << NAME << endl;
	cout << "학번: " << ID << endl;
	cout << "평점(GPA): " << GPA << endl;
	cout << "상태: " << STATUS << endl << endl;
}

void Student::update_gpa(float x)
{
	GPA = x;
}

void Student::update_status(const char* fstatus)
{
	strcpy(STATUS, fstatus);
}
