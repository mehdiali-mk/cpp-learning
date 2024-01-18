/*
Aim = To find the cube of a number.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 03:52 PM.
*/

#include <iostream>

using namespace std;

int main()
{
    int num, cube;

    cout << "Enter the number = ";
    cin >> num;

    cube = num * num * num;

    cout << endl
         << "Cube of " << num << " = " << cube << endl;

    return 0;
}