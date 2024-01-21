# >>==>> DAY - 6

# Vectors.

- Suppose we want to store testScore for my school.
- I have no way of knowing how many students will register next year.
- Options:
  - Pick a size that you are not likely to exceed and use static arrays.
  - Use a dynamic array such as vector.

# What is a vector?

Container in the C++ Standard Template Library.
An Array that can grow and shrink in size at execution time.
Provides similar semantics and syntax as arrays.
Very efficient.
Can provide bounds checking.
Can use lots of cool functions like sort reverse, find and more.

# Declaring vectors.

#include <vector>
using namespace std;

vector <char> vowels;
vector <int> testScore;

vector <char> vowels (5); // here 5 indicates the size of vector.
vector <int> testScore (10); // here 10 indicates the size of vector.

- Every int vector elements have default value 0.

# Initializing vectors.

- vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
- vector <int> testScore {100, 98, 89, 85, 93};
- vector <double> highTemperature (365, 80.0); // Here 365 is the size of a vector and all the 365 elements are initialized with 80.0 value.

# Characteristics of vector.

- Dynamic size.
- Elements are all the same type.
- Stored contiguously in memory.
- Individual elements can be accessed by their position or index.
- First element is at index 0.
- last element is at index size - 1.
- [] - no checking to see if you are out of bounds.
- Provides many useful function that do bounds check.
- Elements intialized to zero.
- Very efficient.
- Iteration (Looping) is often used to process.

# Accessing vector elements - using array syntax.

- vectorName [element_index];
- testScore [1];

- e.g.
<pre>
    vector <int> testScore {100, 95, 99, 87, 88};

    cout << "1st score at index 0: " << testScore[0] << endl;
    cout << "2nd score at index 1: " << testScore[1] << endl;
    cout << "3rd score at index 2: " << testScore[2] << endl;
    cout << "4th score at index 3: " << testScore[3] << endl;
    cout << "5th score at index 4: " << testScore[4] << endl;
</pre>

# Accessing vector elements - using vector syntax.

- vectorName.at(element_index);
- testScore.at(1);

- e.g.
<pre>
    vector <int> testScore {100, 95, 99, 87, 88};

    cout << "1st score at index 0: " << testScore.at(0) << endl;
    cout << "2nd score at index 1: " << testScore.at(1) << endl;
    cout << "3rd score at index 2: " << testScore.at(2) << endl;
    cout << "4th score at index 3: " << testScore.at(3) << endl;
    cout << "5th score at index 4: " << testScore.at(4) << endl;
</pre>

# Assigning a value to vector elements - using vector syntax.

- testScore.at(0) = 90;

# Adding elements to a vector.

- vector_name.push_back(element);

e.g.
vector <int> testScore {100, 95, 99}; // vectore size is 3.
testScore.push_back(80); // 100, 95, 99, 80.
testScore.push_back(90); // 100, 95, 99, 80, 90.

- Vector will automatically allocate the required space!
