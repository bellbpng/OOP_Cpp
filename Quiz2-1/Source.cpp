#include <iostream>

using namespace std;

void swap_three(int& A, int& B, int& C);

int main()
{
	int A, B, C;
	A = 4;
	B = 5;
	C = 6;

	cout << "###first###" << endl;
	cout << A << " " << B << " " << C << endl << endl;

	swap_three(A, B, C);

	cout << "###after swapping###" << endl;
	cout << A << " " << B << " " << C << endl;

	return 0;
}

void swap_three(int& A, int& B, int& C) {
	int temp1, temp2;
	temp1 = A;
	temp2 = B;
	A = C;
	B = temp1;
	C = temp2;
}