/*
 Aim = To Demonstrate class and object.
 Author = Mehdiali (MK).
 Date = 27 / February / 2024 - 06:29 PM.
*/

#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
    string name;
    int health;
    int score;
    bool isDead;

    bool checkWin(double);
    void talk(string sentence)
    {
        cout << this->name << " says:\n"
             << sentence << endl;
    }
};

class Account
{
public:
    string name;
    int accountNumber;
    double balance;

    void deposit(double depositAmount)
    {
        this->balance += depositAmount;
        cout << "\nYour deposit amount = " << depositAmount;
        cout << "\nCurrent Balance = " << this->balance;
    }
    void withdraw(double withdrawAmount)
    {
        this->balance -= withdrawAmount;
        cout << "\nYour withdrawal amount = " << withdrawAmount;
        cout << "\nCurrent Balance = " << this->balance;
    }
};

int main()
{
    Player mehdiali;
    Account ahesanali;

    mehdiali.name = "Mehdiali Kadiwala";
    mehdiali.health = 100;
    mehdiali.score = 95;
    mehdiali.isDead = {false};
    mehdiali.talk("Hey, I Finished this level.");

    ahesanali.name = "Ahesanali Kadiwala";
    ahesanali.balance = 20000;

    ahesanali.deposit(1000.00);
    ahesanali.withdraw(3000.00);
    return 0;
}