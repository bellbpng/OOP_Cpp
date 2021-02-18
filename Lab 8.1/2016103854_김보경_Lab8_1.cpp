#include <iostream>

using namespace std;

inline int cubic(int i);

int main()
{
	int sum = 0.0;
	for (int i = 1; i <= 100; i++) {
		sum += cubic(i);
	}

	cout << "°á°ú: " << sum << endl;

	return sum;
}

inline int cubic(int i) 
{
	return i * i * i;
}