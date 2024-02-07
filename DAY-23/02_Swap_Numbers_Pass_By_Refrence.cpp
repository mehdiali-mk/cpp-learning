/*
 Aim = To demonstrate pass by reference as an argument in function.
 Author = Mehdiali (MK).
 Date = 07 / February / 2024 - 05:40 PM.
*/

#include <iostream>
using namespace std;

void swapValues(int &a, int &b);
int main()
{
    int num1, num2;

    cout << "Enter the 1st number = ";
    cin >> num1;

    cout << "Enter the 2nd number = ";
    cin >> num2;

    swapValues(num1, num2);
    cout << "\n\n1st number = " << num1 << "\n2nd number = " << num2;
    return 0;
}

void swapValues(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}