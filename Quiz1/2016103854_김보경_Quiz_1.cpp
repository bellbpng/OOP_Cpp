#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double sum = 0;
	
	for (double x = 0.0; x <= 1.0; x += 0.1) {
		sum += exp(-x);
	}

	cout << "´ä: " << sum << endl;

	return 0;
}