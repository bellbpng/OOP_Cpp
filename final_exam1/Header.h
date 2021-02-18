#pragma once
#ifndef __Mycomplex__
#define __Mycomplex__
#include <iostream>

using namespace std;

class MyComplex {
	double x; // 실수
	double y; // 허수
public:
	MyComplex();
	MyComplex(const double re);
	MyComplex(const double re, const double im);
	MyComplex(MyComplex& t);
	void Showinfo(); // 개인 확인용

	void coujugate();
	MyComplex& operator=(MyComplex& t);
	MyComplex operator*(MyComplex& t);
	bool operator<(MyComplex& t);
	bool operator>(MyComplex& t);
	bool operator==(MyComplex& t);
	friend MyComplex operator*(const double a, MyComplex& t);
	friend ostream& operator<<(ostream&, const MyComplex& t);
};

#endif

