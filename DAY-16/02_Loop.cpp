/*
 Aim = To demonstrate for loop and vector.
 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 04:38 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numberOfItems{};

    cout << "Enter the number of items = ";
    cin >> numberOfItems;

    vector<int> data{};

    for (int i{0}; i < numberOfItems; i++)
    {
        int dataItem{};

        cout << "Enter the data for [" << i << "] = ";
        cin >> dataItem;

        data.push_back(dataItem);
    }

    // for (int i{0}; i < numberOfItems; i++)
    // {
    //     cout << "Vector [" << i << "] = " << data[i] << endl;
    // }

    cout << "\n\nDisplay Histogram:\n";
    for (auto val : data)
    {
        for (int i = 1; i <= val; i++)
        {
            if (i % 5 == 0)
            {
                cout << "/";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}