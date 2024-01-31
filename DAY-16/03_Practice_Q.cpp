

/*
 Aim = This challenge is about using a collection (vectorList) of integers and allowing the user to select options from a menu to perform operations on the vectorList.

Your program should display a menu options to the user as follows:

P - Print numbers.
A - Add a number.
M - Display mean of the numbers.
S - Display the smallest number.
L - Display the largest number.
Q - Quit.

Enter your choice:

The program should only accept valid choice from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be displayed again.

If the user enters 'P' or 'p', you should display all the elements (ints) in the vectorList.
If the vectorList is empty you should display "[] - the vectorList is empty".
If the vectorList is not empty then all the vectorList element should be displayed inside square brackets separated by a space.
For example, [1 2 3 4 5].

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the vectorList which you will add to the vectorList and then display it was added. For example, if the user enters 5. You should display, "5 is added".
Duplicate vectorList entries are OK.

If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the vectorList and display it.
If the vectorList is empty you should display, "Unable to calculate the mean - no data".

If the user enters 'S' or 's' you should display the smallest element in the vectorList.
For example, if the vectorList contains [2 4 5 1], you should display. "The smallest number is 1".
If the vectorList is empty you should display, "Unable to determine the smallest number - vectorList is empty".

If the user enters 'L' or 'l' you should display the largest element in the vectorList.
For example, if the vectorList contains [2 4 5 1], you should display. "The largest number is 5".
If the vectorList is empty you should display, "Unable to determine the largest number - vectorList is empty".

If the user enters 'Q' or 'q' then you should display "Goodbye." and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!.

Finally, be sure to test your program as you go at the end.

Hint: Use a vector!.

Additional functionality if you wish to extend this program.

Search for a number in the vectorList and if found display the number of times it occurs in the vectorList.
Clearing out the vectorList (make it empty again) (Hint: the vector class has a .clear() method.).
Don't allow duplicate entries.
Come up with your own ideas!

Good Luck!

*********************************
You've got loops and loops within loops and if statements and maybe switch statements and maybe do loops maybe while loops. It's really up to you to decide how to solve it.
*********************************

 Author = Mehdiali (MK).
 Date = 31 / January / 2024 - 04:38 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    char choice{};
    vector<int> vectorList{};
    bool flag{true};
    while (flag)
    {
        while (true)
        {
            cout << "\n\n------------------" << endl;
            cout << "P - Print numbers." << endl;
            cout << "A - Add a number." << endl;
            cout << "M - Display mean of the numbers." << endl;
            cout << "S - Display the smallest number." << endl;
            cout << "L - Display the largest number." << endl;
            cout << "Q - Quit." << endl;

            cout << "\nEnter your choice = ";
            cin >> choice;

            if (choice == 'P' || choice == 'A' || choice == 'M' || choice == 'S' || choice == 'L' || choice == 'Q' || choice == 'p' || choice == 'a' || choice == 'm' || choice == 's' || choice == 'l' || choice == 'q')
            {
                break;
            }
            cout << "\nUnknown selection, please try again." << endl;
        }

        switch (choice)
        {
        case 'P':
        case 'p':
        {
            if (vectorList.size() == 0)
            {
                cout << "\n[] - the vectorList is empty.";
            }
            else
            {
                cout << "\n[";
                for (auto val : vectorList)
                {
                    cout << " " << val << " ";
                }
                cout << "]";
            }
        }
        break;
        case 'A':
        case 'a':
        {
            int newInteger{};
            cout << "\nAdd new Integer = ";
            cin >> newInteger;

            vectorList.push_back(newInteger);
            cout << "\n"
                 << newInteger << " is added.";
        }
        break;

        case 'M':
        case 'm':
        {
            if (vectorList.size() == 0)
            {
                cout << "\nUnable to calculate the mean - no data.";
            }
            else
            {
                int sum{};
                for (auto val : vectorList)
                {
                    sum += val;
                }
                cout << "\nMean of vectorList = " << (double)sum / vectorList.size();
            }
        }

        break;

        case 'S':
        case 's':
        {
            if (vectorList.size() == 0)
            {
                cout << "\nUnable to determine the smallest number - vectorList is empty";
            }
            else
            {
                int smallestNumber{};
                smallestNumber = vectorList.at(0);
                for (auto val : vectorList)
                {
                    if (smallestNumber > val)
                    {
                        smallestNumber = val;
                    }
                }
                cout << "\nSmallest Number = " << smallestNumber;
            }
        }
        break;
        case 'L':
        case 'l':
        {
            if (vectorList.size() == 0)
            {
                cout << "\nUnable to determine the smallest number - vectorList is empty";
            }
            else
            {
                int largestNumber{};
                largestNumber = vectorList.at(0);
                for (auto val : vectorList)
                {
                    if (largestNumber < val)
                    {
                        largestNumber = val;
                    }
                }
                cout << "\nSmallest Number = " << largestNumber;
            }
        }
        break;
        case 'Q':
        case 'q':
            flag = false;
            cout << "Goodbye." << endl;
            break;
        default:
            flag = false;
            cout << "ERROR" << endl;
            break;
        }
    }

    return 0;
}