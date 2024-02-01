# >>==>> DAY - 17.

# Character Functions

<pre>
#include <cctype>
	function_name(char)
</pre>

- Functions for testing characters.
- Functions for converting character case.

# Testing characters.

- isalpha(c).
- True if c is a letter.

- isalnum(c).
- True if c is a letter or digit.

- isdigit(c).
- True if c is a digit.

- islower(c).
- True if c is loewrcase letter.

- isprint(c).
- True if c is a printable character.

- ispunct(c).
- True if c is a punctuation character.

- isupper(c).
- True if c is an uppercase letter.

- isspace(c).
- True if c is whitespace.

# Converting characters.

- tolower(c)
- returns lowercase of c.

- toupper(c)
- returns uppercase of c.

# C-Style Strings

- Sequence of characters.

  - Contiguous in memory.
  - Implemented as an array of characters.
  - Terminated by a null character (null).
    - Null - character with a value of zero.
  - Referred to as zero or null terminated strings.

- String literal.
  - Sequence of charactes in double quotes, e.g. "Mehdiali".
  - Constant
  - Teminated with null character.

<cstring>
<cstdlib>
