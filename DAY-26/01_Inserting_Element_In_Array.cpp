/*
 Aim = To insert an element to an array.
 Author = Mehdiali (MK).
 Date = 10 / February / 2024 - 10:18 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int size{}, i{}, j{};
    int array[100];
    int element{};
    int position{};
    int count{1};
    char choice{};

    cout << "Enter the size of an array (< 100) = ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the array[" << i << "] = ";
        cin >> array[i];
    }

    do
    {
        count = 1;
        cout << "\nEnter the element to add = ";
        cin >> element;
        cout << "Enter the position to add = ";
        cin >> position;

        for (i = size - 1; i >= position; i--)
        {
            array[i + count] = array[i];
        }
        array[position] = element;
        size += count;
        for (i = 0; i < size; i++)
        {
            cout << "\nArray[" << i << "] = " << array[i];
        }

        cout << "\n\nDo you want to add another element? (Y / N) = ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}