/*
 Aim = To Demonstrate access modifiers in class.
 Author = Mehdiali (MK).
 Date = 29 / February / 2024 - 05:52 PM.
*/

#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int score;

public:
    void talk(string playerSays)
    {
        cout << endl
             << name << " says, " << playerSays << endl;
    }
    void assignName(string playerName)
    {
        name = playerName;
    }
    bool isDead();
};

int main()
{
    Player mehdiali;
    mehdiali.assignName("Mehdiali Kadiwala");
    mehdiali.talk("Hello World!!");

    return 0;
}