/*
 Aim = To demonstrate the array.
 Author = Mehdiali (MK).
 Date = 20 / January / 2024 - 02:08 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    double temperature[]{98.5, 68.5, 29.3, 101.2};
    cout << "\nFirst temperature = " << temperature[0] << endl;
    temperature[0] = 100.68;
    cout << "First temperature = " << temperature[0] << endl;

    return 0;
}