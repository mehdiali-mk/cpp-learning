/*
Aim = Find the area of Room.
Author = Mehdiali (MK).
Date = 17 / January / 2024 - 10:45 PM.
*/

#include <iostream>

using namespace std;

int main()
{

    int roomLength{}, roomBreadth{};

    cout << "Enter the Length of room in meter = ";
    cin >> roomLength;

    cout << "Enter the Breadth of room in meter = ";
    cin >> roomBreadth;

    cout << "The area of the room is " << roomLength * roomBreadth << " square meter." << endl;

    return 0;
}