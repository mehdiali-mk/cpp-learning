/*
 Aim = To demonstrate the explict type conversion.
 Author = Mehdiali (MK).
 Date = 24 / January / 2024 - 06:08 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1{10}, num2{20}, num3{20};
    int total{}, count{3};
    double average{};

    total = num1 + num2 + num3;
    // average = total / count; // It displays 16.
    average = static_cast<double>(total) / count;
    cout << "\nAverage = " << average << endl
         << endl;
    return 0;
}