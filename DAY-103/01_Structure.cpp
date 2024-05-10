/*
Aim = Structure
Author = Mehdiali (MK).
Date = 10 / May / 2024 - 08:24 PM.
*/

#include <iostream>
using namespace std;
#include <string>
using namespace std;

struct Book
{
    char name[100];
    char author[100];
    char publisher[100];
    int pages;
};

int main()
{
    struct Book books[3] = {
        {"Atomic Habits", "James Clear", "Random House", 200},
        {"You Can Win", "Shiv Khera", "Macmillan", 300},
        {"Secret", "Rhonda Byrne", "Simon & Schuster", 250}};

    cout << "Details of books:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Book %" << i + 1 << endl;
        cout << "Name: " << books[i].name << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Publisher: " << books[i].publisher << endl;
        cout << "Number of pages: " << books[i].pages << endl;
        cout << "\n";
    }
    return 0;
}
