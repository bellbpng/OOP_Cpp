#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

struct rect {
	double x;
	double y;
};

struct polar {
	double distance;
	double angle;
};

rect polar_to_rect(polar* p);
polar rect_to_polar(rect* r);

int main()
{
	rect r, p_t_r;
	polar p, r_t_p;
	double degree;

	cout << "반지름과 각도(degree) 입력: ";
	cin >> p.distance >> p.angle;

	degree = p.angle;
	p.angle *= PI / 180; // degree를 radian으로 변환

	cout << "x,y좌표 입력: ";
	cin >> r.x >> r.y;
	
	r_t_p = rect_to_polar(&r);
	p_t_r = polar_to_rect(&p);
	r_t_p.angle *= 180 / PI; // radian을 degree로 변환

	cout << "\n결과 출력\n";
	cout << "(r,degree) -> (x,y)" << endl;
	cout << "(" << p.distance << ", " << degree << ") -> (" << p_t_r.x << ", " << p_t_r.y << ")" << endl;
	
	cout << "(x,y) -> (r,degree)" << endl;
	cout << "(" << r.x << ", " << r.y << ") -> (" << r_t_p.distance << ", " << r_t_p.angle << ")" << endl;

	return 0;
}

rect polar_to_rect(polar* p) {
	rect trans;

	trans.x = (p->distance) * cos((p->angle));
	trans.y = (p->distance) * sin((p->angle));

	return trans;
}

polar rect_to_polar(rect* r) {
	polar trans;
	double square = (r->x * r->x) + (r->y * r->y);

	trans.angle = atan((r->y) / (r->x));
	trans.distance = sqrt(square);

	return trans;
}