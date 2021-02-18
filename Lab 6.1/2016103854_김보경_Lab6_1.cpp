#include <iostream>

using namespace std;

int main()
{
	const int ans = 17;
	int num = 0;
	
	cout << "1-20 사이의 숫자 중에서 숨겨진 숫자를 맞추시오" << endl;
	cout << "입력: ";
	cin >> num;

	while (1)
	{
		if (num < ans) {
			cout << "출력 low!" << endl;
			cout << "입력: ";
			cin >> num;
		}
		else if (num > ans) {
			cout << "출력 high!" << endl;
			cout << "입력: ";
			cin >> num;
		}
		else {
			cout << "Correct!" << endl;
			break;
		}
	}
	return 0;
}