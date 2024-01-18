/*
Aim = To convert the celsius to fahrenheit and kelvin.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 11:42 AM.
*/

#include <iostream>
using namespace std;

int main()
{
    float celsius{}, fahrenheit{}, kelvin{};

    cout << "Enter the celsius = ";
    cin >> celsius;

    fahrenheit = ((celsius * 180 / 100) + 32);
    kelvin = ((celsius * 100 / 100) + 273);

    cout << endl
         << "Fahrenheit = " << fahrenheit << endl
         << "Kelvin = " << kelvin << endl;

    return 0;
}