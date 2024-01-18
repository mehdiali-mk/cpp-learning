/*
Aim = To find the area of rectangle.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 09:31 AM.
*/

#include <iostream>

using namespace std;

int main()
{
    int length{};
    int breadth{};
    int area{};

    cout << "Enter the length in meter = ";
    cin >> length;
    cout << "Enter the breadth in meter = ";
    cin >> breadth;

    area = length * breadth;

    cout << endl
         << "The area = " << area;
    return 0;
}