/*
 Aim = To find the sum of odd numbers upto n numbers.
 Author = Mehdiali (MK).
 Date = 23 / January / 2024 - 06:19 PM.
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
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    cout << "\nSum of ODD numbers = " << sum;

    return 0;
}