/*
Aim = Find the area and circumference of a circle.
Author = Mehdiali (MK).
Date = 17 / January / 2024 - 03:24 PM.
*/

#include <iostream>

using namespace std;

#define PI 3.14

int main()
{
    int radius;

    cout << "Enter the radius = ";
    cin >> radius;

    cout << endl
         << "Area = " << PI * radius * radius << endl;

    cout << "Circumference = " << 2 * PI * radius;

    return 0;
}