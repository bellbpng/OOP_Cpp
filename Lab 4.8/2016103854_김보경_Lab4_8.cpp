#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> yams(3); 
	// vector class yams을 3개 생성 후(배열형태) 0으로 초기화
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	
	vector<int> yamcosts = { 20,30,5 };
	// vecotr class yamcosts를 생성하고 20,30,5로 초기화
	// yams 선언과 초기화와 방법은 다르지만 결과는 같은 것으로 보임

	/* yams과 yamcosts 차이점을 확인해 본 코드
	cout << &yams << endl;
	cout << &yams[0] << endl;
	cout << &yams[1] << endl;
	cout << &yams[2] << endl;
	cout << "######" << endl;
	cout << &yamcosts << endl;
	cout << &yamcosts[0] << endl;
	cout << &yamcosts[1] << endl;
	cout << &yamcosts[2] << endl;
	cout << "#######" << endl;*/

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams vector = " << sizeof yams;
	cout << " bytes.\n";
	// 16bytes 결과가 출력.. why? => 이미 정해진 class vector의 크기가 16bytes 인걸로 판단.
	
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n\n";
	// 자료형 int의 크기로 4bytes
	
	cout << "Size of yamcosts vector = " << sizeof yamcosts;
	cout << " bytes.\n";

	cout << "Size of one element = " << sizeof yamcosts[0];
	cout << " bytes.\n";

	return 0;
}