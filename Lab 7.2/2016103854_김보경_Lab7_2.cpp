#include <iostream>

using namespace std;

int arr_max(int arr[], int size);
int arr_min(int arr[], int size);
double arr_average(int arr[], int size);

int main()
{
	int arr[10], size;
	size = 10;
	cout << "정수 10개 입력: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "최대값: " << arr_max(arr, size) << endl;
	cout << "최소값: " << arr_min(arr, size) << endl;
	cout << "평균값: " << arr_average(arr, size) << endl;

	return 0;
}

int arr_max(int arr[], int size)
{
	int i, max = arr[0];

	for (i = 1; i < size; i++) {
		if (max < arr[i]) max = arr[i];
	}

	return max;
}

int arr_min(int arr[], int size)
{
	int i, min = arr[0];

	for (i = 1; i < size; i++) {
		if (min > arr[i]) min = arr[i];
	}

	return min;
}

double arr_average(int arr[], int size)
{
	double sum = 0;
	int i;
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	
	return sum / size;
}
