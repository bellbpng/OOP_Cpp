#include <iostream>

using namespace std;

template <typename T>
T find_max(T arr[], int size) {
	T max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}

int main()
{
	int arr[3] = { 15,4,-3 };
	double db[3] = { 3.7, -29.5, 90.32 };

	cout << "max integer: " << find_max<int>(arr, 3) << endl; // int 동작
	cout << "max double: " << find_max<double>(db, 3) << endl; // double 동작
	
	return 0;
}
