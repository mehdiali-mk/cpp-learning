/*
 Aim = Vector pass by refrence.
 Author = Mehdiali (MK).
 Date = 12 / February / 2024 - 10:43 PM.
*/

#include <iostream>
#include <vector>
using namespace std;

char menu();
void switchChoice(char choice, vector<int> &vectorList, bool &flag);
void printVector(vector<int> &vectorList);
void addVector(vector<int> &vectorList);
void meanVector(vector<int> &vectorList);
void smallestNumber(vector<int> &vectorList);
void largestNumber(vector<int> &vectorList);
void quit(bool &flag);

int main()
{
    char choice{};
    vector<int> vectorList{};
    bool flag{true};
    while (flag)
    {
        choice = menu();
        switchChoice(choice, vectorList, flag);
    }
}

char menu()
{
    char choice;
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
            return choice;
        }
        cout << "\nUnknown selection, please try again." << endl;
    }
}

void switchChoice(char choice, vector<int> &vectorList, bool &flag)
{
    switch (choice)
    {
    case 'P':
    case 'p':
        printVector(vectorList);
        break;
    case 'A':
    case 'a':
        addVector(vectorList);
        break;
    case 'M':
    case 'm':
        meanVector(vectorList);
        break;
    case 'S':
    case 's':
        smallestNumber(vectorList);
        break;
    case 'L':
    case 'l':
        largestNumber(vectorList);
        break;
    case 'Q':
    case 'q':
        quit(flag);
        break;
    default:
        flag = false;
        cout << "ERROR" << endl;
        break;
    }
}
void printVector(vector<int> &vectorList)
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
void addVector(vector<int> &vectorList)
{
    int newInteger{};
    cout << "\nAdd new Integer = ";
    cin >> newInteger;

    vectorList.push_back(newInteger);
    cout << "\n"
         << newInteger << " is added.";
}
void meanVector(vector<int> &vectorList)
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
void smallestNumber(vector<int> &vectorList)
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
void largestNumber(vector<int> &vectorList)
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
void quit(bool &flag)
{
    flag = false;
    cout << "Goodbye." << endl;
}
