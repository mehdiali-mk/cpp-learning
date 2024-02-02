# >>==>> DAY - 18.

# C++ Strings

- std::string is a class int the Standard Template Library
  - #include <string>
  - Std namespace.
  - Contiguous in memory.
  - Dynamic size.
  - Work with input and output streams.
  - Lots of useful member functions.
  - Our familiar operators can be used (+,=,<,<=,>,>=,+=,==,!=,[]...).
  - Can be easily converted to C-style strings if needed.
  - Safer

# Declaring and Intitalizing C++ Strings.

<pre>
#include <string>
using namespace std;

string s1;                      // Empty string
string s2 {"Mehdiali"};         // Mehdiali
string s3 {s2};                 // Mehdiali
string s4 {"Mehdiali", 3};      // Meh
string s5 {s3, 0, 2};           // Me
string s6 (3, 'X');             // XXX
</pre>

# Assignment (=)

- string s1;
- s1 = "I Like C++.";

- string s2 {"Hello World"};
- s2 = s1;

# Concatenation

- string part1 {"C++"};
- string part2 {"is a powerful"};

- string sentence;

- sentence = para1 + " " + part2 + " language"; // C++ is a powerful language.

# Assessing characters [] and at() method.

<pre>
string s1;
string s2 {"Mehdiali"};

cout << s2[0] << endl;		// M
cout << s2.at(0) << endl; 	// M

s2[0] = 'f';		  // mehdiali
s2.at(0) = '_';   // _ehdiali
</pre>

# Comparing

== != > >= < <=

- The objects are compared character by character laxically.

- Can compare:
- two std::string objects.'
- std::string object and C-style string literal.
- std::string object and C-style string variable.

# Substrings - substr()

- Extracts a substring from a std::string

- object.substr(start_index, length)

- string s1 {"This is a test"};

- cout << s1.substr(0,4); // This
- cout << s1.substr(5,2); // is
- cout << s1.substr(10,4); // test

# Searching - find()

- Returns the index of a substring in a std::string

- object.find(search_string)

- string st {"This is a test"};

- cout << s1.find("This"); // 0
- cout << s1.find("is"); // 2
- cout << s1.find("test"); // 10
- cout << s1.find('e'); // 11
- cout << s1.find("is", 4); // 5
- cout << s1.find("XX"); // string::npos

# Removing characters - erase() and clear().

- Removes a substring of characters from a std::string

- object.erase(start_index, length)

- string s1 {"This is a test"};

- cout << s1.erase(0,5); // is a test.
- cout << s1.erase(5,4); // is a
- s1.clear(); // empties string s1

# Other userful methods.

- string s1 {"Frank"};

- cout << s1.length() << endl; // 5

- s1 += " James";
- cout << s1 << endl; // Frank James

- Many more...

# input >> and getline()

- Reading std::string from cin.

<pre>
    string s1;
    cin >> s1; // Hello there
    // Only accepts up to the first space.
    cout << s1 << endl; // Hello,

    getline(cin, s1); // Read entire line until \n.
    cout << s1 << endl; // Hello there

    getline(cin, s1, 'x'); // this isx
    cout << s1 << endl; // this is
</pre>
