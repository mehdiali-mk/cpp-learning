/*
 Aim = To skip the multiple of 3;
 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 03:52 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << "*  ";
            continue;
        }
        cout << i << "  ";
    }

    return 0;
}