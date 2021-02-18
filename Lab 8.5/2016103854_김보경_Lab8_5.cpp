#include <iostream>
#include <cmath>

using namespace std;

int absol(int val);
double absol(double val);

int main()
{
	int val1 = 0;
	double val2 = 0.0;

	cout << "input integer: ";
	cin >> val1;
	cout << "input real number: ";
	cin >> val2;

	cout << "absoulte value(val1): " << absol(val1) << endl;
	cout << "absoulte value(val2): " << absol(val2) << endl;

	return 0;
}

int absol(int val)
{
	return abs(val);
}

double absol(double val)
{
	return abs(val);
}