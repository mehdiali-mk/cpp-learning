/*
 Aim = To demonstrate the boolalpha results.
 Author = Mehdiali (MK).
 Date = 25 / January / 2024 - 08:08 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    char char1{}, char2{};
    bool equalResult{}, notEqualResult{};

    cout << "Enter the 2 number: ";
    cin >> char1 >> char2;

    cout << boolalpha; // this line helps to print the true or false instead of 0 or 1.
    equalResult = char1 == char2;
    notEqualResult = char1 != char2;

    cout << "\nEqual Result = " << equalResult << endl;
    cout << "Not Equal Result = " << notEqualResult << endl;
    return 0;
}