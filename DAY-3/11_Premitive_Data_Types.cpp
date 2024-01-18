/*
Aim = To demonstrate primitive data types.
Author = Mehdiali (MK).
Date = 18 / January / 2024 - 02:15 PM.
*/

#include <iostream>

using namespace std;

int main()
{

    char gender{'M'};

    cout << "Your Gender = " << gender << endl;

    int age{25};

    cout << "Your Age = " << age << endl;

    float yourMarks{62.4};
    cout << "Your Marks = " << yourMarks << endl;

    bool isActive = true;

    cout << "Your Status = " << isActive << endl;

    long peopleInAhmedabad{20610000};

    cout << "People in Ahmedabad = " << peopleInAhmedabad << endl;

    long long peopleOnEarth{76'00'00'00'000}; // C++ Allows black tick (') to seperate digits.

    cout << "People on Earth = " << peopleOnEarth << endl;

    long long distanceToAlphaCentauri{96'41'00'00'00'000};
    cout << "Distance to Alpha Centauri = " << distanceToAlphaCentauri << " in kilo-meters." << endl;

    double PI{3.14159};
    cout << "The value of PI = " << PI << endl;

    long double largeAmount{2.5e120};
    cout << largeAmount << " very large amount." << endl;

    return 0;
}