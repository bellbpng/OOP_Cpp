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

rect polar_to_rect(polar& p);
polar rect_to_polar(rect& r);

int main()
{
	rect r;
	polar p;
	rect temp;

	cout << "(x,y)? ";
	cin >> r.x >> r.y;
	cout << "(distance, angle(degree))? ";
	cin >> p.distance >> p.angle;
	cout << endl;
	p.angle *= PI / 180; // 라디안으로 변환

	temp = r;
	r = polar_to_rect(p);
	p = rect_to_polar(temp);

	p.angle *= 180 / PI;

	cout << "(x,y) -> (distance, angle)" << endl;
	cout << "(" << p.distance << ", " << p.angle << ")" << endl << endl;
	cout << "(disatnce, angle) -> (x,y)" << endl;
	cout << "(" << r.x << ", " << r.y << ")" << endl;

	return 0;
}

rect polar_to_rect(polar& p)
{
	rect result;
	result.x = p.distance * cos(p.angle);
	result.y = p.distance * sin(p.angle);

	return result;
}

polar rect_to_polar(rect& r)
{
	polar result;
	result.distance = sqrt(r.x * r.x + r.y * r.y);
	result.angle = atan(r.y / r.x);

	return result;
}