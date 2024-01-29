/*
 Aim = To demonstrate the for loop with comma operator.
 Author = Mehdiali (MK).
 Date = 29 / January / 2024 - 03:47 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i{1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << " + " << j << " = " << (i + j) << endl;
    }
    return 0;
}