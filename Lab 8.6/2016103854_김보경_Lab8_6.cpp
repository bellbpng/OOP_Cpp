#include <iostream>

using namespace std;

template <typename T>
T mysum(T& num1, T& num2)
{
	return num1 + num2;
}

struct mycomplex {
	double x;
	double y;
};

int main()
{
	int n1, n2;
	double d1, d2, real, imag;
	mycomplex c1, c2;

	cout << "input two integers: ";
	cin >> n1 >> n2;
	cout << "input two real numbers: ";
	cin >> d1 >> d2;
	cout << "x+iy => first input x, y: ";
	cin >> c1.x >> c1.y;
	cout << "second input x,y: ";
	cin >> c2.x >> c2.y;
	//mysum<mycomplex>(c1, c2); ±¸Á¶Ã¼³¢¸® µ¡¼À¿¬»ê ºÒ°¡´É
	real = mysum<double>(c1.x, c2.x);
	imag = mysum<double>(c1.y, c2.y);
	cout << "sum of two integers: " << mysum<int>(n1, n2) << endl;
	cout << "sum of two real numbers: " << mysum<double>(d1, d2) << endl;
	cout << "sum of two complex: " << real << "+ i(" << imag << ")"<< endl;

	return 0;
}