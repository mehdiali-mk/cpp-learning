/*
Aim = To find the number of ones in binary digits.
Author = Mehdiali (MK).
Date = 15 / Apr / 2024 - 05:01 PM.
*/

#include <iostream>
using namespace std;
#include <bitset>
using namespace std;

int numberOfOnes(int number)
{
    int onesCount = 0;
    while (number)
    {
        number = number & (number - 1);
        onesCount++;
    }
    return onesCount;
}

int main()
{

    int number{};
    cout << "\nEnter the number = ";
    cin >> number;

    bitset<sizeof(int) * 2> binary(number);

    // Display the binary representation
    cout << "\nBinary representation of " << number << " is: " << binary;

    int ones = numberOfOnes(number);

    cout << "\nNumber of ones in binary = " << ones << endl;

    return 0;
}