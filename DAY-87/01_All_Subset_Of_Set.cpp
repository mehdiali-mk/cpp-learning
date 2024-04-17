/*
Aim = To find all the subset of a give set.
Author = Mehdiali (MK).
Date = 16 / Apr / 2024 - 06:19 PM.
*/

#include <iostream>
using namespace std;

void displaySubset(char arr[], size_t size)
{
    cout << "\n\n";
    for (int i = 0; i < (1 << size); i++)
    {
        cout << "{";
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                cout << " " << arr[j] << " ";
            }
        }
        cout << "}" << endl;
    }
}

int main()
{

    size_t size{};
    cout << "\nEnter the size = ";
    cin >> size;

    char arr[size];

    printf("\nEnter the elements of an array:\n");
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    displaySubset(arr, size);
    return 0;
}