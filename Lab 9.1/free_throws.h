#ifndef __FREE_H__
#define __FREE_H__
#include <iostream>
struct free_throws {
	std::string name;
	int made = 0;
	int attempts = 0;
	float percent = 0;
};

void display(const free_throws&ft);
void set_pc(free_throws&ft);
free_throws& accumulate(free_throws&target, const free_throws& source);

#endif
