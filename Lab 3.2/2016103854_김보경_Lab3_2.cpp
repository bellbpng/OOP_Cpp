#include <iostream>
#include <climits>

using namespace std;

int main()
{
	short s = SHRT_MAX;
	int x = INT_MAX;
	cout << "short max : " << s << endl;
	cout << "int max : " << x << endl;
	cout << "int overflowed : " << x + 3 << endl;

	return 0;
}