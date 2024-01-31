/*
 Aim = To demonstrate nested loop.
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 04:35 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for (int i{1}; i <= 10; i++)
    {
        for (int j{1}; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "-----------" << endl;
    }

    return 0;
}