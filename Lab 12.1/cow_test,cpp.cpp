#include <iostream>
#include "cow.h"

int main()
{
	Cow DefaultCow; // 디폴트 생성자 테스트
	Cow UserDefinitionCow("한우", "씨름", 95.7); // 생성자 테스트
	Cow CopyCow(UserDefinitionCow); // 복사 생성자 테스트
	Cow AssignCow = UserDefinitionCow; // 대입 연산자 테스트

	//ShowCow() 테스트
	DefaultCow.ShowCow();
	UserDefinitionCow.ShowCow();
	CopyCow.ShowCow();
	AssignCow.ShowCow();

	return 0;
}