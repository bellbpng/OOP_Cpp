#include <iostream>
#include <string>

using namespace std;

int main()
{
	char lower[] = "qqwe;)*kljklasd123@#ASDdoew";
	int len = strlen(lower);
	int diff = 'a' - 'A';
	int i;

	cout << lower << endl;

	i = 0;
	while (i < len) {
		if ((lower[i] >= 97)&&(lower[i] <= 122)) {
			lower[i] -= diff;
		}
		i++;
	}
	cout << lower << endl;

	return 0;
}