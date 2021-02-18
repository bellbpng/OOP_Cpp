#include <iostream>
#include <cstdio>
#include <cctype>
#define MAX 100

using namespace std;

void trans_string(char test_string[], char result_string[], int len);

int main()
{
	char test_string[] ="qqwe;)* KljkLasd123@#ASDdo`ew";
	char result_string[MAX];
	int len = strlen(test_string);

	trans_string(test_string, result_string, len);

	cout << "소문자만 추출하여 출력한 문자열: " << result_string << endl;

	return 0;
}

void trans_string(char test_string[], char result_string[], int len)
{
	int j = 0;
	for (int i = 0; i < len; i++) {
		if (islower(test_string[i])) {
			result_string[j++] = test_string[i];
		}
	}
	result_string[++j] = '\0';
}