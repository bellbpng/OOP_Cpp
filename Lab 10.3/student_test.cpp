#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	student s1("김보경", "2016103854");
	student s2("고성용", "2016103975");

	s1.update_status("재학");
	s2.update_status("휴학");

	//2019-2
	s1.update_gpa("확률및통계", "2019-2", 4.0f);
	s1.update_gpa("기초전자회로", "2019-2", 3.3f);
	s1.update_gpa("신경생리학", "2019-2", 4.0f);
	s1.update_gpa("생체의공실험", "2019-2", 4.3f);
	//2020-1
	s1.update_gpa("인체생리학", "2020-1", 3.7f);
	s1.update_gpa("공학수학2", "2020-1", 4.3f);
	s1.update_gpa("기초프로그래밍", "2020-1", 4.0f);
	s1.update_gpa("전자기학", "2020-1", 4.0f);
	//2020-2
	s1.update_gpa("논리회로", "2020-2", 4.3f);
	s1.update_gpa("전자회로1", "2020-2", 4.3f);
	s1.update_gpa("객프실습", "2020-2", 4.3f);
	s1.update_gpa("컴퓨터네트워크", "2020-2", 4.0f);

	//2018-2
	s2.update_gpa("현대미국소설", "2018-2", 4.3f);
	s2.update_gpa("한문과문화", "2018-2", 4.0f);
	s2.update_gpa("영국고전드라마", "2018-2", 3.7f);
	s2.update_gpa("삶과윤리", "2018-2", 4.3f);
	//2019-2
	s2.update_gpa("국제경영", "2019-2", 4.3f);
	s2.update_gpa("비지니스모델", "2019-2", 4.0f);
	s2.update_gpa("조직과인간", "2019-2", 4.3f);
	s2.update_gpa("영어작문(3)", "2019-2", 3.7f);
	//2020-1
	s2.update_gpa("마케팅세미나", "2020-1", 4.3f);
	s2.update_gpa("영어권문학", "2020-1", 4.3f);
	s2.update_gpa("경영의사결정론", "2020-1", 3.3f);
	s2.update_gpa("사제동행세미나", "2020-1", 3.7f);

	s1.show();
	s2.show();

	return 0;
}