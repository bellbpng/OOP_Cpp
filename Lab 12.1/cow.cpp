#include <iostream>
#include <cstring>
#include "cow.h"

using namespace std;

//디폴트 생성자
Cow::Cow() {
	strcpy(name, "");
	hobby = NULL; // 어떤 메모리공간도 가리키지 않음
	weight = 0.0;
}

//생성자
Cow::Cow(const char* nm, const char* ho, double wt) {
	strcpy(name, nm);
	int len = strlen(ho);
	hobby = new char[len + 1]; // 힙 영역에 할당
	strcpy(hobby, ho);
	weight = wt;
}

//복사 생성자
Cow::Cow(const Cow& c) {
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1]; // 새로운 메모리 공간을 만들고
	strcpy(hobby, c.hobby); // 새로 만든 메모리 공간에 해당 문자열을 복사
	weight = c.weight;
}

//소멸자
Cow::~Cow() {
	delete[] hobby; // 힙 영역에 할당된 메모리 공간 소멸
	cout << "소멸자 실행 완료!" << endl << endl;
}

//대입연산자 오버로딩 ( 멤버 by 멤버 )
Cow& Cow::operator= (const Cow& c) {
	Cow result;
	int len = strlen(c.name);
	
	//name 문자열 복사
	for (int i = 0; i < len; i++) {
		result.name[i] = c.name[i];
	}

	//hobby 문자열 복사
	result.hobby = new char[strlen(c.hobby) + 1];
	strcpy(result.hobby, c.hobby);

	result.weight = c.weight;

	return result;
}

void Cow::ShowCow() const {
	cout << "Cow informaiton" << endl;
	cout << "name: " << name << endl;
	if (hobby != NULL) {
		cout << "hobby: " << hobby << endl;
	}
	else {
		cout << "hobby: x" << endl;
	}
	cout << "weight: " << weight << "kg" << endl << endl;
}