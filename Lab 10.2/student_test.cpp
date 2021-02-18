#include <iostream>
#include "student.h"
#include <string>

using namespace std;

int main()
{
	Student s1("±èº¸°æ", "2016103854");
	Student s2("°í¼º¿ë", "2016104832");

	s1.update_gpa(4.12f);
	s1.update_status("ÀçÇÐ");
	s2.update_gpa(4.06f);
	s2.update_status("ÈÞÇÐ");

	s1.show();
	s2.show();

	return 0;
}