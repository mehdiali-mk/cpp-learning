/*
 Aim = Sum of first N even number.
 Author = Mehdiali (MK).
 Date = 26 / January / 2024 - 06:03 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int num{}, sum{0};

    cout << "Enter the number = ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        i % 2 == 0 ? sum += i : sum;
    }

    cout << "\nSum of Even numbers = " << sum;
    return 0;
}