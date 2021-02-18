#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

//개인 확인용
void MyComplex::Showinfo() {
	cout << x << ' ' << y << endl;
}

MyComplex::MyComplex() {
	x = 0; y = 0;
}

MyComplex::MyComplex(const double re) {
	x = re;
	y = 0;
}

MyComplex::MyComplex(const double re, const double im) {
	x = re;
	y = im;
}
 //문제 1번

//void MyComplex::coujugate() {
//	y = -y;
//}
//
//문제 2번

MyComplex MyComplex::operator*(MyComplex& t) {
	MyComplex temp(x * t.x, y * t.y);

	return temp;
}
//문제 3번

MyComplex operator*(const double a, MyComplex& t) {
	MyComplex result(a * t.x, a * t.y);
	return result;
}
//문제 4번

ostream& operator<<(ostream& os, const MyComplex& t) {
	os << t.x << "+i" << t.y << endl;
	return os;
}
//문제 5번

MyComplex::MyComplex(MyComplex& t) {
	x = t.x;
	y = t.y;
}
//문제 6번

bool MyComplex::operator<(MyComplex& t) {
	double bm = sqrt(t.x*t.x + t.y*t.y);
	double am = sqrt(x * x + y * y);
	if (am < bm) {
		return true;
	}
	else {
		return false;
	}
}

bool MyComplex::operator>(MyComplex& t) {
	double bm = sqrt(t.x * t.x + t.y * t.y);
	double am = sqrt(x * x + y * y);
	if (am > bm) {
		return true;
	}
	else {
		return false;
	}
}

bool MyComplex::operator==(MyComplex& t) {
	double bm = sqrt(t.x * t.x + t.y * t.y);
	double am = sqrt(x * x + y * y);
	if (am == bm) {
		return true;
	}
	else {
		return false;
	}
}
//문제 7번

//MyComplex& MyComplex::operator=(MyComplex& t) {
//	x = t.x;
//	y = -t.y;
//
//	return *this;
//}
//문제 8번 -- ?


