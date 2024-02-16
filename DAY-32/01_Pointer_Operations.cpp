/*
 Aim = To demonstrate the operations on pointer.
 Author = Mehdiali (MK).
 Date = 16 / February / 2024 - 04:34 PM.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int score[] = {100, 98, 95, 31, -1};
    int *scorePtr = score;

    while (*scorePtr != -1)
    {
        cout << "\nscorePtr = " << *scorePtr;
        scorePtr++;
    }
    cout << "\n\n--------------";

    scorePtr = score;
    while (*scorePtr != -1)
    {
        cout << "\nscorePtr = " << *scorePtr++ << endl;
    }

    string s1{"Mehdiali"};
    string s2{"Mehdiali"};
    string s3{"MK"};

    string *strPtr1{&s1};
    string *strPtr2{&s2};
    string *strPtr3{&s1};

    cout << boolalpha;
    cout << strPtr1 << " == " << strPtr2 << " = " << (strPtr1 == strPtr2) << endl;
    cout << strPtr1 << " == " << strPtr3 << " = " << (strPtr1 == strPtr3) << endl;

    cout << *strPtr1 << " == " << *strPtr2 << " = " << (*strPtr1 == *strPtr2) << endl;
    cout << *strPtr1 << " == " << *strPtr3 << " = " << (*strPtr1 == *strPtr3) << endl;

    strPtr3 = &s3;

    cout << *strPtr1 << " == " << *strPtr3 << " = " << (*strPtr1 == *strPtr3) << endl;

    return 0;
}