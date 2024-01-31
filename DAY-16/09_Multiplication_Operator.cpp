/*
 Aim = C Program to Multiply Two Numbers without Multiplication Operator.
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 06:31 PM.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number{}, multiply{}, resultOfMultiplication{};

    cout << "Enter the number to multiply = ";
    cin >> number;

    cout << "How many times do you want to multiply = ";
    cin >> multiply;

    for (int i = 1; i <= multiply; i++)
    {
        resultOfMultiplication += number;
    }

    cout << "\n"
         << number << " * " << multiply << " = " << resultOfMultiplication;

    return 0;
}
