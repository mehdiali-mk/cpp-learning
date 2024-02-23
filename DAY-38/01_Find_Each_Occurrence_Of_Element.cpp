/*
 Aim = To Find Occurrences of Each Element of an Array
 Author = Mehdiali (MK).
 Date = 22 / February / 2024 - 05:57 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of an array = ";
    cin >> size;

    int arr[size], visited[size], count;

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        visited[i] = 0;
    }

    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        cout << arr[i] << " found " << count << " times in an array." << endl;
    }

    return 0;
}