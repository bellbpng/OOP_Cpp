#ifndef __Student__
#define __Student__

class Student {
private:
	char NAME[20];
	char ID[20];
	float GPA;
	char STATUS[20];
public:
	Student(const char* fname, const char* fid); // 생성자
	void show(); // 학생 정보 출력
	void update_gpa(float x); // 학생의 평점을 입력 받아 반영
	void update_status(const char* fstatus); // 학생의 상태를 입력 받아 반영
};

#endif
