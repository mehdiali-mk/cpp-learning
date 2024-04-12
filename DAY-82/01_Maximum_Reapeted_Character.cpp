/*
Aim = To find the maximum repeated character form the given string.
Author = Mehdiali (MK).
Date = 10 / April / 2024 - 12:04 PM.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;

    cout << "\nEnter the string to check = ";
    getline(cin, str);

    int frequency[26];

    for (size_t i = 0; i < 26; i++)
    {
        frequency[i] = 0;
    }

    for (size_t i = 0; i < str.length(); i++)
    {
        frequency[str[i] - 'a']++;
    }

    char answer = 'a';
    int maximumFrequency = 0;

    for (size_t i = 0; i < 26; i++)
    {
        if (frequency[i] > maximumFrequency)
        {
            maximumFrequency = frequency[i];
            answer = i + 'a';
        }
    }

    cout << "\n\nMaximum Frequency = " << maximumFrequency << "\nCharacter = " << answer << endl;
    return 0;
}