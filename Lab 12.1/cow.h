#pragma once
#ifndef __Cow__
#define __Cow__

class Cow {
private:
	char name[20];
	char* hobby;
	double weight;
public:
	Cow(); // 디폴트 생성자
	Cow(const char* nm, const char* ho, double wt); // 생성자
	Cow(const Cow& c); // 복사 생성자
	~Cow(); // 소멸자
	Cow& operator = (const Cow & c); // 대입연산자 오버로딩
	void ShowCow() const; // 모든 cow data를 보여줌
};

#endif
