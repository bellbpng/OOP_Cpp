#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word = "?ate";
	char ch;
	ch = 'a';
	while (word != "mate")
	{
		cout << word << endl;
		word[0] = ch;
		ch++;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}