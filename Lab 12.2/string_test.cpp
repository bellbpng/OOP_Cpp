#include <iostream>
#include "string2.h"

using namespace std;

int main()
{
	String s1(" and I am c++ student");
	String s2 = "Please enter your name: ";
	String s3;

	cout << s2;
	cin >> s3;
	s2 = "My Name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << s2 << ' ';
	s3.stringlow();
	cout << s3;

	return 0;
}