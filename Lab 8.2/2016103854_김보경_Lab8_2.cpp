#include <iostream>

using namespace std;

void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main()
{
	int a, b;
	int* p = &a;
	int* q = &b;

	a = 10, b = 3;
	cout << "first printed in main" << endl;
	cout << "address(varaible a,b)" << endl;
	cout << "a: " << &a << ", b: " << &b << endl;
	cout << "value: ";
	cout << "a=" << a << ", b=" << b << endl << endl;

	swapr(a, b);
	cout << "value after swapr(reference): ";
	cout << "a= " << a << ", b= " << b << endl << endl;

	swapp(p, q);
	cout << "a: " << p << ", b: " << q << endl;
	cout << "value after swapp(pointer): ";
	cout << "a= " << *p << ", b= " << *q << endl << endl;

	swapv(a, b);
	cout << "value after swapv(variable): ";
	cout << "a= " << a << ", b= " << b << endl << endl;

	return 0;
}

void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	cout << "printed in swapr" << endl;
	cout << "address(reference ra,rb)" << endl;
	cout << "a: " << &a << ", b: " << &b << endl;
}

void swapp(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;

	cout << "printed in swapp" << endl;
	cout << "address(pointer p,q)" << endl;
}

void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "printed in swapv" << endl;
	cout << "address(variable a,b)" << endl;
	cout << "a: " << &a << ", b: " << &b << endl;
}
