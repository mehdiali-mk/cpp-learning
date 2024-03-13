/*
 Aim = To find all the prime numbers between range.
 Author = Mehdiali (MK).
 Date = 13 / March / 2024 - 06:59 AM.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num);

int main()
{
    int lowerLimit, upperLimit;

    cout << "Enter the lower limit = ";
    cin >> lowerLimit;
    cout << "Enter the upper limit = ";
    cin >> upperLimit;

    for (int i = lowerLimit; i <= upperLimit; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    if (num == 1)
        return false;
    return true;
}