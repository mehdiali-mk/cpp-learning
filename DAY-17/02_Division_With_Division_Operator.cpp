/*
 Aim = C Program to Divide Two Numbers without Division Operator
 Author = Mehdiali (MK).
 Date = 01 / February / 2024 - 10:52 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{}, divisionNumber{}, divisionResult{}, i{};

    cout << "Enter the number = ";
    cin >> number;

    cout << "How many time do you want to divide = ";
    cin >> divisionNumber;

    while (number >= divisionNumber)
    {
        number -= divisionNumber;
        i++;
    }

    cout << "\nDivision = " << i;

    return 0;
}