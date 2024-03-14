/*
 Aim = To find Pythagoras Triplet.
 Author = Mehdiali (MK).
 Date = 14 / March / 2024 - 07:16 AM.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool check(int num1, int num2, int num3);

int main()
{
    int num1{}, num2{}, num3{};

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;
    cout << "Enter the 3rd number = ";
    cin >> num3;

    if (check(num1, num2, num3))
    {
        cout << "\nYes, these numbers are Pythagoras Triplet";
    }
    else
    {
        cout << "\nNo, these numbers are not Pythagoras Triplet";
    }
}

bool check(int num1, int num2, int num3)
{
    int a = max(num1, max(num2, num3));
    int b{}, c{};

    if (a == num1)
    {
        b = num2;
        c = num3;
    }
    else if (a == num2)
    {
        b = num1;
        c = num3;
    }
    else
    {
        b = num1;
        c = num2;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}