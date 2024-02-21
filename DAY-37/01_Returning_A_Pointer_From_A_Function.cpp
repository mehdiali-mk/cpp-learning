/*
 Aim = C Program to Find Sum of All Odd and Even Numbers Separately from an Array.
 Author = Mehdiali (MK).
 Date = 21 / February / 2024 - 08:11 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int size{}, i{}, sumOfEven{}, sumOfOdd{};

    cout << "Enter the size of an array = ";
    cin >> size;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "] = ";
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            sumOfEven += arr[i];
        }
        else
        {
            sumOfOdd += arr[i];
        }
    }

    cout << "\nSum of Even numbers = " << sumOfEven;
    cout << "\nSum of Odd numbers = " << sumOfOdd;

    return 0;
}