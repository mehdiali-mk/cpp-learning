/*
Aim = Queue Insertion Deletion
Author = Mehdiali (MK).
Date = 29 / Apr / 2023 - 06:38 PM.
*/

// #include <stdio.h>
#include <iostream>
// #include <conio.h>
using namespace std;
#include <stdlib.h>

void queueInsertion(int[], int *, int *, int, int);
int queueDeletion(int[], int *, int *);
void queueDisplay(int[], int, int);

int main()
{
    cout << "\n\n~~ Written By: Mehdiali (MK) ~~\n\n";

    int front = -1, rear = -1, sizeOfArray, value, returnValue, choice;

    cout << "Enter the size of the array = ";
    cin >> sizeOfArray;

    int array[sizeOfArray];

    while (1)
    {
        cout << "\n\nEnter 1. Insert 2. Delete 3. Exit";
        cout << "\nEnter your choice = ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value = ";
            cin >> value;
            queueInsertion(array, &front, &rear, sizeOfArray, value);
            break;

        case 2:
            returnValue = queueDeletion(array, &front, &rear);
            cout << "Deleted value = " << returnValue << endl;

            break;
        case 3:

            exit(0);
            break;
        default:

            cout << "Invalid Option.\n";
            break;
        }

        queueDisplay(array, front, rear);
    }

    // getch();
    return 0;
}

void queueInsertion(int array[], int *front, int *rear, int sizeOfArray, int value)
{
    if (*rear >= sizeOfArray - 1)
    {
        cout << "Overflow!!!...\n";
        return;
    }
    *rear = *rear + 1;
    array[*rear] = value;

    if (*front == -1)
    {
        *front = 0;
    }
}

int queueDeletion(int array[], int *front, int *rear)
{
    int returnValue;

    if (*front <= -1)
    {
        cout << "Overflow!!!...\n";
        return -1;
    }

    returnValue = array[*front];

    if (*front == *rear)
    {
        *front = *rear = -1;
    }
    else
    {
        *front = *front + 1;
    }

    return returnValue;
}

void queueDisplay(int array[], int front, int rear)
{
    cout << "Queue Elements: ";
    if (front != -1)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << "   " << array[i];
        }
    }
}
