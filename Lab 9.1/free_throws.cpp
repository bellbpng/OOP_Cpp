#include <iostream>
#include "free_throws.h"
#include <string>

using namespace std;

void display(const free_throws& ft)
{
	cout << "Name: " << ft.name << endl;
	cout << "  Made: " << ft.made << '\t';
	cout << "Attempts: " << ft.attempts << '\t';
	cout << "Percent: " << ft.percent << endl;
}
//°³ÀÎ È®·ü °è»ê
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0) {
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	}
	else {
		ft.percent = 0;
	}
}
//ÆÀ È®·ü ´©Àû
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}