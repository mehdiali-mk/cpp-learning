/*
 Aim = A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every ‘a’ get replaced with an ‘X’, and every ‘b’ gets replaced with a ‘Z’, etc.

Write a program that ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypted the encrypted message back to the original message.

You may use the 2 strings below for your substitution.
For example, to encrypt you can replace the character at position n in alphabet with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters – you could easily add digits, punctuation, whitespace and so forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.
Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!

abcdefghijklmnopqustuvwxyzABCDEFGHIJKLMNOPQUSTUVWXYZ
XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr

 Author = Mehdiali (MK).
 Date = 03 / February / 2024 - 02:46 PM.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet = "abcdefghijklmnopqrustuvwxyzABCDEFGHIJKLMNOPQUSTUVWXYZ";
    string changedAlphabet = "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";
    string message{};

    cout << "Enter the secret message = ";
    getline(cin, message);

    string encryptedMessage{};
    for (char c : message)
    {
        size_t position = alphabet.find(c);
        if (position != string::npos)
        {
            char newChar{changedAlphabet.at(position)};
            encryptedMessage += newChar;
        }
        else
        {
            encryptedMessage += c;
        }
    }

    cout << "\nMessage is encrypting...\n";

    cout << "\nEncrypted message = " << encryptedMessage;

    string decryptedMessage{};

    for (char c : encryptedMessage)
    {
        size_t position = changedAlphabet.find(c);
        if (position != string::npos)
        {
            char newChar = alphabet.at(position);
            decryptedMessage += newChar;
        }
        else
        {
            decryptedMessage += c;
        }
    }
    cout << "\n\nMessage is decrypting...\n";
    cout << "\nDecrypted Message = " << decryptedMessage;

    return 0;
}