/*
 Aim = Pass two arrays in a function, multiply all elements of array1 with array2 and generate a new array and return the address of newly created array.
 Author = Mehdiali (MK).
 Date = 25 / February / 2024 - 04:44 PM.
*/

#include <iostream>
using namespace std;

int *multiplyArray(int arr1[], size_t size1, int arr2[], size_t size2);
void displayResult(int arr[], size_t size);

int main()
{
    size_t size1{5}, size2{3};

    int arr1[]{1, 2, 3, 4, 5};
    int arr2[]{10, 20, 30};

    int *result = multiplyArray(arr1, size1, arr2, size2);
    int resultSize = size1 * size2;
    cout << "\nArray3:\n";
    displayResult(result, resultSize);
    return 0;
}

int *multiplyArray(int arr1[], size_t size1, int arr2[], size_t size2)
{
    size_t size3 = size1 * size2, k = 0;
    int *arr3{};
    arr3 = new int[size1 * size2];

    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            arr3[k] = arr1[j] * arr2[i];
            k++;
        }
    }

    return arr3;
}

void displayResult(int arr[], size_t size)
{
    cout << "\n[";
    for (int i = 0; i < size; i++)
    {
        if (i % 5 == 0)
        {
            cout << "\n  ";
        }
        cout << arr[i] << " ";
    }
    cout << "\n]\n";
}