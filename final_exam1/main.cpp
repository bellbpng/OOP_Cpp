#include <iostream>
#include "Header.h"

using namespace std;

//int main()
{
	/*MyComplex a(1.0, 2.0);
	MyComplex b;
	MyComplex c(1.0);*/

	//문제1 -- ok
	/*a.Showinfo();
	b.Showinfo();
	c.Showinfo();*/

	//문제2 -- 디버깅
	//b = a.coujugate(); //b.operator=(a.coujugate());
	//b.Showinfo();

	//문제3 -- ok
	/*MyComplex a(1.0, 2.0), b(3.0, 4.0), c;
	c = a * b;
	c.Showinfo();*/

	//문제4 -- ok
	/*MyComplex a, b(1.0, 2.0);
	a = 3.14159 * b;
	a.Showinfo();*/

	//문제5 --- ok
	/*MyComplex a(1.0, 2.0), b(3.0, 4.0);
	cout << a << b << endl;*/

	//문제6 --- ok
	/*MyComplex a(1.0, 2.0);
	MyComplex b = a;
	b.Showinfo();*/

	//문제7 --- ok
	/*MyComplex a(1.0, 2.0), b(3.0, 4.0);
	if (a > b) {

		cout << "absolute value of " << a << " is larger" << endl;

	}

	else if (a < b) {

		cout << "absolute value of " << b << " is larger" << endl;

	}

	else {

		cout << "absolute values of a and b are equal" << endl;

	}*/

	
}

const int ARY_SIZE = 100;

int main() {

	MyComplex compx[ARY_SIZE];

	MyComplex* smallest = &compx[0];
	MyComplex* largest = &compx[0];

	compx[0] = { 1.0, 2 };

	for(int i = 1; i < 5; i++) {   // total은 compx에 들어 있는 객체의 수
		if (*smallest > compx[i]) {
			smallest = &compx[i];
		}
		if (*largest < compx[i]) {
			largest = &compx[i];
		}

	}

	

	cout << "Smallest is " << *smallest << endl;

	cout << "Largest is " << *largest << endl;

}