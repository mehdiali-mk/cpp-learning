/*
 Aim = To demonstrate the range based for loop.
 Author = Mehdiali (MK).
 Date = 29 / January / 2024 - 06:45 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<double> temps{87.2, 77.1, 80.0, 72.5};

	double averageTemp{};
	double runningSum{};

	for (auto temp : temps)
		runningSum += temp;

	averageTemp = runningSum / temps.size();

	cout << "\nAverage = " << averageTemp << endl
		 << endl;

	return 0;
}