#include <iostream>

using namespace std;

struct mycomplex {
	double x;
	double y;
};

void conjugate(mycomplex arr[], int size);

int main()
{
	mycomplex arr[3];
	arr[0].x = 3, arr[0].y = -4;
	arr[1].x = 2.5, arr[1].y = 3.2;
	arr[2].x = -7, arr[2].y = -2.6;
	
	conjugate(arr, 3);

	cout << "변환한 복소수 출력" << endl;
	for (int i = 0; i < 3; i++) {
		if (arr[i].y < 0) {
			cout << arr[i].x << arr[i].y << "i" << endl;
		}
		else {
		cout << arr[i].x << "+" << arr[i].y << "i" << endl;
}
	}
}

void conjugate(mycomplex arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i].y = 0 -arr[i].y;
	}
}