/*
 Aim = To demonstrate the vectors.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 12:55 PM.
*/

#include <iostream>
#include <vector> // Don't forget to add thsi hearder file.
using namespace std;

int main()
{
    // vector <char> vowels; // it is an empty vector.
    // vector<char> vowels(5); // Here 5 indicates the size of vectors and all the 5.
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'}; // Here we declare and assign values to the vector.

    cout << "1st vowel = " << vowels[0] << endl;
    cout << "3rd vowel = " << vowels.at(2) << endl;

    return 0;
}