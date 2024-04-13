/*
Aim = To find the number is the power of 2 or not.
Author = Mehdiali (MK).
Date = 13 / Apr / 2024 - 08:39 PM.
*/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int number)
{
    return (number && !(number & number - 1));
}

int main()
{

    // Variable Decleration.
    int number{};

    cout << "\nEnter the number = ";
    cin >> number;

    bool result = isPowerOfTwo(number);

    if (result == 0)
    {
        cout << "\nNo, " << number << " is not the power of 2.\n\n";
    }
    else
    {
        cout << "\nYes, " << number << " is the power of 2.\n\n";
    }

    return 0;
}