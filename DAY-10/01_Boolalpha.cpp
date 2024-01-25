/*
 Aim = To demonstrate the boolalpha results.
 Author = Mehdiali (MK).
 Date = 25 / January / 2024 - 08:06 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1{}, num2{};
    bool equalResult{}, notEqualResult{};

    cout << "Enter the 2 number: ";
    cin >> num1 >> num2;

    cout << boolalpha; // this line helps to print the true or false instead of 0 or 1.
    equalResult = num1 == num2;
    notEqualResult = num1 != num2;

    cout << "\nEqual Result = " << equalResult << endl;
    cout << "Not Equal Result = " << notEqualResult << endl;
    return 0;
}