/*
 Aim = To demonstrate the two dimensional vectors.
 Author = Mehdiali (MK).
 Date = 21 / January / 2024 - 01:20 PM.
*/

#include <iostream>
#include <vector> // Don't forget to add thsi hearder file.
using namespace std;

int main()
{
    vector<vector<int>> movieRatings{
        {1, 2, 3, 4},
        {4, 5, 2, 3},
        {2, 3, 4, 1},
    };

    cout << movieRatings.at(0).at(0) << endl;
    cout << movieRatings.at(0).at(1) << endl;
    cout << movieRatings.at(0).at(2) << endl;
    cout << movieRatings.at(0).at(3) << endl;

    return 0;
}