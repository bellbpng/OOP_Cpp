#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int len = 0;
	int j = 0;
	string p;
	cout << "입력: ";
	getline(cin, p);
	len = p.length();

	while (1) {
		if (!(isalpha(p[j]))) {
			j++;
		}
		else break;
	}

	cout << "출력: ";

	if (islower(p[j])) {
		p[j] = toupper(p[j]);
	}
	cout << p[j];

	for (int i = j + 1; i < len; i++) {
		if (isupper(p[i])) {
			p[i] = tolower(p[i]);
		}
		if (!(isalpha(p[i]))) {
			p[i] = ' ';
		}
		cout << p[i];
	}
	return 0;
}