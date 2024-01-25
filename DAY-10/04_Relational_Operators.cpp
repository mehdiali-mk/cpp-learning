/*
 Aim = To demonstrate the relational operators.
 Author = Mehdiali (MK).
 Date = 25 / January / 2024 - 08:27 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1{}, num2{};

    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2nd number = ";
    cin >> num2;
    cout << boolalpha;
    cout << num1 << " > " << num2 << " = " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " = " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " = " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " = " << (num1 <= num2) << endl;
    return 0;
}