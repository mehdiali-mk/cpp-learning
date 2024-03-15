/*
 Aim = Binary to Decimal Conversion.
 Author = Mehdiali (MK).
 Date = 14 / March / 2024 - 07:02 AM.
*/

#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int num);

int main()
{
    int num;
    cout << "Enter the binary number = ";
    cin >> num;

    cout << "\nDecimal = " << binaryToDecimal(num);
}

int binaryToDecimal(int num)
{
    int result = 0;
    int power = 1;
    int digit{};

    while (num > 0)
    {
        digit = num % 10;
        result += digit * power;
        power *= 2;
        num = num / 10;
    }
    return result;
}