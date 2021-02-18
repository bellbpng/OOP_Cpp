#include <iostream>

using namespace std;
const int Cities = 6;
const int Years = 10;

int main()
{
	const char* cities[Cities] = {
		"Seoul  ",
		"Busan  ",
		"Incheon",
		"Daejeon",
		"Daegu  ",
		"Gwangju"
	};

	int rain[Cities][Years] = {
		{2043, 2043, 1646, 1403, 809, 792, 992, 1233, 1284, 891},
		{1442, 1479, 1983, 1130, 1693, 1397, 1760, 1014, 1779, 1623},
		{1778, 1725, 1415, 1187, 788, 652, 864, 1029, 1134, 919},
		{1420, 1943, 1409, 1120, 1118, 823, 1228, 1127, 1542, 984},
		{1204, 1430, 1190, 996, 1072, 908, 1227, 664, 1298, 996},
		{1573, 1300, 1627, 1245, 1290, 1050, 1482, 937, 1428, 1086}
	};

	cout << "amount of rain fall for 2010 - 2019\n\n";
	for (int city = 0; city < Cities; ++city) {
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year) {
			cout << rain[city][year] << "\t";
		}
		cout << endl;
	}
	return 0;
}