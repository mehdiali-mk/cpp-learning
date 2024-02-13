/*
 Aim = To delete the element from an array.
 Author = Mehdiali (MK).
 Date = 13 / February / 2024 - 6:37 PM.
*/

#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int size, i;

    cout << "Enter the size of an array = ";
    cin >> size;

    int arr[size];

    for (i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    char choice{};
    do
    {
        int element{};
        cout << "\nEnter the element to delete = ";
        cin >> element;

        for (i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                break;
            }
        }

        int position = i;

        if (position == size)
        {
            cout << "\nPlease enter the valid element to delete.";
        }
        else
        {
            for (i = position; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
        }

        size -= 1;

        for (i = 0; i < size; i++)
        {
            cout << "\nArr[" << i << "] = " << arr[i];
        }

        cout << "\nDo you want to delete another element (Y / N) = ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}