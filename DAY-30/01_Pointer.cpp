/*
 Aim = To declare and initialize a pointer.
 Author = Mehdiali (MK).
 Date = 14 / February / 2024 - 8:16 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int num{40};
    int *ptr{&num};
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "&ptr = " << &ptr << endl
         << endl;
    int *ptr1;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "&ptr1 = " << &ptr1 << endl;
    cout << "sizeof ptr1 = " << sizeof ptr1 << endl;

    ptr1 = nullptr;
    cout << "ptr1 = " << ptr1 << endl;

    return 0;
}