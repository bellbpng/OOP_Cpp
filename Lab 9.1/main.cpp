#include "free_throws.h"
#include <iostream>

using namespace std;

int main()
{
	free_throws one = { "Ifelsa Branch", 13, 14 };
	free_throws two = { "Andor Knott", 10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper", 5, 9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };
	//no initializaion
	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);

	//use return value as argument
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	//use return value in assignment
	dup = accumulate(team, five);
	cout << "Displaying team:\n";
	display(team);
	cout << "Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);

	//ill-advised assignment
	accumulate(dup, five) = four;
	cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);

	return 0;
}