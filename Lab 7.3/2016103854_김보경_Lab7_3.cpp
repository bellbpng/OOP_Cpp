#include <iostream>
#define ROW 3
#define COL 4

using namespace std;

int* sum(const int data[][COL], int size);

int main()
{
	int data[ROW][COL] = {
		{1,2,3,4},
		{9,2,4,6},
		{4,2,6,8}
	};
	int* ps;
	ps = sum(data, ROW);
	cout << "각 행의 합" << endl;
	for (int i = 0; i < ROW; i++) {
		cout << i + 1 << "행: " << ps[i] << endl;
	}

	delete[]ps;

	return 0;
}

int* sum(const int data[][COL], int size)
{
	int* total = new int[size];
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < COL; j++) {
			temp += data[i][j];
		}
		total[i] = temp;
		temp = 0;
	}
	return total;
}