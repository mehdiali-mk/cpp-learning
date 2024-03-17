/*
 Aim = Linear Search in Array.
 Author = Mehdiali (MK).
 Date = 17 / March / 2024 - 11:59 AM.
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void insertArrayElements(int[], size_t);
void elementToSearch(int[], size_t);
int linearSearch(int[], size_t, int);

int main()
{
    size_t arraySize;
    cout << "Enter the size of an array = ";
    cin >> arraySize;

    // array Declaration.
    int array[arraySize];

    // Calling Function to Take Array elements.
    insertArrayElements(array, arraySize);

    // Calling Function to get element to search and find it.
    elementToSearch(array, arraySize);

    return 0;
}

// Defintion of a function Inserting an Array Elements.
void insertArrayElements(int array[], size_t arraySize)
{
    // Inserting an array elements.
    for (int i{0}; i < arraySize; i++)
    {
        cout << "Enter arr[" << i << "] = ";
        cin >> array[i];
    }
}

// Defintion of a function for elements search.
void elementToSearch(int array[], size_t arraySize)
{
    // Taking an element to search.
    int elementToSearch;

    cout << "\nEnter the element to search = ";
    cin >> elementToSearch;

    // Calling function to search in array.
    int result = linearSearch(array, arraySize, elementToSearch);

    if (result == -1)
    {
        cout << "\nSorry!!, Your element [" << elementToSearch << "] is not found.";
    }
    else
    {
        cout << "\nYour element (" << elementToSearch << ") is at " << result << " Index.";
    }
}

// Defintion of a function linearSearch.
int linearSearch(int array[], size_t arraySize, int elementToSearch)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == elementToSearch)
        {
            return i;
        }
    }
    return -1;
}
