/*
 Aim = To enter the number until multiple of 7.
 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 03:44 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int number{};

    do
    {
        cout << endl
             << "Enter the number 'Multiple of 7' = ";
        cin >> number;
    } while (number % 7 != 0);

    return 0;
}