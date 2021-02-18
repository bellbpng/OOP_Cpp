#include <iostream>

using namespace std;

int main()
{
	double score[5] = { 40.2, 80.5, 65.7, 95.3, 77 };
	double total = 0, avg;
	int i;

	for (i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 학생 점수 : " << score[i] << endl;
		total += score[i];
	}

	avg = total / 5;
	cout << "점수의 총합 : " << total << endl;
	cout << "점수의 평균 : " << avg << endl;

	return 0;
}