/*
 Aim = To Display the grade based on marks.
 Author = Mehdiali (MK).
 Date = 19 / January / 2024 - 03:38 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int marks{};

    cout << "Enter the marks = ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << endl
             << "Your Grade = A+";
    }
    else if (marks >= 75 && marks <= 89)
    {
        cout << endl
             << "Your Grade = A";
    }
    else if (marks >= 60 && marks <= 74)
    {
        cout << endl
             << "Your Grade = B";
    }
    else if (marks >= 35 && marks <= 59)
    {
        cout << endl
             << "Your Grade = C";
    }
    else if (marks >= 0 && marks <= 34)
    {
        cout << endl
             << "Your Grade = Fail";
    }
    else
    {
        cout << endl
             << "Please ENTER the correct marks.";
    }

    return 0;
}
