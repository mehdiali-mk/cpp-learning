/*
 Aim = To demonstrate the pass by pointers in functions.
 Author = Mehdiali (MK).
 Date = 17 / February / 2024 - 08:07 PM.
*/

#include <iostream>
using namespace std;

void swapNumbers(int *num1Ptr, int *num2Ptr)
{
    *num1Ptr = *num1Ptr + *num2Ptr;
    *num2Ptr = *num1Ptr - *num2Ptr;
    *num1Ptr = *num1Ptr - *num2Ptr;
}

int main()
{

    int num1{10}, num2{20};

    cout << "X = " << num1 << ", Y = " << num2 << endl;
    swapNumbers(&num1, &num2);
    cout << "X = " << num1 << ", Y = " << num2 << endl;

    return 0;
}
