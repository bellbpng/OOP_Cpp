#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str[] = "m;lk;qweproj()U234jlkjwe";
	char str2[30];
	int i;
	string s1 = "m;lk;qweproj()U234jlkjwe";
	string s2;
	i = 0;

	cout << "원래 문자열 : " << str << endl;

	while (1)
	{
		if ((str[i] >= 48) && (str[i] <= 57))
		{
			str2[i] = '\0';
			s1[i] = '\0'; // string 문자열에 얼문자 삽입
			s2 = s1;
			break;
		}
		str2[i] = str[i];
		i++;
	}

	cout << "출력 문자열 : " << str2 << endl;
	cout << "스트링 결과 : " << s2 << endl; 
	// string 클래스 이용시 중간에 널문자가 있어도 문자열 전체를 복사. 

	return 0;
}