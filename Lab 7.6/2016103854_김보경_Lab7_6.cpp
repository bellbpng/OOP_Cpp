//재귀를 이용한 프로그램
#include <iostream>

using namespace std;

int sum(int first, int last);

int main()
{
	int first, last;
	int result;

	cout << "첫 번재 수와 마지막 수 입력: ";
	cin >> first >> last;

	result = sum(first, last);
	
	if (result) {
		cout << first << "부터 " << last << "까지 합: ";
		cout << result;
	}
	else {
		return 0;
	}
	
	return 0;
}

int sum(int first, int last) {
	if (first == last)
		return first;
	else if (first < last)
		return (first + sum(first + 1, last));
	else {
		cout << "error!\n(first <= last)" << endl;
		return 0;
	}
}