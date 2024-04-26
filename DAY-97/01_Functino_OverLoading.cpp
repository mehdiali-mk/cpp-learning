/*
Aim = Function overloading.
Author = Mehdiali (MK).
Date = 26 / Apr / 2024 - 05:55 PM.
*/

#include <iostream>
using namespace std;

class student
{
public:
    void myFunction()
    {
        cout << "\nI am a function without argument.";
    }
    void myFunction(int num)
    {
        cout << "\nI am a function with int argument.";
    }
    void myFunction(double num)
    {
        cout << "\nI am a function with double argument.";
    }
};

int main()
{
    student s1;

    s1.myFunction();
    s1.myFunction(440);
    s1.myFunction(91.3);

    return 0;
}