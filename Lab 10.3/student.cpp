#include <iostream>
#include "student.h"

using namespace std;

student::student()
{
	st_name = "";
	id = "";
	status = "";
}
// 생성자, 멤버 이니셜라이저 이용
student::student(string fname, string fid)
{
	st_name = fname;
	id = fid;
}
// 상태 업데이트
void student::update_status(string fstatus) {
	status = fstatus;
}
// 강의명, 학기, 성적 입력 후 gpa 계산
void student::update_gpa(string cname, string cseme, const float cgrade) {
	course[i].name = cname;
	course[i].semester_offered = cseme;
	course[i].grade = cgrade;
	i++; // 과목수 = i

	float total = 0.0; // gpa 계산을 위해 평점을 합침.
	for (int j = 0; j < i; j++) {
		total += course[j].grade;
	}

	gpa = total / float(i);
}

void student::show() {
	cout << "이름: " << st_name << endl;
	cout << "학번: " << id << endl;
	cout << fixed;
	cout.precision(2);
	cout << "GPA: " << gpa << "/4.3" << endl;
	cout << "상태: " << status << endl;

	for (int j = 0; j < i; j++) {
		cout << course[j].semester_offered << "학기\t";
		cout << course[j].name << "\t" << course[j].grade << endl;
	}
	cout << endl;
}