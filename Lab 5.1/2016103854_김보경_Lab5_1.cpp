#include <iostream>

using namespace std;

int main()
{
	int S = 0;
	for (int i = 1; i <= 100; i++) {
		S += i * i;
	}
	cout << S << endl;
	return 0;
}