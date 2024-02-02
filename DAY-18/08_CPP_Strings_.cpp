/*
 Aim = To demonstrate the CPP strings.
 Author = Mehdiali (MK).
 Date = 02 / February / 2024 - 07:43 PM.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6(s1, 0, 3);
    string s7(10, 'X');

    // cout << s0 << endl;
    // cout << s0.length() << endl;

    cout << "Comparision" << endl;
    cout << "--------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == "
         << "Apple"
         << ": " << (s1 == "Apple") << endl
         << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Cold";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'H';
    cout << "1st letter of s3 is changed: " << s3 << endl;
    s3.at(0) = 'B';
    cout << "1st letter of s3 is changed: " << s3 << endl;

    cout << "\n\nConcatenation" << endl;
    cout << "--------------------------" << endl;
    s3 = s5 + " and " + s2 + " juice.";
    cout << "s3 is now: " << s3 << endl;

    cout << "\n\nLooping" << endl;
    cout << "--------------------------" << endl;
    cout << "s1 is now: ";
    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); i++)
    {
        cout << s1.at(i);
    }
    cout << endl;
    cout << "s1 is now: ";
    s1 = "Watermelon";
    for (char c : s1)
    {
        cout << c;
    }
    cout << endl;

    cout << "\n\nSubstring" << endl;
    cout << "--------------------------" << endl;
    s1 = "This is my home.";

    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(8, 2) << endl;
    cout << s1.substr(11, 5) << endl;

    cout << "\n\nErasing" << endl;
    cout << "--------------------------" << endl;
    s1 = "This is my home.";

    cout << "s1 is now: " << s1 << endl;
    cout << "s1 is now: " << s1.erase(8, 3) << endl;

    cout << "\n\nGetline" << endl;
    cout << "--------------------------" << endl;
    string fullName{};

    cout << "Enter the full name = ";
    getline(cin, fullName);

    cout << "You full name = " << fullName;

    cout << "\n\nFinding" << endl;
    cout << "--------------------------" << endl;

    s1 = "The secret word is BOO.";
    string word{};

    cout << "Enter the word to find = ";
    cin >> word;

    size_t position = s1.find(word);
    if (position <= s1.length())
    {
        cout << "Found " << word << " at position: " << position << endl;
    }
    else
    {
        cout << "Sorry! " << word << " is not found." << endl;
    }

    return 0;
}