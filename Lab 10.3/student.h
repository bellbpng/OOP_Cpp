#ifndef __student__
#define __student__
#define MAX 100
#include <string>

struct lecture {
	string name; // 강의 이름
	string semester_offered; // 수강시기 ex) 2020-1, 2020-2
	float grade;
};

class student {
private:
	string st_name;
	string id;
	float gpa;
	string status;
	lecture course[MAX];
	int i = 0; // 이수한 강의 배열 위치정보 저장
public:
	student();
	student(string fname, string fid);
	void update_status(string fstatus);
	void update_gpa(string cname, string cseme, const float cgrade);
	void show();
};

#endif