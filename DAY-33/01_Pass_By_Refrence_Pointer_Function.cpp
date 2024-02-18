/*
 Aim = To demonstrate the pass by pointers in functions.
 Author = Mehdiali (MK).
 Date = 17 / February / 2024 - 08:07 PM.
*/

#include <iostream>
using namespace std;

void doubleNumber(int *ptr)
{
    *ptr *= 2;
}

int main()
{

    int number{10};
    int *ptr = &number;

    cout << "Number = " << number << endl;
    doubleNumber(&number);
    cout << "Double Number = " << number << endl;
    doubleNumber(ptr);
    cout
        << "Double Number = " << number << endl;
    // cout << "Double Number = " << doubleNumber(ptr) << endl;

    return 0;
}
