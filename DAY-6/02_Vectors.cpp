/*
 Aim = To demonstrate the vectors.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 01:01 PM.
*/

#include <iostream>
#include <vector> // Don't forget to add thsi hearder file.
using namespace std;

int main()
{
    // vector<int> testScore(3);     // here we declare a vector of 3 size and all elements have zero value.
    // vector<int> testScore(3, 10); // Here we declare a vector of 3 size and all elements have 10 value.
    vector<int> testScore{100, 98, 85};

    // Access Vector Elements using array syntax.
    cout << testScore[0] << endl;
    cout << testScore[1] << endl;
    cout << testScore[2] << endl;

    // Access Vector Elements using vector syntax.
    cout << testScore.at(0) << endl;
    cout << testScore.at(1) << endl;
    cout << testScore.at(2) << endl
         << endl;

    cout << "The size of testScore vector = " << testScore.size() << endl;

    // Entering the value to the vector elements.
    cout << "Enter the " << testScore.size() << "  testScores = ";
    cin >> testScore.at(0);
    cin >> testScore.at(1);
    cin >> testScore.at(2);

    // Access Vector Elements using vector syntax.
    cout << testScore.at(0) << endl;
    cout << testScore.at(1) << endl;
    cout << testScore.at(2) << endl;

    return 0;
}