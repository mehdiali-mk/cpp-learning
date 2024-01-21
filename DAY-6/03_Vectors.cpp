/*
 Aim = To demonstrate the vectors.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 01:13 PM.
*/

#include <iostream>
#include <vector> // Don't forget to add thsi hearder file.
using namespace std;

int main()
{
    vector<int> testScore(3, 0);
    int anotherScore;
    cout << "Enter another test score = ";
    cin >> anotherScore;

    testScore.push_back(anotherScore);

    cout << "Enter another test score = ";
    cin >> anotherScore;

    testScore.push_back(anotherScore);
    cout << "Size of vector = " << testScore.size();

    return 0;
}