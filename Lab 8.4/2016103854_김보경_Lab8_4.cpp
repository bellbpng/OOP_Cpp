#include <iostream>

using namespace std;

int sum(int n = 100);

int main()
{
	cout << "without argument: " << sum() << endl;
	cout << "sending argument(110): " << sum(110) << endl;

	return 0;
}

int sum(int n)
{
	int total = 0;

	for (int i = 1; i <= n; i++) {
		total += i;
	}

	return total;
}