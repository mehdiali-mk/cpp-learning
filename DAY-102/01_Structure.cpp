/*
Aim = Structure
Author = Mehdiali (MK).
Date = 05 / May / 2024 - 11:10 PM.
*/

#include <iostream>
using namespace std;
#include <string>
using namespace std;

struct Book
{
    string name;
    string author;
    string publisher;
    int pages;
};

int main()
{

    struct Book book;

    cout << "Book Name: ";
    getline(cin, book.name);

    cout << "Author's name: ";
    getline(cin, book.author);

    cout << "Publisher's name: ";
    getline(cin, book.publisher);

    cout << "Number of pages: ";
    cin >> book.pages;

    cout << "\nDetails of the book:\n";
    cout << "Name: " << book.name << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publisher: " << book.publisher << endl;
    cout << "Number of pages: " << book.pages << endl;

    return 0;
}